#pragma once

namespace AshesiMSApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class FacultyDashboard : public System::Windows::Forms::Form
	{
	public:
		FacultyDashboard(void)
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
		~FacultyDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ Faculty;
	private: System::Windows::Forms::TabPage^ manageCourses;
	private: System::Windows::Forms::TabPage^ enterGrades;
	private: System::Windows::Forms::TabPage^ viewClassRoster;
	private: System::Windows::Forms::Button^ btnDeleteCourse;

	protected:

	protected:





	private: System::Windows::Forms::Button^ btnEditCourse;
	private: System::Windows::Forms::Button^ btnAddCourse;


	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ btnSaveGrades;







	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::TabPage^ updateProfile;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ studentsGrades;

	private: System::Windows::Forms::Label^ selectCourse;
	private: System::Windows::Forms::Label^ enrolledStudent;
	private: System::Windows::Forms::Label^ s;


	private: System::Windows::Forms::ComboBox^ comboBox2;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ txtEmail;
	private: System::Windows::Forms::Label^ txtLname;
	private: System::Windows::Forms::Label^ txtFname;
	private: System::Windows::Forms::Button^ btnUpdateProfile;






	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ txtPassword;


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
			this->Faculty = (gcnew System::Windows::Forms::TabControl());
			this->manageCourses = (gcnew System::Windows::Forms::TabPage());
			this->btnDeleteCourse = (gcnew System::Windows::Forms::Button());
			this->btnEditCourse = (gcnew System::Windows::Forms::Button());
			this->btnAddCourse = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->enterGrades = (gcnew System::Windows::Forms::TabPage());
			this->studentsGrades = (gcnew System::Windows::Forms::Label());
			this->selectCourse = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btnSaveGrades = (gcnew System::Windows::Forms::Button());
			this->viewClassRoster = (gcnew System::Windows::Forms::TabPage());
			this->s = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->enrolledStudent = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->updateProfile = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->btnUpdateProfile = (gcnew System::Windows::Forms::Button());
			this->txtFname = (gcnew System::Windows::Forms::Label());
			this->txtLname = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->Faculty->SuspendLayout();
			this->manageCourses->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->enterGrades->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->viewClassRoster->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->updateProfile->SuspendLayout();
			this->SuspendLayout();
			// 
			// Faculty
			// 
			this->Faculty->Controls->Add(this->manageCourses);
			this->Faculty->Controls->Add(this->enterGrades);
			this->Faculty->Controls->Add(this->viewClassRoster);
			this->Faculty->Controls->Add(this->updateProfile);
			this->Faculty->Location = System::Drawing::Point(12, 12);
			this->Faculty->Name = L"Faculty";
			this->Faculty->SelectedIndex = 0;
			this->Faculty->Size = System::Drawing::Size(738, 584);
			this->Faculty->TabIndex = 0;
			// 
			// manageCourses
			// 
			this->manageCourses->Controls->Add(this->btnDeleteCourse);
			this->manageCourses->Controls->Add(this->btnEditCourse);
			this->manageCourses->Controls->Add(this->btnAddCourse);
			this->manageCourses->Controls->Add(this->dataGridView2);
			this->manageCourses->Location = System::Drawing::Point(4, 25);
			this->manageCourses->Name = L"manageCourses";
			this->manageCourses->Padding = System::Windows::Forms::Padding(3);
			this->manageCourses->Size = System::Drawing::Size(730, 555);
			this->manageCourses->TabIndex = 0;
			this->manageCourses->Text = L"Manage Course";
			this->manageCourses->UseVisualStyleBackColor = true;
			this->manageCourses->Click += gcnew System::EventHandler(this, &FacultyDashboard::manageCourses_Click);
			// 
			// btnDeleteCourse
			// 
			this->btnDeleteCourse->Location = System::Drawing::Point(407, 455);
			this->btnDeleteCourse->Name = L"btnDeleteCourse";
			this->btnDeleteCourse->Size = System::Drawing::Size(108, 48);
			this->btnDeleteCourse->TabIndex = 10;
			this->btnDeleteCourse->Text = L"Delete Course";
			this->btnDeleteCourse->UseVisualStyleBackColor = true;
			// 
			// btnEditCourse
			// 
			this->btnEditCourse->Location = System::Drawing::Point(284, 455);
			this->btnEditCourse->Name = L"btnEditCourse";
			this->btnEditCourse->Size = System::Drawing::Size(108, 48);
			this->btnEditCourse->TabIndex = 9;
			this->btnEditCourse->Text = L"Edit Course";
			this->btnEditCourse->UseVisualStyleBackColor = true;
			// 
			// btnAddCourse
			// 
			this->btnAddCourse->Location = System::Drawing::Point(161, 455);
			this->btnAddCourse->Name = L"btnAddCourse";
			this->btnAddCourse->Size = System::Drawing::Size(108, 48);
			this->btnAddCourse->TabIndex = 8;
			this->btnAddCourse->Text = L"Add Course";
			this->btnAddCourse->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(22, 52);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(687, 367);
			this->dataGridView2->TabIndex = 7;
			// 
			// enterGrades
			// 
			this->enterGrades->Controls->Add(this->studentsGrades);
			this->enterGrades->Controls->Add(this->selectCourse);
			this->enterGrades->Controls->Add(this->dataGridView1);
			this->enterGrades->Controls->Add(this->comboBox1);
			this->enterGrades->Controls->Add(this->btnSaveGrades);
			this->enterGrades->Location = System::Drawing::Point(4, 25);
			this->enterGrades->Name = L"enterGrades";
			this->enterGrades->Padding = System::Windows::Forms::Padding(3);
			this->enterGrades->Size = System::Drawing::Size(730, 555);
			this->enterGrades->TabIndex = 1;
			this->enterGrades->Text = L"Enter Grades";
			this->enterGrades->UseVisualStyleBackColor = true;
			// 
			// studentsGrades
			// 
			this->studentsGrades->AutoSize = true;
			this->studentsGrades->Location = System::Drawing::Point(66, 156);
			this->studentsGrades->Name = L"studentsGrades";
			this->studentsGrades->Size = System::Drawing::Size(173, 16);
			this->studentsGrades->TabIndex = 18;
			this->studentsGrades->Text = L"Students and Their Grades: ";
			this->studentsGrades->Click += gcnew System::EventHandler(this, &FacultyDashboard::label2_Click);
			// 
			// selectCourse
			// 
			this->selectCourse->AutoSize = true;
			this->selectCourse->Location = System::Drawing::Point(66, 85);
			this->selectCourse->Name = L"selectCourse";
			this->selectCourse->Size = System::Drawing::Size(105, 16);
			this->selectCourse->TabIndex = 17;
			this->selectCourse->Text = L"Select a Course:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(204, 187);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(423, 152);
			this->dataGridView1->TabIndex = 16;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(204, 82);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(423, 24);
			this->comboBox1->TabIndex = 15;
			// 
			// btnSaveGrades
			// 
			this->btnSaveGrades->Location = System::Drawing::Point(309, 366);
			this->btnSaveGrades->Name = L"btnSaveGrades";
			this->btnSaveGrades->Size = System::Drawing::Size(187, 83);
			this->btnSaveGrades->TabIndex = 13;
			this->btnSaveGrades->Text = L"Save Grades";
			this->btnSaveGrades->UseVisualStyleBackColor = true;
			// 
			// viewClassRoster
			// 
			this->viewClassRoster->Controls->Add(this->s);
			this->viewClassRoster->Controls->Add(this->comboBox2);
			this->viewClassRoster->Controls->Add(this->enrolledStudent);
			this->viewClassRoster->Controls->Add(this->dataGridView3);
			this->viewClassRoster->Location = System::Drawing::Point(4, 25);
			this->viewClassRoster->Name = L"viewClassRoster";
			this->viewClassRoster->Size = System::Drawing::Size(730, 555);
			this->viewClassRoster->TabIndex = 2;
			this->viewClassRoster->Text = L"View Class Roster";
			this->viewClassRoster->UseVisualStyleBackColor = true;
			// 
			// s
			// 
			this->s->AutoSize = true;
			this->s->Location = System::Drawing::Point(43, 62);
			this->s->Name = L"s";
			this->s->Size = System::Drawing::Size(105, 16);
			this->s->TabIndex = 17;
			this->s->Text = L"Select a Course:";
			this->s->Click += gcnew System::EventHandler(this, &FacultyDashboard::label1_Click_1);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(152, 62);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(557, 24);
			this->comboBox2->TabIndex = 16;
			// 
			// enrolledStudent
			// 
			this->enrolledStudent->AutoSize = true;
			this->enrolledStudent->Location = System::Drawing::Point(43, 108);
			this->enrolledStudent->Name = L"enrolledStudent";
			this->enrolledStudent->Size = System::Drawing::Size(108, 16);
			this->enrolledStudent->TabIndex = 15;
			this->enrolledStudent->Text = L"Enrolled Student:";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(152, 132);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(557, 287);
			this->dataGridView3->TabIndex = 11;
			// 
			// updateProfile
			// 
			this->updateProfile->Controls->Add(this->textBox4);
			this->updateProfile->Controls->Add(this->txtPassword);
			this->updateProfile->Controls->Add(this->txtEmail);
			this->updateProfile->Controls->Add(this->txtLname);
			this->updateProfile->Controls->Add(this->txtFname);
			this->updateProfile->Controls->Add(this->btnUpdateProfile);
			this->updateProfile->Controls->Add(this->textBox3);
			this->updateProfile->Controls->Add(this->textBox2);
			this->updateProfile->Controls->Add(this->textBox1);
			this->updateProfile->Location = System::Drawing::Point(4, 25);
			this->updateProfile->Name = L"updateProfile";
			this->updateProfile->Size = System::Drawing::Size(730, 555);
			this->updateProfile->TabIndex = 3;
			this->updateProfile->Text = L"Update Profile";
			this->updateProfile->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(214, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(359, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(214, 127);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(359, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(214, 183);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(359, 22);
			this->textBox3->TabIndex = 2;
			// 
			// btnUpdateProfile
			// 
			this->btnUpdateProfile->Location = System::Drawing::Point(301, 274);
			this->btnUpdateProfile->Name = L"btnUpdateProfile";
			this->btnUpdateProfile->Size = System::Drawing::Size(175, 68);
			this->btnUpdateProfile->TabIndex = 3;
			this->btnUpdateProfile->Text = L"Update Profile";
			this->btnUpdateProfile->UseVisualStyleBackColor = true;
			// 
			// txtFname
			// 
			this->txtFname->AutoSize = true;
			this->txtFname->Location = System::Drawing::Point(96, 72);
			this->txtFname->Name = L"txtFname";
			this->txtFname->Size = System::Drawing::Size(75, 16);
			this->txtFname->TabIndex = 4;
			this->txtFname->Text = L"First Name:";
			// 
			// txtLname
			// 
			this->txtLname->AutoSize = true;
			this->txtLname->Location = System::Drawing::Point(96, 133);
			this->txtLname->Name = L"txtLname";
			this->txtLname->Size = System::Drawing::Size(75, 16);
			this->txtLname->TabIndex = 5;
			this->txtLname->Text = L"Last Name:";
			// 
			// txtEmail
			// 
			this->txtEmail->AutoSize = true;
			this->txtEmail->Location = System::Drawing::Point(96, 189);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(44, 16);
			this->txtEmail->TabIndex = 6;
			this->txtEmail->Text = L"Email:";
			// 
			// txtPassword
			// 
			this->txtPassword->AutoSize = true;
			this->txtPassword->Location = System::Drawing::Point(96, 242);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(67, 16);
			this->txtPassword->TabIndex = 7;
			this->txtPassword->Text = L"Password";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(214, 236);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(359, 22);
			this->textBox4->TabIndex = 8;
			// 
			// FacultyDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(771, 608);
			this->Controls->Add(this->Faculty);
			this->Name = L"FacultyDashboard";
			this->Text = L"FacultyDashboard";
			this->Load += gcnew System::EventHandler(this, &FacultyDashboard::FacultyDashboard_Load);
			this->Faculty->ResumeLayout(false);
			this->manageCourses->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->enterGrades->ResumeLayout(false);
			this->enterGrades->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->viewClassRoster->ResumeLayout(false);
			this->viewClassRoster->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->updateProfile->ResumeLayout(false);
			this->updateProfile->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FacultyDashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	

private: System::Void manageCourses_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
