#pragma once
#include "dbconn.h"
#include "UserSession.h"
#include "MainForm.h"


namespace AshesiMSApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for LogForm
	/// </summary>
	public ref class LogForm : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDta = gcnew MySqlDataAdapter();

	
	public:
		MySqlDataReader^ sqlRd;
		LogForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LogForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ picbox_login;
	private: System::Windows::Forms::Label^ lb_email;
	private: System::Windows::Forms::Label^ lb_password;
	private: System::Windows::Forms::TextBox^ txt_Email;
	private: System::Windows::Forms::TextBox^ txt_password;











	private: System::Windows::Forms::LinkLabel^ lb_forgot;
	private: System::Windows::Forms::Button^ btn_login;



	private: System::Windows::Forms::Label^ lb_title;
	private: System::Windows::Forms::Button^ btn_cancel;
	private: System::Windows::Forms::PictureBox^ picbox_logo;



	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LogForm::typeid));
			this->picbox_login = (gcnew System::Windows::Forms::PictureBox());
			this->lb_email = (gcnew System::Windows::Forms::Label());
			this->lb_password = (gcnew System::Windows::Forms::Label());
			this->txt_Email = (gcnew System::Windows::Forms::TextBox());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->lb_forgot = (gcnew System::Windows::Forms::LinkLabel());
			this->btn_login = (gcnew System::Windows::Forms::Button());
			this->lb_title = (gcnew System::Windows::Forms::Label());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->picbox_logo = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbox_login))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbox_logo))->BeginInit();
			this->SuspendLayout();
			// 
			// picbox_login
			// 
			this->picbox_login->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picbox_login.Image")));
			this->picbox_login->Location = System::Drawing::Point(0, -1);
			this->picbox_login->Name = L"picbox_login";
			this->picbox_login->Size = System::Drawing::Size(405, 425);
			this->picbox_login->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picbox_login->TabIndex = 0;
			this->picbox_login->TabStop = false;
			this->picbox_login->Click += gcnew System::EventHandler(this, &LogForm::picbox_login_Click);
			// 
			// lb_email
			// 
			this->lb_email->AutoSize = true;
			this->lb_email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_email->Location = System::Drawing::Point(498, 96);
			this->lb_email->Name = L"lb_email";
			this->lb_email->Size = System::Drawing::Size(66, 25);
			this->lb_email->TabIndex = 3;
			this->lb_email->Text = L"Email:";
			this->lb_email->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lb_email->Click += gcnew System::EventHandler(this, &LogForm::label3_Click);
			// 
			// lb_password
			// 
			this->lb_password->AutoSize = true;
			this->lb_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_password->Location = System::Drawing::Point(498, 159);
			this->lb_password->Name = L"lb_password";
			this->lb_password->Size = System::Drawing::Size(104, 25);
			this->lb_password->TabIndex = 4;
			this->lb_password->Text = L"Password:";
			this->lb_password->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lb_password->Click += gcnew System::EventHandler(this, &LogForm::label4_Click);
			// 
			// txt_Email
			// 
			this->txt_Email->Location = System::Drawing::Point(623, 96);
			this->txt_Email->Name = L"txt_Email";
			this->txt_Email->Size = System::Drawing::Size(175, 20);
			this->txt_Email->TabIndex = 7;
			this->txt_Email->TextChanged += gcnew System::EventHandler(this, &LogForm::txt_Email_TextChanged);
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(623, 165);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(175, 20);
			this->txt_password->TabIndex = 8;
			this->txt_password->TextChanged += gcnew System::EventHandler(this, &LogForm::txt_password_TextChanged);
			// 
			// lb_forgot
			// 
			this->lb_forgot->AutoSize = true;
			this->lb_forgot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_forgot->Location = System::Drawing::Point(498, 230);
			this->lb_forgot->Name = L"lb_forgot";
			this->lb_forgot->Size = System::Drawing::Size(170, 25);
			this->lb_forgot->TabIndex = 9;
			this->lb_forgot->TabStop = true;
			this->lb_forgot->Text = L"Forgot Password\?";
			// 
			// btn_login
			// 
			this->btn_login->Location = System::Drawing::Point(543, 288);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(95, 57);
			this->btn_login->TabIndex = 10;
			this->btn_login->Text = L"Login";
			this->btn_login->UseVisualStyleBackColor = true;
			this->btn_login->Click += gcnew System::EventHandler(this, &LogForm::btn_login_Click);
			// 
			// lb_title
			// 
			this->lb_title->AutoSize = true;
			this->lb_title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_title->Location = System::Drawing::Point(538, 28);
			this->lb_title->Name = L"lb_title";
			this->lb_title->Size = System::Drawing::Size(316, 29);
			this->lb_title->TabIndex = 12;
			this->lb_title->Text = L"Ashesi Management System";
			this->lb_title->Click += gcnew System::EventHandler(this, &LogForm::label5_Click);
			// 
			// btn_cancel
			// 
			this->btn_cancel->Location = System::Drawing::Point(703, 288);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(95, 57);
			this->btn_cancel->TabIndex = 13;
			this->btn_cancel->Text = L"Cancel\r\n";
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &LogForm::btn_cancel_Click);
			// 
			// picbox_logo
			// 
			this->picbox_logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picbox_logo.Image")));
			this->picbox_logo->Location = System::Drawing::Point(446, 12);
			this->picbox_logo->Name = L"picbox_logo";
			this->picbox_logo->Size = System::Drawing::Size(67, 55);
			this->picbox_logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picbox_logo->TabIndex = 14;
			this->picbox_logo->TabStop = false;
			// 
			// LogForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(950, 415);
			this->Controls->Add(this->picbox_logo);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->lb_title);
			this->Controls->Add(this->btn_login);
			this->Controls->Add(this->lb_forgot);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->txt_Email);
			this->Controls->Add(this->lb_password);
			this->Controls->Add(this->lb_email);
			this->Controls->Add(this->picbox_login);
			this->MinimumSize = System::Drawing::Size(972, 471);
			this->Name = L"LogForm";
			this->Text = L"LogForm";
			this->Load += gcnew System::EventHandler(this, &LogForm::LogForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbox_login))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbox_logo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LogForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		MySqlConnection^ sqlConn = AshesiMSApp::DatabaseConnection::GetConnection();
		sqlConn->Open();
		if (sqlConn) { MessageBox::Show("Database connection successful!"); }
		sqlCmd->Connection = sqlConn;
		/*sqlCmd->CommandText = "";
		sqlRd = sqlCmd->ExecuteReader();
		sqlDt->Load(sqlRd);
		sqlRd->Close();
		sqlConn->Close();
		dataGridView1->Datasource = sqlDt;*/

	}
	private: System::Void picbox_login_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void txt_Email_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_password_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txt_password->PasswordChar = '*';
}
private: System::Void btn_login_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn = AshesiMSApp::DatabaseConnection::GetConnection();
	sqlConn->Open();

	sqlCmd->Connection = sqlConn;
	sqlCmd->CommandText = "SELECT * FROM users WHERE email = @email AND userPassword = @password";
	sqlCmd->Parameters->AddWithValue("@email", txt_Email->Text);
	sqlCmd->Parameters->AddWithValue("@password", txt_password->Text);

	sqlRd = sqlCmd->ExecuteReader();
	if (sqlRd->Read()) {
		int userID = Convert::ToInt32(sqlRd["userID"]);
		int userRole = Convert::ToInt32(sqlRd["userRole"]);
		
		UserSession::StartSession(userID, userRole);

		if (userRole == 1) {
			MessageBox::Show("Login successful! Welcome Admin.");
			MainForm^ mainForm = gcnew MainForm();
			mainForm->Show();
			this->Hide();
		}
		else if (userRole == 2) {
			MessageBox::Show("Login successful! Welcome Faculty.");
			MainForm^ mainForm = gcnew MainForm();
			mainForm->Show();
			this->Hide();
		}
		else if (userRole == 3) {
			MessageBox::Show("Login successful! Welcome Student.");
			MainForm^ mainForm = gcnew MainForm();
			mainForm->Show();
			this->Hide();
		}
		else {
			MessageBox::Show("Unrecognized role.");
			this->Close();
		}
	}
	else {
		MessageBox::Show("Invalid username or password!");
	}

	sqlRd->Close();
	sqlConn->Close();
	sqlCmd->Parameters->Clear();
}
};

	int main(array<String^>^ args) {
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		AshesiMSApp::LogForm form;
		Application::Run(% form);
		return 0;
	}
}
