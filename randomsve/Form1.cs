using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        Random lol = new Random();

        private void aToolStripMenuItem_Paint(object sender, PaintEventArgs e)
        {
            Graphics g = CreateGraphics();

            for (int i=0;i<500;i++)
            {
                int shape = lol.Next(0, 3);

               Color col = Color.FromArgb(255, lol.Next(0, 255), lol.Next(0,255),lol.Next(0,255));
                if (shape==0)
                {
                    int o = lol.Next(1, 100);
                    g.FillEllipse(new SolidBrush(col), lol.Next(0, this.ClientRectangle.Width - o), lol.Next(0, this.ClientRectangle.Height - o), o, o);

                }
                else if(shape==1)
                {
                    int width = lol.Next(1, 100);
                    g.FillRectangle(new SolidBrush(col), lol.Next(0, this.ClientRectangle.Width - width), lol.Next(0, this.ClientRectangle.Height - width), width, width);
                }
                else if (shape==2)
                {
                    int v = lol.Next(1, 100);
                    g.FillPie(new SolidBrush(col), lol.Next(0, this.ClientRectangle.Width - v), lol.Next(0, this.ClientRectangle.Height - v), v, v, lol.Next(0, 360), lol.Next(0, 360));
                }
            }
            double r = lol.Next(1, 100);
            g.FillEllipse(Brushes.Green, 50, 50, 20, 20);
        }
    }
}
