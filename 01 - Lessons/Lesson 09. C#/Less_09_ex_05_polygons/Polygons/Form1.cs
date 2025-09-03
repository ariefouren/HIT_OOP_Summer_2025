using System.Collections;

namespace Polygons
{
    public partial class Form1 : Form
    {
        // List to store the points of the polygon
        private ArrayList points = new ArrayList();

        // Pen and Brush for drawing
        Pen pen = new Pen(Color.DarkBlue);
        SolidBrush brush = new SolidBrush(Color.DarkBlue);

        public Form1()
        {
            InitializeComponent(); // This call is required by the designer.
            this.DoubleBuffered = true; // Reduce flickering
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }


        // Event handler for painting the panel
        // happens when the panel needs to be redrawn
        // such as when it is resized or uncovered
        // param sender: the object that raised the event
        // param e: event arguments containing data about the event
        // such as the graphics context to draw on
        private void panelDraw_Paint(object sender, PaintEventArgs e)
        {
            // Get the graphics object from the event args
            Graphics g = e.Graphics;
            // Draw the points as a polygon if there are enough points
            if (points.Count > 1)
            {
                Point[] arr = (Point[])points.ToArray(points[0].GetType());
                if (radioButtonLines.Checked)
                    g.DrawLines(pen, arr); // Draw lines between the points
                if (radioButtonPolygon.Checked)
                    g.FillPolygon(brush, arr); // Fill the polygon defined by the points
            }
        }

        // Event handler for mouse clicks on the panel
        // param sender: the object that raised the event
        // param e: event arguments containing data about the mouse event
        // when the mouse button is pressed down,
        // a new point is added to the list
        private void panelDraw_MouseDown(object sender, MouseEventArgs e)
        {
            points.Add(new Point(e.X, e.Y)); // add new point to list
            panelDraw.Invalidate();          // refresh
        }

        // Event handler for the "Color" button click
        private void buttonColor_Click(object sender, EventArgs e)
        {
            // Show a color dialog to select a color
            // If the user selects a color, update the pen and brush colors
            // 'pen' and 'brush' are class-level variables
            using var dialog = new ColorDialog();
            if (dialog.ShowDialog() == DialogResult.OK)
            {
                pen.Color = dialog.Color; // 'pen' is a class-level variable in class Form1
                brush.Color = dialog.Color; // 'brush' is a class-level variable in class Form1
                panelDraw.Invalidate(); // refresh
            }

        }

        private void buttonClear_Click(object sender, EventArgs e)
        {
            points = new ArrayList();     // clear points
            panelDraw.Invalidate();       // redraw empty canvas
        }
    }
}
