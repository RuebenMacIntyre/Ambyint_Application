#pragma once

namespace AmbyintApplicationC__
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::ComponentModel;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(11, 10);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(443, 79);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(76, 298);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(158, 42);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Close all Console &Windows";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 227);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Step 3.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Step 2.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Step 1.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(257, 240);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(197, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"You can launch the Client multiple times.";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(76, 227);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(158, 44);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Launch the TCP &Client";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(78, 167);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 37);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Start the TCP &Listener";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(78, 105);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 40);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Start &Reading the data";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(465, 397);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MyForm";
			this->Text = L"Ambyint Application in C++";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		{
			array<Process^>^localByName = Process::GetProcessesByName("ReadFileContinuously");

			for each (Process^ proc in localByName)
			{
				proc->Kill();
			}

			System::Diagnostics::Process::Start("ReadFileContinuously.exe");
		}

		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
		{
			array<Process^>^localByName = Process::GetProcessesByName("TCPListener");

			for each (Process^ proc in localByName)
			{
				proc->Kill();
			}

			System::Diagnostics::Process::Start("TCPListener");
		}

		private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
		{
			array<Process^>^localByName = Process::GetProcessesByName("TCPClient");

			for each (Process^ proc in localByName)
			{
				proc->Kill();
			}

			System::Diagnostics::Process::Start("TCPClient");
		}

		private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
		{
			array<Process^>^localByName1 = Process::GetProcessesByName("ReadFileContinuously");

			for each (Process^ proc in localByName1)
			{
				proc->Kill();
			}

			array<Process^>^localByName2 = Process::GetProcessesByName("TCPListener");

			for each (Process^ proc in localByName2)
			{
				proc->Kill();
			}

			array<Process^>^localByName3 = Process::GetProcessesByName("TCPClient");

			for each (Process^ proc in localByName3)
			{
				proc->Kill();
			}
		}
	};
}
