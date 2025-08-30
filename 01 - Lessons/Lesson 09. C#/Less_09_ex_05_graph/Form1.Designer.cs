
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
            this.groupBoxSelectType.Controls.Add(this.radioButtonEdges);
            this.groupBoxSelectType.Controls.Add(this.radioButtonVertices);
            this.groupBoxSelectType.Location = new System.Drawing.Point(592, 21);
            this.groupBoxSelectType.Name = "groupBoxSelectType";
            this.groupBoxSelectType.Size = new System.Drawing.Size(187, 112);
            this.groupBoxSelectType.TabIndex = 0;
            this.groupBoxSelectType.TabStop = false;
            this.groupBoxSelectType.Text = "Select Type";
            // 
            // radioButtonEdges
            // 
            this.radioButtonEdges.AutoSize = true;
            this.radioButtonEdges.Location = new System.Drawing.Point(25, 69);
            this.radioButtonEdges.Name = "radioButtonEdges";
            this.radioButtonEdges.Size = new System.Drawing.Size(80, 24);
            this.radioButtonEdges.TabIndex = 1;
            this.radioButtonEdges.TabStop = true;
            this.radioButtonEdges.Text = "Edges";
            this.radioButtonEdges.UseVisualStyleBackColor = true;
            // 
            // radioButtonVertices
            // 
            this.radioButtonVertices.AutoSize = true;
            this.radioButtonVertices.Location = new System.Drawing.Point(25, 30);
            this.radioButtonVertices.Name = "radioButtonVertices";
            this.radioButtonVertices.Size = new System.Drawing.Size(92, 24);
            this.radioButtonVertices.TabIndex = 0;
            this.radioButtonVertices.TabStop = true;
            this.radioButtonVertices.Text = "Vertices";
            this.radioButtonVertices.UseVisualStyleBackColor = true;
            // 
            // panelDraw
            // 
            this.panelDraw.BackColor = System.Drawing.SystemColors.ControlLightLight;
            this.panelDraw.Location = new System.Drawing.Point(22, 21);
            this.panelDraw.Name = "panelDraw";
            this.panelDraw.Size = new System.Drawing.Size(547, 403);
            this.panelDraw.TabIndex = 1;
            this.panelDraw.Click += new System.EventHandler(this.panel1_Click);
            this.panelDraw.Paint += new System.Windows.Forms.PaintEventHandler(this.panelDraw_Paint);
            this.panelDraw.MouseDown += new System.Windows.Forms.MouseEventHandler(this.panel1_MouseDown);
            this.panelDraw.MouseMove += new System.Windows.Forms.MouseEventHandler(this.panelDraw_MouseMove);
            this.panelDraw.MouseUp += new System.Windows.Forms.MouseEventHandler(this.panelDraw_MouseUp);
            // 
            // buttonSave
            // 
            this.buttonSave.Location = new System.Drawing.Point(592, 303);
            this.buttonSave.Name = "buttonSave";
            this.buttonSave.Size = new System.Drawing.Size(186, 49);
            this.buttonSave.TabIndex = 2;
            this.buttonSave.Text = "Save...";
            this.buttonSave.UseVisualStyleBackColor = true;
            this.buttonSave.Click += new System.EventHandler(this.buttonSave_Click);
            // 
            // buttonOpen
            // 
            this.buttonOpen.Location = new System.Drawing.Point(593, 375);
            this.buttonOpen.Name = "buttonOpen";
            this.buttonOpen.Size = new System.Drawing.Size(186, 49);
            this.buttonOpen.TabIndex = 3;
            this.buttonOpen.Text = "Open...";
            this.buttonOpen.UseVisualStyleBackColor = true;
            this.buttonOpen.Click += new System.EventHandler(this.buttonOpen_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.buttonOpen);
            this.Controls.Add(this.buttonSave);
            this.Controls.Add(this.panelDraw);
            this.Controls.Add(this.groupBoxSelectType);
            this.Name = "Form1";
            this.Text = "Graph";
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

