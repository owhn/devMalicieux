using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace csTest
{
    public partial class FENETR : Form
    {
        public FENETR()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e){
            string prenom = txtPrenom.Text; 



            MessageBox.Show(prenom+" est votre prénom.");
        }

        private void txtPrenom_KeyDown(object sender, EventArgs e)
        {
            string prenom = txtPrenom.Text;



            MessageBox.Show(prenom + " est votre prénom.");
        }
    }
}
