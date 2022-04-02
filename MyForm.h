#pragma once
//#include <string>

namespace Laboratory3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			panel3->Hide();
			//
			//TODO: Add the constructor code here
			//
		}
		OleDbConnection^ con = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=db_users.mdb");
		OleDbCommand^ cmd = gcnew OleDbCommand();
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	public:
		OleDbDataAdapter^ da = gcnew OleDbDataAdapter();
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ tbUsername;

	private: System::Windows::Forms::TextBox^ tbFullname;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ tbConPassword;

	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ errorMessage;


	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->errorMessage = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->tbConPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->tbFullname = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 30));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(51, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 67);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign In";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(58, 168);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(58, 230);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(63, 197);
			this->textBox1->MaxLength = 26;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(217, 27);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(63, 259);
			this->textBox2->MaxLength = 26;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(217, 27);
			this->textBox2->TabIndex = 4;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(63, 286);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(217, 2);
			this->panel1->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Location = System::Drawing::Point(63, 224);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(217, 2);
			this->panel2->TabIndex = 6;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(66, 302);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(132, 24);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Show Password";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button1->Location = System::Drawing::Point(63, 359);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(217, 42);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Sign In";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->label4->ForeColor = System::Drawing::Color::Gainsboro;
			this->label4->Location = System::Drawing::Point(59, 408);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"New User\?";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(126, 408);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Register";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Lithos Pro Regular", 11));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(1, 1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(30, 30);
			this->button2->TabIndex = 11;
			this->button2->Text = L"X";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->errorMessage);
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->panel7);
			this->panel3->Controls->Add(this->tbConPassword);
			this->panel3->Controls->Add(this->tbPassword);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->checkBox2);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->tbUsername);
			this->panel3->Controls->Add(this->tbFullname);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1000, 600);
			this->panel3->TabIndex = 12;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 2));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(3, 584);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(15, 4);
			this->label13->TabIndex = 31;
			this->label13->Text = L"label13";
			// 
			// errorMessage
			// 
			this->errorMessage->AutoSize = true;
			this->errorMessage->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->errorMessage->ForeColor = System::Drawing::Color::DarkRed;
			this->errorMessage->Location = System::Drawing::Point(57, 458);
			this->errorMessage->Name = L"errorMessage";
			this->errorMessage->Size = System::Drawing::Size(0, 20);
			this->errorMessage->TabIndex = 30;
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Location = System::Drawing::Point(63, 348);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(217, 2);
			this->panel6->TabIndex = 29;
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Location = System::Drawing::Point(63, 410);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(217, 2);
			this->panel7->TabIndex = 28;
			// 
			// tbConPassword
			// 
			this->tbConPassword->BackColor = System::Drawing::Color::Black;
			this->tbConPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbConPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->tbConPassword->ForeColor = System::Drawing::SystemColors::Window;
			this->tbConPassword->Location = System::Drawing::Point(63, 383);
			this->tbConPassword->MaxLength = 26;
			this->tbConPassword->Name = L"tbConPassword";
			this->tbConPassword->Size = System::Drawing::Size(217, 27);
			this->tbConPassword->TabIndex = 27;
			this->tbConPassword->UseSystemPasswordChar = true;
			// 
			// tbPassword
			// 
			this->tbPassword->BackColor = System::Drawing::Color::Black;
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->tbPassword->ForeColor = System::Drawing::SystemColors::Window;
			this->tbPassword->Location = System::Drawing::Point(63, 321);
			this->tbPassword->MaxLength = 26;
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(217, 27);
			this->tbPassword->TabIndex = 26;
			this->tbPassword->UseSystemPasswordChar = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(58, 354);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(164, 25);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Confirm Password";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(58, 292);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(91, 25);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Password";
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Lithos Pro Regular", 11));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(1, 1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(30, 30);
			this->button3->TabIndex = 23;
			this->button3->Text = L"X";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(199, 530);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 20);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Sign in";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->label7->ForeColor = System::Drawing::Color::Gainsboro;
			this->label7->Location = System::Drawing::Point(57, 530);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(178, 20);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Already have an account\?";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button4->Location = System::Drawing::Point(61, 481);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(217, 42);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Register";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->checkBox2->ForeColor = System::Drawing::Color::White;
			this->checkBox2->Location = System::Drawing::Point(64, 417);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(132, 24);
			this->checkBox2->TabIndex = 19;
			this->checkBox2->Text = L"Show Password";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Location = System::Drawing::Point(63, 224);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(217, 2);
			this->panel4->TabIndex = 18;
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Location = System::Drawing::Point(63, 286);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(217, 2);
			this->panel5->TabIndex = 17;
			// 
			// tbUsername
			// 
			this->tbUsername->BackColor = System::Drawing::Color::Black;
			this->tbUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->tbUsername->ForeColor = System::Drawing::SystemColors::Window;
			this->tbUsername->Location = System::Drawing::Point(63, 259);
			this->tbUsername->MaxLength = 26;
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(217, 27);
			this->tbUsername->TabIndex = 16;
			// 
			// tbFullname
			// 
			this->tbFullname->BackColor = System::Drawing::Color::Black;
			this->tbFullname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbFullname->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->tbFullname->ForeColor = System::Drawing::SystemColors::Window;
			this->tbFullname->Location = System::Drawing::Point(63, 197);
			this->tbFullname->MaxLength = 26;
			this->tbFullname->Name = L"tbFullname";
			this->tbFullname->Size = System::Drawing::Size(217, 27);
			this->tbFullname->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(58, 230);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 25);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Username";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(58, 168);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(94, 25);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Full name";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 30));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(51, 79);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(206, 67);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Register";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->label14->ForeColor = System::Drawing::Color::DarkRed;
			this->label14->Location = System::Drawing::Point(59, 336);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 20);
			this->label14->TabIndex = 31;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 2));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(3, 564);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(15, 4);
			this->label15->TabIndex = 32;
			this->label15->Text = L"label15";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 600);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Student Login - CCS";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked) {
			textBox2->UseSystemPasswordChar = false;
		}
		else {
			textBox2->UseSystemPasswordChar = true;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		con->Open();
		label13->Text = "SELECT * FROM tbl_users WHERE username= '" + textBox1->Text + "' and password= '" + textBox2->Text + "'";
		cmd = gcnew OleDbCommand(label13->Text, con);
		OleDbDataReader^ dr = cmd->ExecuteReader();
		if (textBox1->Text == "" || textBox2->Text == "") {
			label14->Text = "*Please fill in the empty field/s.";
		}
		else if (dr->Read() == true) {
			label14->Text = "";
			MessageBox::Show("You have successfully signed in!", "Success!", MessageBoxButtons::OK, MessageBoxIcon::None);
			Application::Exit();
		}
		else {
			MessageBox::Show("Invalid Username or Password! Please try again.", "Sign In Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox1->Text == "";
			textBox2->Text == "";
		}
		con->Close();
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
		label14->Text = "";
		panel3->Show();
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
		panel3->Hide();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//Error Messages
		errorMessage->Text = "";
		if (tbFullname->Text == "" || tbUsername->Text == "" || tbPassword->Text == "" || tbConPassword->Text == "") {
			errorMessage->Text = "*Please fill in empty fields...";
		}
		else if (tbPassword->Text != tbConPassword->Text) {
			errorMessage->Text = "Passwords doesn't match...";
			tbPassword->Text = "";
			tbConPassword->Text = "";
		}
		else if (tbPassword->Text == tbConPassword->Text) {
			con->Open();
			label15->Text = "SELECT * FROM tbl_users WHERE username= '" + tbUsername->Text + "'";
			cmd = gcnew OleDbCommand(label15->Text, con);
			OleDbDataReader^ dr = cmd->ExecuteReader();
			if(dr->Read() == true){
				MessageBox::Show("Username is already used! Please try another username.", "Register Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
				dr->Close();
				con->Close();
			}
			else{
				dr->Close();
				label13->Text = "INSERT INTO tbl_users VALUES ('" + tbUsername->Text + "','" + tbPassword->Text + "','" + tbFullname->Text + "')";
				cmd = gcnew OleDbCommand(label13->Text, con);
				cmd->ExecuteNonQuery();
				con->Close();
				panel3->Hide();
				tbFullname->Text = "";
				tbUsername->Text = "";
				tbPassword->Text = "";
				tbConPassword->Text = "";
			}
		}
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox2->Checked) {
			tbPassword->UseSystemPasswordChar = false;
			tbConPassword->UseSystemPasswordChar = false;
		}
		else {
			tbPassword->UseSystemPasswordChar = true;
			tbConPassword->UseSystemPasswordChar = true;
		}
	}

	};
}
