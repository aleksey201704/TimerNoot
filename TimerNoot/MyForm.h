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

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblHours;
	private: System::Windows::Forms::Button^ btnStart;
	private: System::Windows::Forms::Button^ btnRest;
	private: System::Windows::Forms::Timer^ TimerSet;
	private: System::Windows::Forms::Button^ btnStop;
	private: System::Windows::Forms::ListView^ listView1;

	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::Button^ button1;




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
			System::Windows::Forms::ListViewItem^ listViewItem4 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(1) { L"Время" },
				-1, System::Drawing::Color::Empty, System::Drawing::SystemColors::Window, nullptr));
			System::Windows::Forms::ListViewItem^ listViewItem5 = (gcnew System::Windows::Forms::ListViewItem(L"4894"));
			System::Windows::Forms::ListViewItem^ listViewItem6 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"123",
					L"цук"
			}, -1));
			this->TimerSec = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->lblSecond = (gcnew System::Windows::Forms::Label());
			this->lblMinute = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblHours = (gcnew System::Windows::Forms::Label());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->btnRest = (gcnew System::Windows::Forms::Button());
			this->TimerSet = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnStop = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// TimerSec
			// 
			this->TimerSec->Interval = 500;
			this->TimerSec->Tick += gcnew System::EventHandler(this, &MyForm::TimerSec_Tick);
			// 
			// btnExit
			// 
			this->btnExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnExit->Location = System::Drawing::Point(260, 80);
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
			this->lblSecond->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblSecond->Font = (gcnew System::Drawing::Font(L"a_LCDNovaObl", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSecond->ForeColor = System::Drawing::Color::Coral;
			this->lblSecond->Location = System::Drawing::Point(181, 9);
			this->lblSecond->Name = L"lblSecond";
			this->lblSecond->Size = System::Drawing::Size(73, 54);
			this->lblSecond->TabIndex = 1;
			this->lblSecond->Text = L"00";
			// 
			// lblMinute
			// 
			this->lblMinute->AutoSize = true;
			this->lblMinute->Font = (gcnew System::Drawing::Font(L"a_LCDNovaObl", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblMinute->Location = System::Drawing::Point(91, 10);
			this->lblMinute->Name = L"lblMinute";
			this->lblMinute->Size = System::Drawing::Size(73, 54);
			this->lblMinute->TabIndex = 2;
			this->lblMinute->Text = L"00";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"a_LCDNovaObl", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(158, 2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 54);
			this->label1->TabIndex = 3;
			this->label1->Text = L":";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"a_LCDNovaObl", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(74, 2);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 54);
			this->label2->TabIndex = 4;
			this->label2->Text = L":";
			// 
			// lblHours
			// 
			this->lblHours->AutoSize = true;
			this->lblHours->Font = (gcnew System::Drawing::Font(L"a_LCDNovaObl", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblHours->Location = System::Drawing::Point(12, 9);
			this->lblHours->Name = L"lblHours";
			this->lblHours->Size = System::Drawing::Size(73, 54);
			this->lblHours->TabIndex = 5;
			this->lblHours->Text = L"00";
			// 
			// btnStart
			// 
			this->btnStart->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnStart->Location = System::Drawing::Point(260, 10);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(78, 25);
			this->btnStart->TabIndex = 6;
			this->btnStart->Text = L"Запустить";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &MyForm::btnStart_Click_1);
			// 
			// btnRest
			// 
			this->btnRest->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnRest->Location = System::Drawing::Point(21, 80);
			this->btnRest->Name = L"btnRest";
			this->btnRest->Size = System::Drawing::Size(111, 23);
			this->btnRest->TabIndex = 7;
			this->btnRest->Text = L"Отдыхать  1 : 20";
			this->btnRest->UseVisualStyleBackColor = true;
			this->btnRest->Click += gcnew System::EventHandler(this, &MyForm::btnRest_Click);
			// 
			// TimerSet
			// 
			this->TimerSet->Interval = 1000;
			this->TimerSet->Tick += gcnew System::EventHandler(this, &MyForm::TimerSet_Tick);
			// 
			// btnStop
			// 
			this->btnStop->Location = System::Drawing::Point(260, 39);
			this->btnStop->Name = L"btnStop";
			this->btnStop->Size = System::Drawing::Size(78, 25);
			this->btnStop->TabIndex = 8;
			this->btnStop->Text = L"Остановить";
			this->btnStop->UseVisualStyleBackColor = true;
			this->btnStop->Click += gcnew System::EventHandler(this, &MyForm::btnStop_Click);
			// 
			// listView1
			// 
			this->listView1->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			listViewItem4->Checked = true;
			listViewItem4->StateImageIndex = 1;
			listViewItem5->Checked = true;
			listViewItem5->StateImageIndex = 1;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(3) {
				listViewItem4, listViewItem5,
					listViewItem6
			});
			this->listView1->Location = System::Drawing::Point(24, 129);
			this->listView1->Name = L"listView1";
			this->listView1->ShowGroups = false;
			this->listView1->Size = System::Drawing::Size(314, 175);
			this->listView1->TabIndex = 9;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Название Счетчика";
			this->columnHeader1->Width = 150;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Установленное время";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 150;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->maskedTextBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(344, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(290, 292);
			this->panel1->TabIndex = 10;
			this->panel1->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(202, 16);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(15, 16);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(169, 20);
			this->maskedTextBox1->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = false;
			this->BackColor = System::Drawing::SystemColors::Info;
			//this->ClientSize = System::Drawing::Size(0, 0);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->btnStop);
			this->Controls->Add(this->btnRest);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->lblHours);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->lblSecond);
			this->Controls->Add(this->lblMinute);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
	int TimerCounterS;
	int TimerCounterM;
	int TimerCounterH;
	bool TStop;
	
	
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}
//--------------- Загружаем форму --------------//

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		TimerCounterS = 0;
		TimerCounterM = 0;
		TimerCounterH = 0;
		

		TStop = false;

		lblMinute->Text = "00";
		lblSecond->Text = "00";
		lblHours->Text = "00";


		TimerSec->Enabled = false;
		TimerSet->Enabled = false;

		TimerSec->Interval = 1000;
		TimerSet->Interval = 1000; // Установленное время
	}
	
