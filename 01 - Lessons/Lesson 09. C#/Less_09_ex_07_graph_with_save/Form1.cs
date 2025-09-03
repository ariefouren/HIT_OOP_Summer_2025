// Form1.cs
using System;
using System.Drawing;
using System.Windows.Forms;

using System.IO;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters.Binary;

namespace Less_11_ex_02_graph
{
    public partial class Form1 : Form
    {
        private MyGraph graph = new MyGraph();

        public Form1()
        {
            InitializeComponent();
        }

        private void panel1_Click(object sender, EventArgs e)
        {

        }

        private void panel1_MouseDown(object sender,
            MouseEventArgs e)
        {
            int prevSelectedVertex = graph.SelectedVertex;
            Point point = new Point(e.X, e.Y);
            int currentVertex = graph.VertexAtPoint(point);

            if (radioButtonVertices.Checked) // Vertex mode
            {
                // check if there is a vertex located at 
                // the mouse click point
                if (currentVertex == -1)
                {// no vertex at the give point - 
                 // create a new vertex
                    string label = graph.NumOfVertices.ToString();
                    int radius = 15;
                    Vertex newVertex = new Vertex(e.X, e.Y, radius, label);
                    graph.AddVertex(newVertex);
                }
                else // vertex currentVertex is at the given point
                {  // select the vertex
                    graph.SelectVertex(currentVertex);
                }
                
            }
            else // edge mode
            {
                if (prevSelectedVertex > -1 &&
                    currentVertex > -1)
                // both vertices exist
                {
                    graph.AddEdge(prevSelectedVertex, currentVertex);
                    graph.DeselectVertex();
                }
                else if(prevSelectedVertex == -1 &&
                    currentVertex > -1)
                {
                    graph.SelectVertex(currentVertex);
                }
            }
            panelDraw.Invalidate();
        }

        // redraw the graph when the panel is repainted
        // e.Graphics is the graphics object associated with the panel
        private void panelDraw_Paint(object sender, 
            PaintEventArgs e)
        {
            Graphics graphicsObject = e.Graphics;
            // set high quality rendering
            graphicsObject.SmoothingMode = 
                System.Drawing.Drawing2D.SmoothingMode.HighQuality;
            // draw the graph on the graphics object
            graph.Draw(graphicsObject);
        }

        // move the selected vertex by dragging it with the mouse
        private void panelDraw_MouseMove(object sender, MouseEventArgs e)
        {
            if (radioButtonVertices.Checked) // Vertex mode
            {
                Point point = new Point(e.X, e.Y);
                graph.MoveSelectedVertex(point);
                if (graph.SelectedVertex > -1)
                {
                     panelDraw.Invalidate();
                }
            }
        }

        private void panelDraw_MouseUp(object sender, MouseEventArgs e)
        {
            if (radioButtonVertices.Checked) // Vertex mode
            {
                graph.DeselectVertex();
                panelDraw.Invalidate();
            }
        }

        // save the graph to a file
        // using serialization
        private void buttonSave_Click(object sender, EventArgs e)
        {
            // creates an instance of the SaveFileDialog class,
            // which provides a dialog for saving files
            SaveFileDialog saveFileDialog1 = new SaveFileDialog();
            saveFileDialog1.InitialDirectory = Directory.GetCurrentDirectory();
            saveFileDialog1.Filter = "model files (*.mdl)|*.mdl|All files (*.*)|*.*";
            // set the default filter to the first filter option
            saveFileDialog1.FilterIndex = 1;
            // ensures that the dialog box restores the current directory
            saveFileDialog1.RestoreDirectory = true;

            // display the file dialog and check if the user clicked the "OK" button
            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                // create an instance of the BinaryFormatter class,
                IFormatter formatter = new BinaryFormatter();
                // 'using' statement ensures that the object is disposed
                // even if an exception occurs within the block of the using statement.
                // specifically, the opened file is properly closed
                // after it is processed.
                // open the selected file in write mode using a 'FileStream'
                using (Stream stream = new FileStream(saveFileDialog1.FileName, 
                    FileMode.Create,    // create a new file or overwrite an existing file
                    FileAccess.Write,   // enable writing to the file
                    FileShare.None))    // prevent other processes from accessing the file
                                        // while it's being written
                {
                    // serialize the 'graph' object
                    // and writes the serialized data to the file stream
                    formatter.Serialize(stream, graph); 
                }
            }
        }

        // load the graph from a file
        // using deserialization
        private void buttonOpen_Click(object sender, EventArgs e)
        {   // creates an instance of the OpenFileDialog class,
            // which provides a dialog for opening files
            OpenFileDialog openFileDialog1 = new OpenFileDialog();
            // set the initial directory for the file dialog
            // to the current working directory of the application
            openFileDialog1.InitialDirectory = Directory.GetCurrentDirectory();
            // specify the filter options for the file dialog
            // allow the user to select files with .mdl extension or any other type of file
            openFileDialog1.Filter = "model files (*.mdl)|*.mdl|All files (*.*)|*.*";
            // set the default filter to the first filter option
            openFileDialog1.FilterIndex = 1;
            // ensures that the dialog box restores the current directory
            // to its original value if the user changes the directory while browsing
            openFileDialog1.RestoreDirectory = true;
            // display the file dialog and check if the user clicked the "OK" button
            if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                // open the selected file in read mode using a 'FileStream'
                Stream stream = File.Open(openFileDialog1.FileName, FileMode.Open);
                // create an instance of the BinaryFormatter class,
                // which is used for deserializing binary data
                var binaryFormatter = new System.Runtime.Serialization.Formatters.Binary.BinaryFormatter();
                // deserialize the data from the file stream using the BinaryFormatter
                // and casts it to object 'graph' of the MyGraph class
                graph = (MyGraph)binaryFormatter.Deserialize(stream);
                // update the displayed graph after loading its data from the file
                panelDraw.Invalidate();
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }

    // TODO:
    // 1. Convert ArrayList to List<T>      [Done]
    // 2. Implement serialization           [Done]
    // 3. Implement edges                   [Done]
    // 4. Implement vertex delete 
    // 5. Implement vertex inheritance

}
