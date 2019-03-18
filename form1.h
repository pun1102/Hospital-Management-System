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
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			timer1->Start();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  time_lab;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  pass_txt;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  user_txt;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;

	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->time_lab = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pass_txt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->user_txt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// time_lab
			// 
			this->time_lab->AutoSize = true;
			this->time_lab->BackColor = System::Drawing::Color::Transparent;
			this->time_lab->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->time_lab->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->time_lab->Font = (gcnew System::Drawing::Font(L"Papyrus", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->time_lab->Location = System::Drawing::Point(3, 679);
			this->time_lab->Name = L"time_lab";
			this->time_lab->Size = System::Drawing::Size(89, 32);
			this->time_lab->TabIndex = 7;
			this->time_lab->Text = L"time_lab";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(123, 110);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(564, 23);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 26);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// pass_txt
			// 
			this->pass_txt->Location = System::Drawing::Point(312, 27);
			this->pass_txt->Name = L"pass_txt";
			this->pass_txt->Size = System::Drawing::Size(138, 21);
			this->pass_txt->TabIndex = 7;
			this->pass_txt->TextChanged += gcnew System::EventHandler(this, &Form1::pass_txt_TextChanged_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(475, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 26);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(650, 349);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(194, 38);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Insta HMS ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Username :";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->pass_txt);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->user_txt);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(713, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(647, 70);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Login";
			// 
			// user_txt
			// 
			this->user_txt->Location = System::Drawing::Point(88, 27);
			this->user_txt->Name = L"user_txt";
			this->user_txt->Size = System::Drawing::Size(138, 21);
			this->user_txt->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(236, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label4->Location = System::Drawing::Point(1221, 639);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 18);
			this->label4->TabIndex = 9;
			this->label4->Text = L"© Puneet Srivastava";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1362, 661);
			this->Controls->Add(this->time_lab);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1234";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from database.logincred where username='"+this->user_txt->Text+"' and password='"+this->pass_txt->Text+"';",conDataBase);
			 MySqlDataReader^ myReader;
				 int c=0;
				 try
				 {
					/*conDataBase ->Open();
					myReader=cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 c=c+1;
					 }
					 /*if(c==1)
					 {
						 MessageBox::Show("username and password is correct");
						 
					 }*/
					 if(user_txt->Text=="apollo"&& pass_txt->Text=="12345")
					 {
						 MessageBox::Show("username and password is correct");
						 this->Hide();
						 portfolio1^ prt=gcnew portfolio1();
						 prt->ShowDialog();
						 

						 
					 }
					 else if(user_txt->Text==""||pass_txt->Text=="")
						 MessageBox::Show("No field should be empty!");
					 else
						 MessageBox::Show("username and password is incorrect....Access Denied");
				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show("Error !!");

		 }

		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 DateTime datetime=DateTime::Now;
			 this->time_lab->Text=datetime.ToString();


		 }
private: System::Void pass_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 pass_txt->PasswordChar='*';
			 pass_txt->MaxLength=10;
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pass_txt_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

