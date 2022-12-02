#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		int second = 0;
		int minute = 0;
		int mili = 0;
		String^ Mili;
		String^ Sec;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label1;


	public:
		String^ Min;
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ Time;


	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Time = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(325, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(338, 93);
			this->button1->TabIndex = 0;
			this->button1->Text = L"�����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 94;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Time
			// 
			this->Time->AutoSize = true;
			this->Time->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Time->Location = System::Drawing::Point(28, 82);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(258, 108);
			this->Time->TabIndex = 2;
			this->Time->Text = L"0:0.0";
			this->Time->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(325, 172);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(338, 93);
			this->button2->TabIndex = 3;
			this->button2->Text = L"�����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(787, 157);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 108);
			this->label1->TabIndex = 5;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(695, 307);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Time);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"����������";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = !timer1->Enabled;
		if (button1->Text == "�����") {
			button1->Text = "C���";
		}
		else {
			button1->Text = "�����";
		}


	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = false;
		mili = 0;
		second = 0;
		minute = 0;
		Time->Text = 0 + ":" + 0 + "." + 0;
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		mili++;
		if (mili == 10) {
			mili = 0;
			second++;
		}
		if (second == 60) {
			second = 0;
			minute++;
		}
		Mili = Convert::ToString(mili);
		Sec = Convert::ToString(second);
		Min = Convert::ToString(minute);
		Time->Text = Min + ":" + Sec + "." + Mili;
	}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
}
};
}
