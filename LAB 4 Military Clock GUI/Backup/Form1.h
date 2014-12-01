#pragma once
#include "Time.h"

namespace LAB4MilitaryClockGUI {

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

	protected: 

	protected: 

	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  toStd;
	private: System::Windows::Forms::Label^  ticker;
	private: System::Windows::Forms::Label^  MLabel;
	private: System::Windows::Forms::Label^  StdLabel;
	private: System::Windows::Forms::Label^  MTime;
	private: System::Windows::Forms::Label^  StdTime;




	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;


	private: System::Windows::Forms::ComboBox^  hrBox;

	private: System::Windows::Forms::ComboBox^  sBox;

	private: System::Windows::Forms::Label^  col2;
	private: System::Windows::Forms::Label^  col1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  minBox;





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
			this->toStd = (gcnew System::Windows::Forms::Button());
			this->ticker = (gcnew System::Windows::Forms::Label());
			this->MLabel = (gcnew System::Windows::Forms::Label());
			this->StdLabel = (gcnew System::Windows::Forms::Label());
			this->MTime = (gcnew System::Windows::Forms::Label());
			this->StdTime = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->col2 = (gcnew System::Windows::Forms::Label());
			this->col1 = (gcnew System::Windows::Forms::Label());
			this->minBox = (gcnew System::Windows::Forms::ComboBox());
			this->sBox = (gcnew System::Windows::Forms::ComboBox());
			this->hrBox = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 14);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Input Time:";
			// 
			// toStd
			// 
			this->toStd->Location = System::Drawing::Point(12, 108);
			this->toStd->Name = L"toStd";
			this->toStd->Size = System::Drawing::Size(75, 23);
			this->toStd->TabIndex = 2;
			this->toStd->Text = L"Convert";
			this->toStd->UseVisualStyleBackColor = true;
			this->toStd->Click += gcnew System::EventHandler(this, &Form1::toStd_Click);
			// 
			// ticker
			// 
			this->ticker->AutoSize = true;
			this->ticker->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ticker->Location = System::Drawing::Point(5, 26);
			this->ticker->Name = L"ticker";
			this->ticker->Size = System::Drawing::Size(214, 14);
			this->ticker->TabIndex = 3;
			this->ticker->Text = L"Please enter a time in military format.";
			// 
			// MLabel
			// 
			this->MLabel->AutoSize = true;
			this->MLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->MLabel->Location = System::Drawing::Point(3, 0);
			this->MLabel->Name = L"MLabel";
			this->MLabel->Size = System::Drawing::Size(52, 14);
			this->MLabel->TabIndex = 4;
			this->MLabel->Text = L"Military:";
			// 
			// StdLabel
			// 
			this->StdLabel->AutoSize = true;
			this->StdLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->StdLabel->Location = System::Drawing::Point(3, 32);
			this->StdLabel->Name = L"StdLabel";
			this->StdLabel->Size = System::Drawing::Size(59, 14);
			this->StdLabel->TabIndex = 5;
			this->StdLabel->Text = L"Standard:";
			// 
			// MTime
			// 
			this->MTime->AutoSize = true;
			this->MTime->Location = System::Drawing::Point(70, 7);
			this->MTime->Name = L"MTime";
			this->MTime->Size = System::Drawing::Size(13, 13);
			this->MTime->TabIndex = 6;
			this->MTime->Text = L"--";
			// 
			// StdTime
			// 
			this->StdTime->AutoSize = true;
			this->StdTime->Location = System::Drawing::Point(70, 32);
			this->StdTime->Name = L"StdTime";
			this->StdTime->Size = System::Drawing::Size(13, 13);
			this->StdTime->TabIndex = 7;
			this->StdTime->Text = L"--";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->col2);
			this->panel1->Controls->Add(this->col1);
			this->panel1->Controls->Add(this->minBox);
			this->panel1->Controls->Add(this->sBox);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->hrBox);
			this->panel1->Location = System::Drawing::Point(1, 48);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(176, 54);
			this->panel1->TabIndex = 11;
			// 
			// col2
			// 
			this->col2->AutoSize = true;
			this->col2->Location = System::Drawing::Point(111, 28);
			this->col2->Name = L"col2";
			this->col2->Size = System::Drawing::Size(10, 13);
			this->col2->TabIndex = 15;
			this->col2->Text = L":";
			// 
			// col1
			// 
			this->col1->AutoSize = true;
			this->col1->Location = System::Drawing::Point(54, 28);
			this->col1->Name = L"col1";
			this->col1->Size = System::Drawing::Size(10, 13);
			this->col1->TabIndex = 15;
			this->col1->Text = L":";
			// 
			// minBox
			// 
			this->minBox->DropDownHeight = 100;
			this->minBox->DropDownWidth = 40;
			this->minBox->FormattingEnabled = true;
			this->minBox->IntegralHeight = false;
			this->minBox->Items->AddRange(gcnew cli::array< System::Object^  >(60) {L"00", L"01", L"02", L"03", L"04", L"05", L"06", L"07", 
				L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", 
				L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", 
				L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"});
			this->minBox->Location = System::Drawing::Point(70, 25);
			this->minBox->MaxDropDownItems = 5;
			this->minBox->MaxLength = 2;
			this->minBox->Name = L"minBox";
			this->minBox->Size = System::Drawing::Size(39, 21);
			this->minBox->Sorted = true;
			this->minBox->TabIndex = 6;
			// 
			// sBox
			// 
			this->sBox->DropDownHeight = 100;
			this->sBox->DropDownWidth = 40;
			this->sBox->FormattingEnabled = true;
			this->sBox->IntegralHeight = false;
			this->sBox->Items->AddRange(gcnew cli::array< System::Object^  >(60) {L"00", L"01", L"02", L"03", L"04", L"05", L"06", L"07", 
				L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", 
				L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", 
				L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"});
			this->sBox->Location = System::Drawing::Point(124, 24);
			this->sBox->MaxDropDownItems = 5;
			this->sBox->MaxLength = 2;
			this->sBox->Name = L"sBox";
			this->sBox->Size = System::Drawing::Size(39, 21);
			this->sBox->Sorted = true;
			this->sBox->TabIndex = 6;
			// 
			// hrBox
			// 
			this->hrBox->DropDownHeight = 100;
			this->hrBox->FormattingEnabled = true;
			this->hrBox->IntegralHeight = false;
			this->hrBox->Items->AddRange(gcnew cli::array< System::Object^  >(24) {L"00", L"01", L"02", L"03", L"04", L"05", L"06", L"07", 
				L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"});
			this->hrBox->Location = System::Drawing::Point(11, 24);
			this->hrBox->MaxDropDownItems = 5;
			this->hrBox->MaxLength = 2;
			this->hrBox->Name = L"hrBox";
			this->hrBox->Size = System::Drawing::Size(40, 21);
			this->hrBox->Sorted = true;
			this->hrBox->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->StdTime);
			this->panel2->Controls->Add(this->StdLabel);
			this->panel2->Controls->Add(this->MTime);
			this->panel2->Controls->Add(this->MLabel);
			this->panel2->Location = System::Drawing::Point(183, 48);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(174, 54);
			this->panel2->TabIndex = 12;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->panel2);
			this->panel3->Controls->Add(this->ticker);
			this->panel3->Controls->Add(this->toStd);
			this->panel3->Controls->Add(this->panel1);
			this->panel3->Location = System::Drawing::Point(0, 51);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(357, 131);
			this->panel3->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(155, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 18);
			this->label2->TabIndex = 13;
			this->label2->Text = L"� � � � � � � CONVERSION";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(356, 304);
			this->Controls->Add(this->panel3);
			this->Name = L"Form1";
			this->Text = L"TheTi.me";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 ticker->Text = "Please enter the time in MILITARY FORMAT (23 : 59 : 59)";
				 hrBox->Text = "00";
				 minBox->Text = "00";
				 sBox->Text = "00";
			 }

private: System::Void toStd_Click(System::Object^  sender, System::EventArgs^  e) {
			 //MilTime Clock;
			 
			 int mil_hr = System::Convert::ToInt32(hrBox->Text + minBox->Text);
			 int hr = System::Convert::ToInt32(hrBox->Text);
			 int min = System::Convert::ToInt32(minBox->Text);
			 int sec = System::Convert::ToInt32(sBox->Text);
			 //int mil_hr = System::Convert::ToInt32(hrBox->Text + minBox->Text);
			// int mil_sec = System::Convert::ToInt32(sBox->Text);
			if(hr >= 0 && hr <=23 && min >= 0 && min <= 59 && sec >= 0 && sec <= 59){
				ticker->Text = "Please enter the time in MILITARY FORMAT (24 : 59 : 59)";
				MilTime Clock(hr, min, sec, mil_hr);
				
				/* FORMATTING AND OUTPUT */

				// Military Time Output
				if (Clock.getHour() < 10)// if no hours and one digit min
					MTime->Text = "000" + Convert::ToString(Clock.getHour()) + " hr(s), " + Convert::ToString(Clock.getSec()) + " s"; 
				else if (Clock.getHour() >= 10 && Clock.getHour() < 100) // if no hours and two digit min
					MTime->Text = "00" + Convert::ToString(Clock.getHour()) + " hr(s), " + Convert::ToString(Clock.getSec()) + " s" ;
				else
					MTime->Text = Convert::ToString(Clock.getHour()) + " hr(s), " + Convert::ToString(Clock.getSec()) + " s";

				// Standard Time Output
				StdTime->Text = Convert::ToString(Clock.getStandHr()); // output hours
				if (Clock.getMin() < 10) // if one digit min
					StdTime->Text += " : 0" + Convert::ToString(Clock.getMin());
				else
					StdTime->Text += " : " + Convert::ToString(Clock.getMin());

				if (Clock.getSec() < 10) // if one digit sec
					StdTime->Text += " : 0" + Convert::ToString(Clock.getSec());
				else
					StdTime->Text += " : " + Convert::ToString(Clock.getSec());
				//----Determine AM or PM for Standard Time
				if (mil_hr < 1200)
					StdTime->Text += " AM";
				else
					StdTime->Text += " PM";
			}
			else
				ticker->Text = "ERROR: Invalid Input! (Tip: Use drop-down lists.)";
			 //mil_hr = ;
			 //MTime->Text = Convert::ToString(mil_hr)+ ":" + Convert::ToString(mil_sec);
			
			


		 }
};
}

