
namespace Less_10_ex_03_morgage
{
    partial class mortgage_calc
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.groupBoxType = new System.Windows.Forms.GroupBox();
            this.radioButtonFV = new System.Windows.Forms.RadioButton();
            this.radioButtonPV = new System.Windows.Forms.RadioButton();
            this.buttonCalculate = new System.Windows.Forms.Button();
            this.textBoxRate = new System.Windows.Forms.TextBox();
            this.textBoxNper = new System.Windows.Forms.TextBox();
            this.textBoxPmt = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.groupBoxType.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupBoxType
            // 
            this.groupBoxType.Controls.Add(this.radioButtonFV);
            this.groupBoxType.Controls.Add(this.radioButtonPV);
            this.groupBoxType.Location = new System.Drawing.Point(660, 51);
            this.groupBoxType.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.groupBoxType.Name = "groupBoxType";
            this.groupBoxType.Padding = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.groupBoxType.Size = new System.Drawing.Size(221, 160);
            this.groupBoxType.TabIndex = 0;
            this.groupBoxType.TabStop = false;
            this.groupBoxType.Text = "Choose PV or FV";
            // 
            // radioButtonFV
            // 
            this.radioButtonFV.AutoSize = true;
            this.radioButtonFV.Location = new System.Drawing.Point(25, 101);
            this.radioButtonFV.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.radioButtonFV.Name = "radioButtonFV";
            this.radioButtonFV.Size = new System.Drawing.Size(70, 29);
            this.radioButtonFV.TabIndex = 1;
            this.radioButtonFV.TabStop = true;
            this.radioButtonFV.Text = "FV";
            this.radioButtonFV.UseVisualStyleBackColor = true;
            // 
            // radioButtonPV
            // 
            this.radioButtonPV.AutoSize = true;
            this.radioButtonPV.Location = new System.Drawing.Point(25, 41);
            this.radioButtonPV.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.radioButtonPV.Name = "radioButtonPV";
            this.radioButtonPV.Size = new System.Drawing.Size(71, 29);
            this.radioButtonPV.TabIndex = 0;
            this.radioButtonPV.TabStop = true;
            this.radioButtonPV.Text = "PV";
            this.radioButtonPV.UseVisualStyleBackColor = true;
            // 
            // buttonCalculate
            // 
            this.buttonCalculate.Location = new System.Drawing.Point(653, 236);
            this.buttonCalculate.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.buttonCalculate.Name = "buttonCalculate";
            this.buttonCalculate.Size = new System.Drawing.Size(228, 74);
            this.buttonCalculate.TabIndex = 1;
            this.buttonCalculate.Text = "Calculate";
            this.buttonCalculate.UseVisualStyleBackColor = true;
            this.buttonCalculate.MouseClick += new System.Windows.Forms.MouseEventHandler(this.buttonCalculate_MouseClick);
            // 
            // textBoxRate
            // 
            this.textBoxRate.Location = new System.Drawing.Point(312, 62);
            this.textBoxRate.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.textBoxRate.Name = "textBoxRate";
            this.textBoxRate.Size = new System.Drawing.Size(325, 31);
            this.textBoxRate.TabIndex = 2;
            // 
            // textBoxNper
            // 
            this.textBoxNper.Location = new System.Drawing.Point(312, 149);
            this.textBoxNper.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.textBoxNper.Name = "textBoxNper";
            this.textBoxNper.Size = new System.Drawing.Size(325, 31);
            this.textBoxNper.TabIndex = 3;
            // 
            // textBoxPmt
            // 
            this.textBoxPmt.Location = new System.Drawing.Point(312, 236);
            this.textBoxPmt.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.textBoxPmt.Name = "textBoxPmt";
            this.textBoxPmt.Size = new System.Drawing.Size(325, 31);
            this.textBoxPmt.TabIndex = 4;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(52, 66);
            this.label1.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(192, 25);
            this.label1.TabIndex = 5;
            this.label1.Text = "Annual Rate (in %)";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(52, 152);
            this.label2.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(58, 25);
            this.label2.TabIndex = 6;
            this.label2.Text = "Nper";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(52, 236);
            this.label3.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(49, 25);
            this.label3.TabIndex = 7;
            this.label3.Text = "Pmt";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(52, 334);
            this.label4.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(79, 25);
            this.label4.TabIndex = 8;
            this.label4.Text = "Result ";
            // 
            // mortgage_calc
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(907, 462);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.textBoxPmt);
            this.Controls.Add(this.textBoxNper);
            this.Controls.Add(this.textBoxRate);
            this.Controls.Add(this.buttonCalculate);
            this.Controls.Add(this.groupBoxType);
            this.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.Name = "mortgage_calc";
            this.Text = "Mortgage and Savings Calculator";
            this.Load += new System.EventHandler(this.mortgage_calc_Load);
            this.groupBoxType.ResumeLayout(false);
            this.groupBoxType.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBoxType;
        private System.Windows.Forms.RadioButton radioButtonFV;
        private System.Windows.Forms.RadioButton radioButtonPV;
        private System.Windows.Forms.Button buttonCalculate;
        private System.Windows.Forms.TextBox textBoxRate;
        private System.Windows.Forms.TextBox textBoxNper;
        private System.Windows.Forms.TextBox textBoxPmt;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
    }
}