private: System::Void TimerSec_Tick(System::Object^ sender, System::EventArgs^ e) 
		{
		
	
		if (TimerCounterS == 59) // Секунда
		{
			TimerCounterS = 0;
			lblSecond->Text = "00";

			if (TimerCounterM == 59) // Минута
			{
				TimerCounterM = 0;
				lblMinute->Text = "00";
			
				if (TimerCounterH == 23) // Часы
				{
					TimerSec->Stop();
					TimerCounterH = 0;
					lblSecond->Text = "00";
					lblMinute->Text = "00";
					lblHours->Text = "24";
				}
				else {
					TimerCounterH++;
					(TimerCounterH < 10) ? lblHours->Text = "0" + TimerCounterH.ToString() : lblHours->Text = TimerCounterH.ToString();
				}
			
			}
			
			else // Окончание минуты;
			{
				TimerCounterM++;
				(TimerCounterM < 10) ? 	lblMinute->Text = "0" + TimerCounterM.ToString() : lblMinute->Text = TimerCounterM.ToString();
			}


		}
		else // окончание секунды
		{
			TimerCounterS++;
			(TimerCounterS < 10) ? 
				lblSecond->Text = "0" + TimerCounterS.ToString() : lblSecond->Text = TimerCounterS.ToString();
		}

			
	}

private: System::Void TimerSet_Tick(System::Object^ sender, System::EventArgs^ e)
		{
	if (TimerCounterS == 0) {
		if (TimerCounterH == 0 && TimerCounterM == 0 && TimerCounterH == 0)  TimerSet->Stop();

		if (TimerCounterM != 0) // Уменьшаем минуты
		{
			TimerCounterM--; 
			TimerCounterS = 59;
			(TimerCounterM < 10) ? lblMinute->Text = "0" + TimerCounterM.ToString() : lblMinute->Text = TimerCounterM.ToString();
			(TimerCounterS < 10) ? lblSecond->Text = "0" + TimerCounterS.ToString() : lblSecond->Text = TimerCounterS.ToString(); 


		}
		else if (TimerCounterH !=0) // Уменьшаем час
		{
			TimerCounterH--;
			TimerCounterM = 59;
			(TimerCounterH < 10) ? lblHours->Text = "0" + TimerCounterH.ToString() : lblHours->Text = TimerCounterH.ToString();
			(TimerCounterM < 10) ? lblMinute->Text = "0" + TimerCounterM.ToString() : lblMinute->Text = TimerCounterM.ToString();
			(TimerCounterS < 10) ? lblSecond->Text = "0" + TimerCounterS.ToString() : lblSecond->Text = TimerCounterS.ToString();

		}


	}
	else { // Оконнчание уменьшине секунды
		TimerCounterS--;
		(TimerCounterS < 10) ? lblSecond->Text = "0" + TimerCounterS.ToString() : lblSecond->Text = TimerCounterS.ToString(); // Сбрасываем секунды на установление
	}
		}

private: System::Void btnStart_Click_1(System::Object^ sender, System::EventArgs^ e) {
	TimerSec->Start();
	if (!TStop) // Считаем кнопук стоп
	{
		TimerCounterS = 0; // Обнуляем таймер
		TimerCounterM = 0; // Обнуляем таймер
		TimerCounterH = 0; // Обнуляем таймер

		

		lblMinute->Text = "00"; // Сбрасываем минуты на ноль
		lblSecond->Text = "00"; // Сбрасываем секунды на ноль
		lblHours->Text = "00";
	}

}

private: System::Void btnRest_Click(System::Object^ sender, System::EventArgs^ e) {

	TimerSec->Stop();
	TimerSet->Start();
	
	TimerCounterH = 1;
	TimerCounterM = 5;
	TimerCounterS = 4;
		
	(TimerCounterM < 10 ) ? lblMinute->Text="0"+TimerCounterM.ToString():lblMinute->Text = TimerCounterM.ToString(); // Сбрасываем минуты на установление
	(TimerCounterS < 10)? lblSecond->Text ="0"+ TimerCounterS.ToString() : lblSecond->Text = TimerCounterS.ToString(); // Сбрасываем секунды на установление
	(TimerCounterH < 10) ? lblHours->Text ="0"+ TimerCounterH.ToString(): lblHours->Text = TimerCounterH.ToString(); // Сбрасываем часы на установление
	
}

private: System::Void btnStop_Click(System::Object^ sender, System::EventArgs^ e) {
	TimerSec->Stop();
	TStop = true;
}



private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
