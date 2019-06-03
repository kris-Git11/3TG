using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing.Drawing2D;
using System.Windows.Forms;

namespace klik_pojavikrug_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            
        }

        private Random rand = new Random();
        private int n=0;

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Graphics g = e.Graphics;
        }

        private void Form1_MouseClick(object sender, MouseEventArgs e)
        {
            Graphics g = CreateGraphics();
            Color c = Color.FromArgb(rand.Next(0, 255), rand.Next(0, 255), rand.Next(0, 255), rand.Next(0, 255));
            float b = rand.Next(0, 255);
            n++;
            g.DrawString(n.ToString(), new Font("Minion", b),new SolidBrush(c),e.X-b,e.Y-b);
            





            /*  kruznica s gradientom
            g.FillEllipse(new SolidBrush(c), e.X - b, e.Y - b, 2*b, 2*b);
            GraphicsPath path = new GraphicsPath();
            path.AddEllipse(e.X - b, e.Y - b, 2*b, 2*b);
            PathGradientBrush grbrush = new PathGradientBrush(path);
            grbrush.CenterColor = Color.FromArgb(255, rand.Next(0, 255), rand.Next(0, 255), rand.Next(0, 255));
            Color[] colors = { c };
            g.FillEllipse(grbrush, e.X - b, e.Y - b, 2*b, 2*b);
            */
            

            

        }
    }
}
