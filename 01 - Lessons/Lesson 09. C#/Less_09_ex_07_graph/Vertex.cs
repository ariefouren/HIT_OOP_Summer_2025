// Vertex.cs
using System;
using System.Drawing;

namespace Less_11_ex_02_graph
{
    [Serializable] // allow serialization: the objects can be stored 
    // and restored from file
    class Vertex
    {
        private int xPos;
        private int yPos;
        private int radius;
        private string label;
        private Rectangle boundingRectangle;
        private bool selected = false;
        private Color backgroundColor = Color.White;
        private Color borderColor = Color.Black;

        public Vertex(int xPos, int yPos,
                        int radius, string label)
        {
            this.xPos = xPos;
            this.yPos = yPos;
            this.radius = radius;
            this.label = label;

            boundingRectangle = new Rectangle(xPos - radius,
                yPos - radius,
                2 * radius,
                2 * radius);
        }

        public void Draw(Graphics graphicsObject)
        {
            // fill vertex background 
            Brush brush = new SolidBrush(backgroundColor);
            graphicsObject.FillEllipse(brush, boundingRectangle);

            // draw vertex label
            brush = new SolidBrush(borderColor);
            Font font = new Font("Arial", 12);
            Point location = new Point(xPos, yPos - 10);
            // Set format of string.
            StringFormat stringFormat = new StringFormat();
            stringFormat.Alignment = StringAlignment.Center;
            graphicsObject.DrawString(label, font, brush, location, stringFormat);

            // draw vertex border
            Pen pen = new Pen(borderColor);
            graphicsObject.DrawEllipse(pen, boundingRectangle);
        }

        public int XPos
        {
            get { return xPos; }
        }

        public int YPos
        {
            get { return yPos; }
        }

        public void SetLocation(Point point)
        {
            xPos = point.X;
            yPos = point.Y;
            boundingRectangle = new Rectangle(xPos - radius,
                    yPos - radius,
                    2 * radius,
                    2 * radius);
        }

        public bool Selected
        {
            get { return selected; }
            set
            {
                if (value == true)
                {
                    selected = true;
                    backgroundColor = Color.Gray;
                }
                else // value == false
                {
                    selected = false;
                    backgroundColor = Color.White;
                }
            }
        }

        // get bound rectangle of the vertex 
        // used for checking collisions 
        public Rectangle GetBounds()
        {
            return boundingRectangle;
        }

        public Color BackgroundColor
        {
            set
            {
                backgroundColor = value;
            }
        }
    }
}
