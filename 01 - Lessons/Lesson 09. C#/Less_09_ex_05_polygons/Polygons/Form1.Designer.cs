namespace Polygons
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
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
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            panelDraw = new Panel();
            groupBox1 = new GroupBox();
            radioButtonPolygon = new RadioButton();
            radioButtonLines = new RadioButton();
            buttonColor = new Button();
            buttonClear = new Button();
            groupBox1.SuspendLayout();
            SuspendLayout();
            // 
            // panelDraw
            // 
            panelDraw.Anchor = AnchorStyles.Top | AnchorStyles.Bottom | AnchorStyles.Left | AnchorStyles.Right;
            panelDraw.BackColor = SystemColors.ButtonHighlight;
            panelDraw.BorderStyle = BorderStyle.FixedSingle;
            panelDraw.Location = new Point(28, 20);
            panelDraw.Name = "panelDraw";
            panelDraw.Size = new Size(1409, 776);
            panelDraw.TabIndex = 0;
            panelDraw.Paint += panelDraw_Paint;
            panelDraw.MouseDown += panelDraw_MouseDown;
            // 
            // groupBox1
            // 
            groupBox1.Anchor = AnchorStyles.Top | AnchorStyles.Right;
            groupBox1.Controls.Add(radioButtonPolygon);
            groupBox1.Controls.Add(radioButtonLines);
            groupBox1.Location = new Point(1468, 20);
            groupBox1.Name = "groupBox1";
            groupBox1.Size = new Size(251, 217);
            groupBox1.TabIndex = 1;
            groupBox1.TabStop = false;
            groupBox1.Text = "Select type";
            groupBox1.Enter += groupBox1_Enter;
            // 
            // radioButtonPolygon
            // 
            radioButtonPolygon.AutoSize = true;
            radioButtonPolygon.Location = new Point(26, 143);
            radioButtonPolygon.Name = "radioButtonPolygon";
            radioButtonPolygon.Size = new Size(131, 36);
            radioButtonPolygon.TabIndex = 1;
            radioButtonPolygon.Text = "Polygon";
            radioButtonPolygon.UseVisualStyleBackColor = true;
            // 
            // radioButtonLines
            // 
            radioButtonLines.AutoSize = true;
            radioButtonLines.Checked = true;
            radioButtonLines.Location = new Point(26, 72);
            radioButtonLines.Name = "radioButtonLines";
            radioButtonLines.Size = new Size(99, 36);
            radioButtonLines.TabIndex = 0;
            radioButtonLines.TabStop = true;
            radioButtonLines.Text = "Lines";
            radioButtonLines.UseVisualStyleBackColor = true;
            // 
            // buttonColor
            // 
            buttonColor.Location = new Point(1468, 274);
            buttonColor.Name = "buttonColor";
            buttonColor.Size = new Size(244, 63);
            buttonColor.TabIndex = 2;
            buttonColor.Text = "Color";
            buttonColor.UseVisualStyleBackColor = true;
            buttonColor.Click += buttonColor_Click;
            // 
            // buttonClear
            // 
            buttonClear.Location = new Point(1471, 386);
            buttonClear.Name = "buttonClear";
            buttonClear.Size = new Size(244, 63);
            buttonClear.TabIndex = 3;
            buttonClear.Text = "Clear";
            buttonClear.UseVisualStyleBackColor = true;
            buttonClear.Click += buttonClear_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(13F, 32F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(1731, 821);
            Controls.Add(buttonClear);
            Controls.Add(buttonColor);
            Controls.Add(groupBox1);
            Controls.Add(panelDraw);
            Name = "Form1";
            Text = "Polygons";
            Load += Form1_Load;
            groupBox1.ResumeLayout(false);
            groupBox1.PerformLayout();
            ResumeLayout(false);
        }

        #endregion

        private Panel panelDraw;
        private GroupBox groupBox1;
        private RadioButton radioButtonPolygon;
        private RadioButton radioButtonLines;
        private Button buttonColor;
        private Button buttonClear;
    }
}
