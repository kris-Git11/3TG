using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ballsbouncing
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        // Some drawing parameters.
        private Rectangle[] BallLocation;
        private Point[] BallVelocity;
        private Size FormSize;

        private void Form1_Load(object sender, EventArgs e)
        {
            // Make random balls.
            Random rand = new Random();
            const int num_balls = 500;
            BallLocation = new Rectangle[num_balls];
            BallVelocity = new Point[num_balls];
            for (int i = 0; i < num_balls; i++)
            {
                int width = rand.Next(10, 40);
                BallLocation[i] = new Rectangle(
                    rand.Next(0, ClientSize.Width - 2 * width),
                    rand.Next(0, ClientSize.Height - 2 * width),
                    width, width);
                int vx = rand.Next(2, 10);
                int vy = rand.Next(2, 10);
                if (rand.Next(0, 2) == 0) vx = -vx;
                if (rand.Next(0, 2) == 0) vy = -vy;
                BallVelocity[i] = new Point(vx, vy);
            }
            // Save the form's size.
            FormSize = ClientSize;

            // Use double buffering to reduce flicker.
            this.SetStyle(
                ControlStyles.AllPaintingInWmPaint |
                ControlStyles.UserPaint |
                ControlStyles.DoubleBuffer,
                true);
            this.UpdateStyles();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            for (int ball_num = 0;
                ball_num < BallLocation.Length;
                ball_num++)
            {
                // Move the ball.
                int new_x = BallLocation[ball_num].X +
                    BallVelocity[ball_num].X;
                int new_y = BallLocation[ball_num].Y +
                    BallVelocity[ball_num].Y;
                if (new_x < 0)
                {
                    BallVelocity[ball_num].X = -BallVelocity[ball_num].X;
                    
                }
                else if (new_x + BallLocation[ball_num].Width >
                    FormSize.Width)
                {
                    BallVelocity[ball_num].X = -BallVelocity[ball_num].X;
                    
                }
                if (new_y < 0)
                {
                    BallVelocity[ball_num].Y = -BallVelocity[ball_num].Y;
                    
                }
                else if (new_y + BallLocation[ball_num].Height >
                    FormSize.Height)
                {
                    BallVelocity[ball_num].Y = -BallVelocity[ball_num].Y;
                    
                }

                BallLocation[ball_num] = new Rectangle(
                    new_x, new_y,
                    BallLocation[ball_num].Width,
                    BallLocation[ball_num].Height);
            }

            Refresh();
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            //e.Graphics.SmoothingMode = SmoothingMode.AntiAlias;
            e.Graphics.Clear(BackColor);
            for (int i = 0; i < BallLocation.Length; i++)
            {
                e.Graphics.FillEllipse(Brushes.Red, BallLocation[i]);
                e.Graphics.DrawEllipse(Pens.Black, BallLocation[i]);
            }
        }
    }
}
