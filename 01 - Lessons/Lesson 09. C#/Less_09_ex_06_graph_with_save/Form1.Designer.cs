
namespace Less_11_ex_02_graph
{
    partial class Form1
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
            this.groupBoxSelectType = new System.Windows.Forms.GroupBox();
            this.radioButtonEdges = new System.Windows.Forms.RadioButton();
            this.radioButtonVertices = new System.Windows.Forms.RadioButton();
            this.panelDraw = new System.Windows.Forms.Panel();
            this.buttonSave = new System.Windows.Forms.Button();
            this.buttonOpen = new System.Windows.Forms.Button();
            this.groupBoxSelectType.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupBoxSelectType
            // 
            this.groupBoxSelectType.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.groupBoxSelectType.Controls.Add(this.radioButtonEdges);
            this.groupBoxSelectType.Controls.Add(this.radioButtonVertices);
            this.groupBoxSelectType.Location = new System.Drawing.Point(789, 26);
            this.groupBoxSelectType.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.groupBoxSelectType.Name = "groupBoxSelectType";
            this.groupBoxSelectType.Padding = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.groupBoxSelectType.Size = new System.Drawing.Size(249, 140);
            this.groupBoxSelectType.TabIndex = 0;
            this.groupBoxSelectType.TabStop = false;
            this.groupBoxSelectType.Text = "Select Type";
            // 
            // radioButtonEdges
            // 
            this.radioButtonEdges.AutoSize = true;
            this.radioButtonEdges.Location = new System.Drawing.Point(33, 86);
            this.radioButtonEdges.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.radioButtonEdges.Name = "radioButtonEdges";
            this.radioButtonEdges.Size = new System.Drawing.Size(104, 29);
            this.radioButtonEdges.TabIndex = 1;
            this.radioButtonEdges.TabStop = true;
            this.radioButtonEdges.Text = "Edges";
            this.radioButtonEdges.UseVisualStyleBackColor = true;
            // 
            // radioButtonVertices
            // 
            this.radioButtonVertices.AutoSize = true;
            this.radioButtonVertices.Location = new System.Drawing.Point(33, 38);
            this.radioButtonVertices.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.radioButtonVertices.Name = "radioButtonVertices";
            this.radioButtonVertices.Size = new System.Drawing.Size(121, 29);
            this.radioButtonVertices.TabIndex = 0;
            this.radioButtonVertices.TabStop = true;
            this.radioButtonVertices.Text = "Vertices";
            this.radioButtonVertices.UseVisualStyleBackColor = true;
            // 
            // panelDraw
            // 
            this.panelDraw.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.panelDraw.BackColor = System.Drawing.SystemColors.ControlLightLight;
            this.panelDraw.Location = new System.Drawing.Point(29, 26);
            this.panelDraw.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.panelDraw.Name = "panelDraw";
            this.panelDraw.Size = new System.Drawing.Size(729, 504);
            this.panelDraw.TabIndex = 1;
            this.panelDraw.Click += new System.EventHandler(this.panel1_Click);
            this.panelDraw.Paint += new System.Windows.Forms.PaintEventHandler(this.panelDraw_Paint);
            this.panelDraw.MouseDown += new System.Windows.Forms.MouseEventHandler(this.panel1_MouseDown);
            this.panelDraw.MouseMove += new System.Windows.Forms.MouseEventHandler(this.panelDraw_MouseMove);
            this.panelDraw.MouseUp += new System.Windows.Forms.MouseEventHandler(this.panelDraw_MouseUp);
            // 
            // buttonSave
            // 
            this.buttonSave.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.buttonSave.Location = new System.Drawing.Point(789, 379);
            this.buttonSave.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.buttonSave.Name = "buttonSave";
            this.buttonSave.Size = new System.Drawing.Size(248, 61);
            this.buttonSave.TabIndex = 2;
            this.buttonSave.Text = "Save...";
            this.buttonSave.UseVisualStyleBackColor = true;
            this.buttonSave.Click += new System.EventHandler(this.buttonSave_Click);
            // 
            // buttonOpen
            // 
            this.buttonOpen.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.buttonOpen.Location = new System.Drawing.Point(791, 469);
            this.buttonOpen.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.buttonOpen.Name = "buttonOpen";
            this.buttonOpen.Size = new System.Drawing.Size(248, 61);
            this.buttonOpen.TabIndex = 3;
            this.buttonOpen.Text = "Open...";
            this.buttonOpen.UseVisualStyleBackColor = true;
            this.buttonOpen.Click += new System.EventHandler(this.buttonOpen_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.ClientSize = new System.Drawing.Size(1067, 562);
            this.Controls.Add(this.buttonOpen);
            this.Controls.Add(this.buttonSave);
            this.Controls.Add(this.panelDraw);
            this.Controls.Add(this.groupBoxSelectType);
            this.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.Name = "Form1";
            this.Text = "Graph";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.groupBoxSelectType.ResumeLayout(false);
            this.groupBoxSelectType.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBoxSelectType;
        private System.Windows.Forms.RadioButton radioButtonEdges;
        private System.Windows.Forms.RadioButton radioButtonVertices;
        private System.Windows.Forms.Panel panelDraw;
        private System.Windows.Forms.Button buttonSave;
        private System.Windows.Forms.Button buttonOpen;
    }
}

