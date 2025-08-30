using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Less_10_ex_03_morgage
{
    public partial class mortgage_calc : Form
    {
        public mortgage_calc()
        {
            InitializeComponent();
        }

       private void buttonCalculate_MouseClick(object sender, MouseEventArgs e)
        {
            double rate = double.Parse(textBoxRate.Text) /12 / 100;
            double nper = double.Parse(textBoxNper.Text);
            double pmt = double.Parse(textBoxPmt.Text);

            if (radioButtonFV.Checked) 
            {
                double fv = (pmt * (Math.Pow(1 + rate, nper) - 1)) / rate;
                label4.Text = "FV = " + fv.ToString("###,###,###.00");
            }
            else // radioButtonPV.Checked 
            {
                double pv = pmt * ((1 - Math.Pow(1 + rate, -nper)) / rate);
                label4.Text = "PV = " + pv.ToString("###,###,###.00");
            }
            
        }

    }
}
