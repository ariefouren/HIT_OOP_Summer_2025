namespace Draw
{
    public partial class Draw : Form
    {
        private bool toDraw = false;
        public Draw()
        {
            InitializeComponent();
            this.DoubleBuffered = true;
        }
               

        private void Draw_MouseDown(object sender, MouseEventArgs e)
        {
            toDraw = true;
        }

        private void Draw_MouseUp(object sender, MouseEventArgs e)
        {
            toDraw = false;
        }

        // the MouseMove event is triggered when the mouse moves over the form
        // while the mouse button is pressed
        // parameters:
        // sender: the source of the event (the form)
        // e: contains data about the mouse event, including the mouse position
        private void Draw_MouseMove(object sender, MouseEventArgs e)
        {
            if (toDraw) // If the mouse button is pressed, draw
            {   // Create a graphics object and a brush to draw
                // 'using' ensures resources are disposed of properly
                using (Graphics g = this.CreateGraphics())
                // 'var' lets the compiler infer the type of 'b' based 
                // on the assigned value
                using (var b = new SolidBrush(Color.BlueViolet))
                {
                    g.FillEllipse(b, e.X, e.Y, 4, 4);
                }
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Invalidate(); // clears the form
        }
    }
}
