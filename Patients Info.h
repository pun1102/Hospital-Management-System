#pragma once
#include "stdafx.h"
#include "portfolio1.h"

namespace HospitalManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for PatientsInfo
	/// </summary>
	public ref class PatientsInfo : public System::Windows::Forms::Form
	{
	public:
		PatientsInfo(void)
		{
			InitializeComponent();
			Filllist();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PatientsInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(490, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(268, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Patients Information";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(98, 104);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(285, 463);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Patient Details";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(112, 42);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 21);
			this->textBox2->TabIndex = 41;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(71, 45);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(38, 15);
			this->label13->TabIndex = 40;
			this->label13->Text = L"Date :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(112, 85);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 21);
			this->textBox1->TabIndex = 38;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(73, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 15);
			this->label2->TabIndex = 37;
			this->label2->Text = L"PID :";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(172, 216);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(63, 19);
			this->radioButton2->TabIndex = 36;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Female";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(112, 216);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(51, 19);
			this->radioButton1->TabIndex = 35;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Male";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(57, 218);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 15);
			this->label9->TabIndex = 33;
			this->label9->Text = L"Gender :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Location = System::Drawing::Point(54, 314);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(55, 15);
			this->label10->TabIndex = 34;
			this->label10->Text = L"Address :";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(112, 311);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox9->Size = System::Drawing::Size(121, 63);
			this->textBox9->TabIndex = 29;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &PatientsInfo::textBox9_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(114, 403);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(121, 21);
			this->textBox7->TabIndex = 28;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(112, 262);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(121, 21);
			this->textBox10->TabIndex = 30;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(112, 175);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(121, 21);
			this->textBox11->TabIndex = 31;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(37, 265);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 15);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Contact No :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(65, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 15);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Name :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(75, 178);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 15);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Age :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(58, 406);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 15);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Disease :";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(112, 128);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 21);
			this->textBox3->TabIndex = 27;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->textBox8);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Location = System::Drawing::Point(436, 110);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(291, 170);
			this->groupBox3->TabIndex = 21;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Room Details";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(53, 83);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Room No :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(77, 125);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Cost :";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(114, 79);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(121, 20);
			this->textBox8->TabIndex = 13;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(114, 122);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(121, 20);
			this->textBox5->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(61, 41);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Building :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(114, 38);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 20);
			this->textBox4->TabIndex = 9;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(771, 113);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(495, 394);
			this->listBox1->TabIndex = 22;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &PatientsInfo::listBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1207, 633);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 27);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Close";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PatientsInfo::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(537, 335);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 27);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Update";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PatientsInfo::button2_Click_1);
			// 
			// PatientsInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1284, 661);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"PatientsInfo";
			this->Text = L"PatientsInfo";
			this->Load += gcnew System::EventHandler(this, &PatientsInfo::PatientsInfo_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
	         portfolio^ pf=gcnew portfolio();
			 pf->ShowDialog();

		 }
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1234";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("update database.patdetails set date='"+this->dateTimePicker1->Text+"',pid= '"+this->pid->Text+"',name='"+this->p_name->Text+"',age='"+this->p_age->Text+"',gender='"+Gender+"',contact='"+this->p_cont->Text+"',address='"+this->p_add->Text+"',disease='"+this->p_dis->Text+"',room_no='"+this->room_txt->Text+"',building='"+this->build_txt->Text+"',cost='"+this->cost_txt->Text+"' where name='"+this->p_name->Text+"';",conDataBase);
			 MySqlDataReader^ myReader;
				 try
				 {
					conDataBase ->Open();
					myReader=cmdDataBase->ExecuteReader();
					MessageBox::Show("Data Saved");
					 while(myReader->Read())
					 {
					 }
				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show("Error !!");

		 }

		 }
private: void Filllist(void){
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1234";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * database.pat_details;",conDataBase);
			 MySqlDataReader^ myReader;
				 try
				 {
					conDataBase ->Open();
					myReader=cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 String^ pname;
						 myReader->GetString("name");
						 listBox1->Items->Add(pname);
					 }
				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show("Error !!");

		 }
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ listval=listBox1->Text;

			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1234";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * database.pat_details where name= '"+listval+"';",conDataBase);
			 MySqlDataReader^ myReader;
				 try
				 {
					conDataBase ->Open();
					myReader=cmdDataBase->ExecuteReader();
					 if(myReader->Read())
					 {
						 String^ vname=myReader->GetString("name");
						 p_name->Text=vname;

						 String^ vage=myReader->GetInt32("age").ToString();
						 p_age->Text=vage;

						 String^ vpid=myReader->GetInt32("pid").ToString();
						 pid->Text=vpid;

						 String^ vadd=myReader->GetString("address");
						 p_add->Text=vadd;

						 String^ vcont=myReader->GetInt32("contact").ToString();
						 p_cont->Text=vcont;

						 String^ vgen=myReader->GetString("gender");
						 Gender=vgen;

						 String^ vdis=myReader->GetString("disease");
						 p_dis->Text=vdis;
						 
						 String^ vroom=myReader->GetInt32("room_no").ToString();
						 room_txt->Text=vroom;
						 
						 String^ vbuild=myReader->GetInt32("building").ToString();
						 build_txt->Text=vname;
						 
						 String^ vcost=myReader->GetInt32("cost").ToString();
						 cost_txt->Text=vname;

					 }
				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show("Error !!");

		 }


		 }
};
}
