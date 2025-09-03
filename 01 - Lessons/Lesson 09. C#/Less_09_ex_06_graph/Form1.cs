// Adapted from:
// H.Deitel, P. Deitel. C# How to Program
//
using System;
using System.Drawing;
using System.Windows.Forms;
using System.Collections;

namespace Less_11_ex_01_graph
{
    public partial class Graph : System.Windows.Forms.Form
    {
        private ArrayList points = new ArrayList();
        // pen is used to draw outlines of shapes
        Pen pen = new Pen(Color.DarkBlue);
        // brush is used to fill the interior of shapes 
        SolidBrush brush = new SolidBrush(Color.DarkBlue);

        public Graph()
        {
            InitializeComponent();
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void panelDraw_Paint(object sender, 
            PaintEventArgs e)
        {
            // get graphics object for panel
            Graphics graphicsObject = e.Graphics;
            if(points.Count > 1)
            {
                // get array to use in drawing functions
                // use the type of the 0-th element
                Point[] pointArray =
                    (Point[])points.ToArray(
                        points[0].GetType());
                if(radioButtonLines.Checked)
                { // draw lines
                    graphicsObject.DrawLines(pen, pointArray);
                }
                if(radioButtonPolygon.Checked)
                {
                    // draw polygon
                    graphicsObject.FillPolygon(brush, pointArray);
                }
            }
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void buttonClear_Click(object sender, EventArgs e)
        {
            points = new ArrayList();   // remove all points
            // no delete is required due to
            // the automatic garbage collection
            panelDraw.Invalidate();

        }

        private void buttonColor_Click(object sender, EventArgs e)
        {
            ColorDialog dialog = new ColorDialog();
            DialogResult result = dialog.ShowDialog();
            if (result == DialogResult.Cancel) return;
            pen.Color = dialog.Color;
            brush.Color = dialog.Color;
            panelDraw.Invalidate();
        }

        private void panelDraw_MouseDown(object sender, MouseEventArgs e)
        {
            // add mouse position to the points list
            points.Add(new Point(e.X, e.Y)); 
            panelDraw.Invalidate(); // refresh panel
        }
    }
}
