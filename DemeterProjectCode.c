using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.OleDb;
using System.Net.Mail;

namespace Brgy_Appointment_WAPP
{
    public partial class ScheduleH : Form
    {
        public ScheduleH()
        {
            InitializeComponent();
        }

        OleDbConnection connection = new OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=DB_Users.mdb");
        OleDbCommand command = new OleDbCommand();
        OleDbDataAdapter da = new OleDbDataAdapter();

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "" && textBox2.Text == "" && textBox3.Text == "" && textBox4.Text == "")
            {
                MessageBox.Show("NAME and DATE AND TIME invalid/no Inputs", "Scheduling Failed", MessageBoxButtons.OK, MessageBoxIcon.Error);

            }
            else if (button1.Text == button1.Text)
            {
                connection.Open();
                string register = "INSERT INTO tbl_schedule VALUES ('" + textBox1.Text + "','" + textBox2.Text + "','" + textBox3.Text + "','" + textBox4.Text + "')";
                command = new OleDbCommand(register, connection);
                command.ExecuteNonQuery();
                connection.Close();

                textBox1.Text = "";
                textBox2.Text = "";
                textBox3.Text = "";
                textBox4.Text = "";


                MessageBox.Show("Your Schedule has been Successfully Created", "SCHEDULE Success", MessageBoxButtons.OK, MessageBoxIcon.Information);

                try
                {
                    using (MailMessage mail = new MailMessage())
                    {
                        mail.From = new MailAddress("TestEmail@gmail.com"); //User who will be sending their schedule. 
                        mail.To.Add("amjtubello@donbosco.edu.ph"); //Alter to government officials email preference. 
                        mail.Subject = " Confirmation Appointment ";
                        mail.Body = "<h1> Your schedule has been successfully submitted. </h1>" + "\n" + "<h2> Wait for reply/confirmation. </h2>";
                        mail.IsBodyHtml = true;

                        using (SmtpClient smtp = new SmtpClient("smtp.gmail.com", 587))
                        {
                            smtp.Credentials = new System.Net.NetworkCredential("amjtubello@donbosco.edu.ph", "Hello31403");
                            smtp.EnableSsl = true;
                            smtp.Send(mail);
                            MessageBox.Show("Mail Sent");
                        }
                    }
                }
                catch (Exception ex)
                {
                    MessageBox..(ex.Message);
                }

            }
        }


        private void ListViewForm(object sender, EventArgs e)
        {


        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Confirm Logout", "Logging out...", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                new frmLogin().Show();
                this.Hide();
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            
    }
    }
}
