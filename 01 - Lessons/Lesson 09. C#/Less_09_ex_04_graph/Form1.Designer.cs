
namespace Less_11_ex_01_graph
{
    partial class Graph
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
            this.panelDraw = new System.Windows.Forms.Panel();
            this.groupBoxGraphElements = new System.Windows.Forms.GroupBox();
            this.radioButtonPolygon = new System.Windows.Forms.RadioButton();
            this.radioButtonLines = new System.Windows.Forms.RadioButton();
            this.buttonClear = new System.Windows.Forms.Button();
            this.buttonColor = new System.Windows.Forms.Button();
            this.groupBoxGraphElements.SuspendLayout();
            this.SuspendLayout();
            // 
            // panelDraw
            // 
            this.panelDraw.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.panelDraw.Location = new System.Drawing.Point(16, 20);
            this.panelDraw.Name = "panelDraw";
            this.panelDraw.Size = new System.Drawing.Size(535, 403);
            this.panelDraw.TabIndex = 0;
            this.panelDraw.Paint += new System.Windows.Forms.PaintEventHandler(this.panelDraw_Paint);
            this.panelDraw.MouseDown += new System.Windows.Forms.MouseEventHandler(this.panelDraw_MouseDown);
            // 
            // groupBoxGraphElements
            // 
            this.groupBoxGraphElements.Controls.Add(this.radioButtonPolygon);
            this.groupBoxGraphElements.Controls.Add(this.radioButtonLines);
            this.groupBoxGraphElements.Location = new System.Drawing.Point(581, 25);
            this.groupBoxGraphElements.Name = "groupBoxGraphElements";
            this.groupBoxGraphElements.Size = new System.Drawing.Size(209, 120);
            this.groupBoxGraphElements.TabIndex = 1;
            this.groupBoxGraphElements.TabStop = false;
            this.groupBoxGraphElements.Text = "Select Type";
            // 
            // radioButtonPolygon
            // 
            this.radioButtonPolygon.AutoSize = true;
            this.radioButtonPolygon.Location = new System.Drawing.Point(20, 72);
            this.radioButtonPolygon.Name = "radioButtonPolygon";
            this.radioButtonPolygon.Size = new System.Drawing.Size(90, 24);
            this.radioButtonPolygon.TabIndex = 1;
            this.radioButtonPolygon.TabStop = true;
            this.radioButtonPolygon.Text = "Polygon";
            this.radioButtonPolygon.UseVisualStyleBackColor = true;
            this.radioButtonPolygon.CheckedChanged += new System.EventHandler(this.radioButton2_CheckedChanged);
            // 
            // radioButtonLines
            // 
            this.radioButtonLines.AutoSize = true;
            this.radioButtonLines.Location = new System.Drawing.Point(20, 30);
            this.radioButtonLines.Name = "radioButtonLines";
            this.radioButtonLines.Size = new System.Drawing.Size(72, 24);
            this.radioButtonLines.TabIndex = 0;
            this.radioButtonLines.TabStop = true;
            this.radioButtonLines.Text = "Lines";
            this.radioButtonLines.UseVisualStyleBackColor = true;
            this.radioButtonLines.CheckedChanged += new System.EventHandler(this.radioButton1_CheckedChanged);
            // 
            // buttonClear
            // 
            this.buttonClear.Location = new System.Drawing.Point(581, 189);
            this.buttonClear.Name = "buttonClear";
            this.buttonClear.Size = new System.Drawing.Size(208, 52);
            this.buttonClear.TabIndex = 2;
            this.buttonClear.Text = "Clear";
            this.buttonClear.UseVisualStyleBackColor = true;
            this.buttonClear.Click += new System.EventHandler(this.buttonClear_Click);
            // 
            // buttonColor
            // 
            this.buttonColor.Location = new System.Drawing.Point(584, 282);
            this.buttonColor.Name = "buttonColor";
            this.buttonColor.Size = new System.Drawing.Size(204, 56);
            this.buttonColor.TabIndex = 3;
            this.buttonColor.Text = "Color";
            this.buttonColor.UseVisualStyleBackColor = true;
            this.buttonColor.Click += new System.EventHandler(this.buttonColor_Click);
            // 
            // Graph
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveBorder;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.buttonColor);
            this.Controls.Add(this.buttonClear);
            this.Controls.Add(this.groupBoxGraphElements);
            this.Controls.Add(this.panelDraw);
            this.Name = "Graph";
            this.Text = "Drawing";
            this.groupBoxGraphElements.ResumeLayout(false);
            this.groupBoxGraphElements.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel panelDraw;
        private System.Windows.Forms.GroupBox groupBoxGraphElements;
        private System.Windows.Forms.RadioButton radioButtonPolygon;
        private System.Windows.Forms.RadioButton radioButtonLines;
        private System.Windows.Forms.Button buttonClear;
        private System.Windows.Forms.Button buttonColor;
    }
}

