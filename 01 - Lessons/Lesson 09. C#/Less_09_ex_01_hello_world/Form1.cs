using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Less_10_ex_01_hello_world
{
    public partial class helloWorld : Form
    {
        public helloWorld()
        {
            InitializeComponent();
        }

        private void button1_MouseClick(object sender, MouseEventArgs e)
        {
            outputLabel.Text = "Hello, World !";
        }
    }
}
