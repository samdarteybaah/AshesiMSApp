#pragma once

namespace AshesiMSApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class StudentDashboard : public System::Windows::Forms::Form
	{
	public:
		StudentDashboard(void)
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
		~StudentDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ enrollCourses;
	private: System::Windows::Forms::TabPage^ viewGrades;
	private: System::Windows::Forms::TabPage^ payFees;
	private: System::Windows::Forms::TabPage^ viewSchedule;
	private: System::Windows::Forms::TabPage^ accessProfile;
	private: System::Windows::Forms::Label^ studentsEnrollment;

	private: System::Windows::Forms::Label^ selectCourse;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ btnEnroll;
	private: System::Windows::Forms::Button^ btnDropCourse;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnViewHistory;
	private: System::Windows::Forms::Button^ btnMakePayment;
	private: System::Windows::Forms::Label^ displaySchedule;
	private: System::Windows::Forms::DataGridView^ dataGridView3;







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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->enrollCourses = (gcnew System::Windows::Forms::TabPage());
			this->btnDropCourse = (gcnew System::Windows::Forms::Button());
			this->studentsEnrollment = (gcnew System::Windows::Forms::Label());
			this->selectCourse = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btnEnroll = (gcnew System::Windows::Forms::Button());
			this->viewGrades = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->payFees = (gcnew System::Windows::Forms::TabPage());
			this->btnViewHistory = (gcnew System::Windows::Forms::Button());
			this->btnMakePayment = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->viewSchedule = (gcnew System::Windows::Forms::TabPage());
			this->accessProfile = (gcnew System::Windows::Forms::TabPage());
			this->displaySchedule = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->enrollCourses->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->viewGrades->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->payFees->SuspendLayout();
			this->viewSchedule->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->enrollCourses);
			this->tabControl1->Controls->Add(this->viewGrades);
			this->tabControl1->Controls->Add(this->payFees);
			this->tabControl1->Controls->Add(this->viewSchedule);
			this->tabControl1->Controls->Add(this->accessProfile);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(783, 596);
			this->tabControl1->TabIndex = 0;
			// 
			// enrollCourses
			// 
			this->enrollCourses->Controls->Add(this->btnDropCourse);
			this->enrollCourses->Controls->Add(this->studentsEnrollment);
			this->enrollCourses->Controls->Add(this->selectCourse);
			this->enrollCourses->Controls->Add(this->dataGridView1);
			this->enrollCourses->Controls->Add(this->comboBox1);
			this->enrollCourses->Controls->Add(this->btnEnroll);
			this->enrollCourses->Location = System::Drawing::Point(4, 25);
			this->enrollCourses->Name = L"enrollCourses";
			this->enrollCourses->Padding = System::Windows::Forms::Padding(3);
			this->enrollCourses->Size = System::Drawing::Size(775, 567);
			this->enrollCourses->TabIndex = 0;
			this->enrollCourses->Text = L"Enroll in Courses";
			this->enrollCourses->UseVisualStyleBackColor = true;
			// 
			// btnDropCourse
			// 
			this->btnDropCourse->Location = System::Drawing::Point(473, 382);
			this->btnDropCourse->Name = L"btnDropCourse";
			this->btnDropCourse->Size = System::Drawing::Size(130, 54);
			this->btnDropCourse->TabIndex = 24;
			this->btnDropCourse->Text = L"Drop Course";
			this->btnDropCourse->UseVisualStyleBackColor = true;
			// 
			// studentsEnrollment
			// 
			this->studentsEnrollment->AutoSize = true;
			this->studentsEnrollment->Location = System::Drawing::Point(107, 174);
			this->studentsEnrollment->Name = L"studentsEnrollment";
			this->studentsEnrollment->Size = System::Drawing::Size(118, 16);
			this->studentsEnrollment->TabIndex = 23;
			this->studentsEnrollment->Text = L"Current Enrollment:";
			// 
			// selectCourse
			// 
			this->selectCourse->AutoSize = true;
			this->selectCourse->Location = System::Drawing::Point(107, 103);
			this->selectCourse->Name = L"selectCourse";
			this->selectCourse->Size = System::Drawing::Size(113, 16);
			this->selectCourse->TabIndex = 22;
			this->selectCourse->Text = L"Available Course:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(245, 205);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(423, 152);
			this->dataGridView1->TabIndex = 21;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(245, 100);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(423, 24);
			this->comboBox1->TabIndex = 20;
			// 
			// btnEnroll
			// 
			this->btnEnroll->Location = System::Drawing::Point(302, 382);
			this->btnEnroll->Name = L"btnEnroll";
			this->btnEnroll->Size = System::Drawing::Size(130, 54);
			this->btnEnroll->TabIndex = 19;
			this->btnEnroll->Text = L"Enroll";
			this->btnEnroll->UseVisualStyleBackColor = true;
			// 
			// viewGrades
			// 
			this->viewGrades->Controls->Add(this->label1);
			this->viewGrades->Controls->Add(this->label2);
			this->viewGrades->Controls->Add(this->dataGridView2);
			this->viewGrades->Controls->Add(this->comboBox2);
			this->viewGrades->Location = System::Drawing::Point(4, 25);
			this->viewGrades->Name = L"viewGrades";
			this->viewGrades->Padding = System::Windows::Forms::Padding(3);
			this->viewGrades->Size = System::Drawing::Size(775, 567);
			this->viewGrades->TabIndex = 1;
			this->viewGrades->Text = L"View Grades";
			this->viewGrades->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(107, 229);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 16);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Current Enrollment:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(107, 158);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 16);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Display Grades:";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(245, 260);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(423, 152);
			this->dataGridView2->TabIndex = 25;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(245, 155);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(423, 24);
			this->comboBox2->TabIndex = 24;
			// 
			// payFees
			// 
			this->payFees->Controls->Add(this->btnViewHistory);
			this->payFees->Controls->Add(this->btnMakePayment);
			this->payFees->Controls->Add(this->label3);
			this->payFees->Location = System::Drawing::Point(4, 25);
			this->payFees->Name = L"payFees";
			this->payFees->Size = System::Drawing::Size(775, 567);
			this->payFees->TabIndex = 2;
			this->payFees->Text = L"Pay Fees";
			this->payFees->UseVisualStyleBackColor = true;
			// 
			// btnViewHistory
			// 
			this->btnViewHistory->Location = System::Drawing::Point(398, 239);
			this->btnViewHistory->Name = L"btnViewHistory";
			this->btnViewHistory->Size = System::Drawing::Size(130, 54);
			this->btnViewHistory->TabIndex = 26;
			this->btnViewHistory->Text = L"View Payment History";
			this->btnViewHistory->UseVisualStyleBackColor = true;
			this->btnViewHistory->Click += gcnew System::EventHandler(this, &StudentDashboard::button1_Click);
			// 
			// btnMakePayment
			// 
			this->btnMakePayment->Location = System::Drawing::Point(227, 239);
			this->btnMakePayment->Name = L"btnMakePayment";
			this->btnMakePayment->Size = System::Drawing::Size(130, 54);
			this->btnMakePayment->TabIndex = 25;
			this->btnMakePayment->Text = L"Make Payment:";
			this->btnMakePayment->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(101, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Outstanding Fees: ";
			// 
			// viewSchedule
			// 
			this->viewSchedule->Controls->Add(this->displaySchedule);
			this->viewSchedule->Controls->Add(this->dataGridView3);
			this->viewSchedule->Location = System::Drawing::Point(4, 25);
			this->viewSchedule->Name = L"viewSchedule";
			this->viewSchedule->Size = System::Drawing::Size(775, 567);
			this->viewSchedule->TabIndex = 3;
			this->viewSchedule->Text = L"View Schedule";
			this->viewSchedule->UseVisualStyleBackColor = true;
			// 
			// accessProfile
			// 
			this->accessProfile->Location = System::Drawing::Point(4, 25);
			this->accessProfile->Name = L"accessProfile";
			this->accessProfile->Size = System::Drawing::Size(775, 567);
			this->accessProfile->TabIndex = 4;
			this->accessProfile->Text = L"Access Profile";
			this->accessProfile->UseVisualStyleBackColor = true;
			// 
			// displaySchedule
			// 
			this->displaySchedule->AutoSize = true;
			this->displaySchedule->Location = System::Drawing::Point(103, 90);
			this->displaySchedule->Name = L"displaySchedule";
			this->displaySchedule->Size = System::Drawing::Size(67, 16);
			this->displaySchedule->TabIndex = 29;
			this->displaySchedule->Text = L"Schedule:";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(241, 121);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(423, 152);
			this->dataGridView3->TabIndex = 28;
			// 
			// StudentDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(807, 610);
			this->Controls->Add(this->tabControl1);
			this->Name = L"StudentDashboard";
			this->Text = L"StudentDashboard";
			this->tabControl1->ResumeLayout(false);
			this->enrollCourses->ResumeLayout(false);
			this->enrollCourses->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->viewGrades->ResumeLayout(false);
			this->viewGrades->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->payFees->ResumeLayout(false);
			this->payFees->PerformLayout();
			this->viewSchedule->ResumeLayout(false);
			this->viewSchedule->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
};
}
