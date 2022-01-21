#pragma once
#include<iostream>
#include <stdlib.h>

namespace TimerNoot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Timer^ TimerSec;
	private: System::Windows::Forms::Button^ btnExit;
	protected:

	protected:

	private: System::Windows::Forms::Label^ lblSecond;
	private: System::Windows::Forms::Label^ lblMinute;
	private: System::Windows::Forms::Timer^ TimerMin;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblHours;
	private: System::Windows::Forms::Button^ btnStart;
	private: System::Windows::Forms::Button^ btnRest;
	private: System::Windows::Forms::Timer^ TimerH;




	private: System::ComponentModel::IContainer^ components;

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
			this->TimerSec = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->lblSecond = (gcnew System::Windows::Forms::Label());
			this->lblMinute = (gcnew System::Windows::Forms::Label());
			this->TimerMin = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblHours = (gcnew System::Windows::Forms::Label());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->btnRest = (gcnew System::Windows::Forms::Button());
			this->TimerH = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// TimerSec
			// 
			this->TimerSec->Interval = 500;
			this->TimerSec->Tick += gcnew System::EventHandler(this, &MyForm::TimerSec_Tick);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(187, 43);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(78, 25);
			this->btnExit->TabIndex = 0;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// lblSecond
			// 
			this->lblSecond->AutoSize = true;
			this->lblSecond->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSecond->Location = System::Drawing::Point(96, 9);
			this->lblSecond->Name = L"lblSecond";
			this->lblSecond->Size = System::Drawing::Size(36, 25);
			this->lblSecond->TabIndex = 1;
			this->lblSecond->Text = L"00";
			// 
			// lblMinute
			// 
			this->lblMinute->AutoSize = true;
			this->lblMinute->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblMinute->Location = System::Drawing::Point(54, 9);
			this->lblMinute->Name = L"lblMinute";
			this->lblMinute->Size = System::Drawing::Size(36, 25);
			this->lblMinute->TabIndex = 2;
			this->lblMinute->Text = L"00";
			// 
			// TimerMin
			// 
			this->TimerMin->Interval = 60000;
			this->TimerMin->Tick += gcnew System::EventHandler(this, &MyForm::TimerMin_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(84, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L":";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(42, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L":";
			// 
			// lblHours
			// 
			this->lblHours->AutoSize = true;
			this->lblHours->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblHours->Location = System::Drawing::Point(12, 9);
			this->lblHours->Name = L"lblHours";
			this->lblHours->Size = System::Drawing::Size(36, 25);
			this->lblHours->TabIndex = 5;
			this->lblHours->Text = L"00";
			// 
			// btnStart
			// 
			this->btnStart->Location = System::Drawing::Point(103, 43);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(78, 25);
			this->btnStart->TabIndex = 6;
			this->btnStart->Text = L"���������";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &MyForm::btnStart_Click_1);
			// 
			// btnRest
			// 
			this->btnRest->Location = System::Drawing::Point(383, 43);
			this->btnRest->Name = L"btnRest";
			this->btnRest->Size = System::Drawing::Size(111, 23);
			this->btnRest->TabIndex = 7;
			this->btnRest->Text = L"��������  1 : 20";
			this->btnRest->UseVisualStyleBackColor = true;
			this->btnRest->Click += gcnew System::EventHandler(this, &MyForm::btnRest_Click);
			// 
			// TimerH
			// 
			this->TimerH->Interval = 3600000;
			this->TimerH->Tick += gcnew System::EventHandler(this, &MyForm::TimerH_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(506, 78);
			this->Controls->Add(this->btnRest);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->lblHours);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblMinute);
			this->Controls->Add(this->lblSecond);
			this->Controls->Add(this->btnExit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int TimerCounterS,TCounterRestS;
	int TimerCounterM,TCounterRestM;
	int TimerCounterH,TCounterRestH;
	

	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}
//--------------- ��������� ����� --------------//

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		TimerCounterS = 0;
		TimerCounterM = 0;
		TimerCounterH = 0;

		TCounterRestS = 0; // ������� ������ �����������
		TCounterRestM = 0; // ������� ������ �����������

		lblMinute->Text = "00";
		lblSecond->Text = "00";
		lblHours->Text = "00";


		TimerSec->Enabled = false;
		TimerMin->Enabled = false;
		TimerH->Enabled = false;

		TimerSec->Interval = 1000;
		TimerMin->Interval = 60000;
		TimerH->Interval = 3600000;
		
	}
	private: System::Void TimerSec_Tick(System::Object^ sender, System::EventArgs^ e) {
		TimerCounterS++;
		lblSecond->Text = "00";
		if (TimerCounterS == 60)
		{
			TimerCounterS = 0;
			lblSecond->Text = "00";// + TimerCounterS.ToString();
		}
		else
		{
			(TimerCounterS < 10) ? lblSecond->Text = "0" + TimerCounterS.ToString() : lblSecond->Text = TimerCounterS.ToString();
		}

		if (TimerCounterS== 20 && TimerMin->Enabled == false)
		{
			TimerSec->Stop();
			TimerCounterM = 0;
			TimerCounterS = 0;
			TimerSec->Enabled = false;
		}

		
	}
	private: System::Void TimerMin_Tick(System::Object^ sender, System::EventArgs^ e) {

		TimerCounterM++;

		if (TimerCounterM == 60)
		{
			TimerCounterM = 0;
			lblMinute->Text = "0" + TimerCounterM.ToString();
		}
		else
		{
			(TimerCounterM < 10) ? lblMinute->Text = "0" + TimerCounterM.ToString() : lblMinute->Text = TimerCounterM.ToString();
		}
		

		if (TCounterRestM == 1) // ���������� ����� ��� ������ ������
		{
			TimerMin->Stop();
			TimerCounterM = 0;
			TimerCounterS = 0;
			TimerMin->Enabled = false;
		}

		
	}


private: System::Void btnStart_Click_1(System::Object^ sender, System::EventArgs^ e) {
	TimerSec->Enabled = true;
	TimerMin->Enabled = true;
	
	TimerCounterS = 0;
	TimerCounterM = 0;
	TimerCounterH = 0;

	TCounterRestM = 0;
	TCounterRestS = 0;

	lblMinute->Text = "00"; // ���������� ������ �� ����
	lblSecond->Text = "00"; // ���������� ������� �� ����
	lblHours->Text = "00";

}

private: System::Void btnRest_Click(System::Object^ sender, System::EventArgs^ e) {

	TimerSec->Enabled = true;
	TimerMin->Enabled = true;
	TimerCounterS = 0;
	TimerCounterM = 0;
	TCounterRestS = 20; // ���������� ����� �� ������
	TCounterRestM = 1;

	lblMinute->Text = "00"; // ���������� ������ �� ����
	lblSecond->Text = "00"; // ���������� ������� �� ����
	
	
}
private: System::Void TimerH_Tick(System::Object^ sender, System::EventArgs^ e) {

	TimerCounterH++;

	if (TimerCounterH == 24)
	{
		TimerCounterH = 0;
		lblHours ->Text = "0" + TimerCounterH.ToString();
	}
	else
	{
		(TimerCounterH < 10) ? lblHours->Text = "0" + TimerCounterH.ToString() : lblHours ->Text = TimerCounterH.ToString();
	}



}
};
}
