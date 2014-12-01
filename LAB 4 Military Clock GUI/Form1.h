#pragma once
#include "Time.h"
#include <time.h> 

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
	private: System::Windows::Forms::Label^  convDiv;

	private: System::Windows::Forms::ComboBox^  minBox;
	private: System::Windows::Forms::Label^  Headline;

	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  minStart;
	private: System::Windows::Forms::ComboBox^  sStart;
	private: System::Windows::Forms::Label^  startLabel;


	private: System::Windows::Forms::ComboBox^  hrStart;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  minEnd;
	private: System::Windows::Forms::ComboBox^  sEnd;
	private: System::Windows::Forms::Label^  endLabel;


	private: System::Windows::Forms::ComboBox^  hrEnd;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  offsetDiv;

	private: System::Windows::Forms::Label^  elapsed;
	private: System::Windows::Forms::Label^  ElapsedLabel;

	private: System::Windows::Forms::Label^  ticker2;

	private: System::Windows::Forms::Button^  offset;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  credit;










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
			this->convDiv = (gcnew System::Windows::Forms::Label());
			this->Headline = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->minStart = (gcnew System::Windows::Forms::ComboBox());
			this->sStart = (gcnew System::Windows::Forms::ComboBox());
			this->startLabel = (gcnew System::Windows::Forms::Label());
			this->hrStart = (gcnew System::Windows::Forms::ComboBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->minEnd = (gcnew System::Windows::Forms::ComboBox());
			this->sEnd = (gcnew System::Windows::Forms::ComboBox());
			this->endLabel = (gcnew System::Windows::Forms::Label());
			this->hrEnd = (gcnew System::Windows::Forms::ComboBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->ticker2 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->offset = (gcnew System::Windows::Forms::Button());
			this->elapsed = (gcnew System::Windows::Forms::Label());
			this->ElapsedLabel = (gcnew System::Windows::Forms::Label());
			this->offsetDiv = (gcnew System::Windows::Forms::Label());
			this->credit = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(3, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 14);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Input Time:";
			// 
			// toStd
			// 
			this->toStd->BackColor = System::Drawing::SystemColors::ControlLight;
			this->toStd->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->toStd->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->toStd->Location = System::Drawing::Point(257, 88);
			this->toStd->Name = L"toStd";
			this->toStd->Size = System::Drawing::Size(87, 23);
			this->toStd->TabIndex = 2;
			this->toStd->Text = L"convert >>";
			this->toStd->UseVisualStyleBackColor = false;
			this->toStd->Click += gcnew System::EventHandler(this, &Form1::toStd_Click);
			// 
			// ticker
			// 
			this->ticker->AutoSize = true;
			this->ticker->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ticker->Location = System::Drawing::Point(3, 7);
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
			this->MLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MLabel->Location = System::Drawing::Point(3, 7);
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
			this->StdLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->StdLabel->Location = System::Drawing::Point(3, 32);
			this->StdLabel->Name = L"StdLabel";
			this->StdLabel->Size = System::Drawing::Size(59, 14);
			this->StdLabel->TabIndex = 5;
			this->StdLabel->Text = L"Standard:";
			// 
			// MTime
			// 
			this->MTime->AutoSize = true;
			this->MTime->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->MTime->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->MTime->Location = System::Drawing::Point(70, 7);
			this->MTime->Name = L"MTime";
			this->MTime->Size = System::Drawing::Size(15, 14);
			this->MTime->TabIndex = 6;
			this->MTime->Text = L"--";
			// 
			// StdTime
			// 
			this->StdTime->AutoSize = true;
			this->StdTime->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->StdTime->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->StdTime->Location = System::Drawing::Point(70, 32);
			this->StdTime->Name = L"StdTime";
			this->StdTime->Size = System::Drawing::Size(15, 14);
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
			this->panel1->Location = System::Drawing::Point(1, 28);
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
			this->minBox->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(60) {L"00", L"01", L"02", L"03", L"04", 
				L"05", L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", 
				L"23", L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", 
				L"41", L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", 
				L"59"});
			this->minBox->DropDownHeight = 100;
			this->minBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->minBox->DropDownWidth = 40;
			this->minBox->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->minBox->FormattingEnabled = true;
			this->minBox->IntegralHeight = false;
			this->minBox->Items->AddRange(gcnew cli::array< System::Object^  >(60) {L"00", L"01", L"02", L"03", L"04", L"05", L"06", L"07", 
				L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", 
				L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", 
				L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"});
			this->minBox->Location = System::Drawing::Point(68, 24);
			this->minBox->MaxDropDownItems = 5;
			this->minBox->MaxLength = 2;
			this->minBox->Name = L"minBox";
			this->minBox->Size = System::Drawing::Size(39, 22);
			this->minBox->Sorted = true;
			this->minBox->TabIndex = 6;
			// 
			// sBox
			// 
			this->sBox->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(60) {L"00", L"01", L"02", L"03", L"04", 
				L"05", L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", 
				L"23", L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", 
				L"41", L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", 
				L"59"});
			this->sBox->DropDownHeight = 100;
			this->sBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->sBox->DropDownWidth = 40;
			this->sBox->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
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
			this->sBox->Size = System::Drawing::Size(39, 22);
			this->sBox->Sorted = true;
			this->sBox->TabIndex = 6;
			// 
			// hrBox
			// 
			this->hrBox->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(24) {L"00", L"01", L"02", L"03", L"04", 
				L"05", L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", 
				L"23"});
			this->hrBox->DropDownHeight = 100;
			this->hrBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->hrBox->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->hrBox->FormattingEnabled = true;
			this->hrBox->IntegralHeight = false;
			this->hrBox->Items->AddRange(gcnew cli::array< System::Object^  >(24) {L"00", L"01", L"02", L"03", L"04", L"05", L"06", L"07", 
				L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"});
			this->hrBox->Location = System::Drawing::Point(11, 24);
			this->hrBox->MaxDropDownItems = 5;
			this->hrBox->MaxLength = 2;
			this->hrBox->Name = L"hrBox";
			this->hrBox->Size = System::Drawing::Size(40, 22);
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
			this->panel2->Location = System::Drawing::Point(183, 28);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(171, 54);
			this->panel2->TabIndex = 12;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel3->Controls->Add(this->panel2);
			this->panel3->Controls->Add(this->ticker);
			this->panel3->Controls->Add(this->toStd);
			this->panel3->Controls->Add(this->panel1);
			this->panel3->Location = System::Drawing::Point(0, 57);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(357, 118);
			this->panel3->TabIndex = 13;
			// 
			// convDiv
			// 
			this->convDiv->AutoSize = true;
			this->convDiv->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->convDiv->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->convDiv->Location = System::Drawing::Point(151, 31);
			this->convDiv->Name = L"convDiv";
			this->convDiv->Size = System::Drawing::Size(206, 23);
			this->convDiv->TabIndex = 13;
			this->convDiv->Text = L"� � � � � � � CONVERSION";
			// 
			// Headline
			// 
			this->Headline->AutoSize = true;
			this->Headline->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Headline->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Headline->Location = System::Drawing::Point(4, 0);
			this->Headline->Name = L"Headline";
			this->Headline->Size = System::Drawing::Size(140, 54);
			this->Headline->TabIndex = 14;
			this->Headline->Text = L"Ti.me";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->minStart);
			this->panel4->Controls->Add(this->sStart);
			this->panel4->Controls->Add(this->startLabel);
			this->panel4->Controls->Add(this->hrStart);
			this->panel4->Location = System::Drawing::Point(1, 50);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(171, 53);
			this->panel4->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(111, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(10, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L":";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(54, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(10, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L":";
			// 
			// minStart
			// 
			this->minStart->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(60) {L"00", L"01", L"02", L"03", L"04", 
				L"05", L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", 
				L"23", L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", 
				L"41", L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", 
				L"59"});
			this->minStart->BackColor = System::Drawing::SystemColors::Menu;
			this->minStart->DropDownHeight = 100;
			this->minStart->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->minStart->DropDownWidth = 40;
			this->minStart->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->minStart->FormattingEnabled = true;
			this->minStart->IntegralHeight = false;
			this->minStart->Items->AddRange(gcnew cli::array< System::Object^  >(60) {L"00", L"01", L"02", L"03", L"04", L"05", L"06", 
				L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", 
				L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", 
				L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"});
			this->minStart->Location = System::Drawing::Point(68, 24);
			this->minStart->MaxDropDownItems = 5;
			this->minStart->MaxLength = 2;
			this->minStart->Name = L"minStart";
			this->minStart->Size = System::Drawing::Size(39, 22);
			this->minStart->Sorted = true;
			this->minStart->TabIndex = 6;
			// 
			// sStart
			// 
			this->sStart->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(60) {L"00", L"01", L"02", L"03", L"04", 
				L"05", L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", 
				L"23", L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", 
				L"41", L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", 
				L"59"});
			this->sStart->BackColor = System::Drawing::SystemColors::Menu;
			this->sStart->DropDownHeight = 100;
			this->sStart->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->sStart->DropDownWidth = 40;
			this->sStart->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sStart->FormattingEnabled = true;
			this->sStart->IntegralHeight = false;
			this->sStart->Items->AddRange(gcnew cli::array< System::Object^  >(60) {L"00", L"01", L"02", L"03", L"04", L"05", L"06", L"07", 
				L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", 
				L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", 
				L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"});
			this->sStart->Location = System::Drawing::Point(124, 24);
			this->sStart->MaxDropDownItems = 5;
			this->sStart->MaxLength = 2;
			this->sStart->Name = L"sStart";
			this->sStart->Size = System::Drawing::Size(39, 22);
			this->sStart->Sorted = true;
			this->sStart->TabIndex = 6;
			// 
			// startLabel
			// 
			this->startLabel->AutoSize = true;
			this->startLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->startLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->startLabel->Location = System::Drawing::Point(125, 7);
			this->startLabel->Name = L"startLabel";
			this->startLabel->Size = System::Drawing::Size(40, 14);
			this->startLabel->TabIndex = 1;
			this->startLabel->Text = L"START:";
			// 
			// hrStart
			// 
			this->hrStart->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(24) {L"00", L"01", L"02", L"03", L"04", 
				L"05", L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", 
				L"23"});
			this->hrStart->BackColor = System::Drawing::SystemColors::Menu;
			this->hrStart->DropDownHeight = 100;
			this->hrStart->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->hrStart->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->hrStart->FormattingEnabled = true;
			this->hrStart->IntegralHeight = false;
			this->hrStart->Items->AddRange(gcnew cli::array< System::Object^  >(24) {L"00", L"01", L"02", L"03", L"04", L"05", L"06", 
				L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"});
			this->hrStart->Location = System::Drawing::Point(11, 24);
			this->hrStart->MaxDropDownItems = 5;
			this->hrStart->MaxLength = 2;
			this->hrStart->Name = L"hrStart";
			this->hrStart->Size = System::Drawing::Size(40, 22);
			this->hrStart->Sorted = true;
			this->hrStart->TabIndex = 4;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->minEnd);
			this->panel5->Controls->Add(this->sEnd);
			this->panel5->Controls->Add(this->endLabel);
			this->panel5->Controls->Add(this->hrEnd);
			this->panel5->Location = System::Drawing::Point(174, 50);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(169, 53);
			this->panel5->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(111, 28);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(10, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L":";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(54, 28);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(10, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L":";
			// 
			// minEnd
			// 
			this->minEnd->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(60) {L"00", L"01", L"02", L"03", L"04", 
				L"05", L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", 
				L"23", L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", 
				L"41", L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", 
				L"59"});
			this->minEnd->BackColor = System::Drawing::SystemColors::Menu;
			this->minEnd->DropDownHeight = 100;
			this->minEnd->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->minEnd->DropDownWidth = 40;
			this->minEnd->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->minEnd->FormattingEnabled = true;
			this->minEnd->IntegralHeight = false;
			this->minEnd->Items->AddRange(gcnew cli::array< System::Object^  >(60) {L"00", L"01", L"02", L"03", L"04", L"05", L"06", L"07", 
				L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", 
				L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", 
				L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"});
			this->minEnd->Location = System::Drawing::Point(68, 24);
			this->minEnd->MaxDropDownItems = 5;
			this->minEnd->MaxLength = 2;
			this->minEnd->Name = L"minEnd";
			this->minEnd->Size = System::Drawing::Size(39, 22);
			this->minEnd->Sorted = true;
			this->minEnd->TabIndex = 6;
			// 
			// sEnd
			// 
			this->sEnd->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(60) {L"00", L"01", L"02", L"03", L"04", 
				L"05", L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", 
				L"23", L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", 
				L"41", L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", 
				L"59"});
			this->sEnd->BackColor = System::Drawing::SystemColors::Menu;
			this->sEnd->DropDownHeight = 100;
			this->sEnd->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->sEnd->DropDownWidth = 40;
			this->sEnd->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sEnd->FormattingEnabled = true;
			this->sEnd->IntegralHeight = false;
			this->sEnd->Items->AddRange(gcnew cli::array< System::Object^  >(60) {L"00", L"01", L"02", L"03", L"04", L"05", L"06", L"07", 
				L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", 
				L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", 
				L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"});
			this->sEnd->Location = System::Drawing::Point(124, 24);
			this->sEnd->MaxDropDownItems = 5;
			this->sEnd->MaxLength = 2;
			this->sEnd->Name = L"sEnd";
			this->sEnd->Size = System::Drawing::Size(39, 22);
			this->sEnd->Sorted = true;
			this->sEnd->TabIndex = 6;
			// 
			// endLabel
			// 
			this->endLabel->AutoSize = true;
			this->endLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->endLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->endLabel->Location = System::Drawing::Point(8, 7);
			this->endLabel->Name = L"endLabel";
			this->endLabel->Size = System::Drawing::Size(32, 14);
			this->endLabel->TabIndex = 1;
			this->endLabel->Text = L"END:";
			// 
			// hrEnd
			// 
			this->hrEnd->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(24) {L"00", L"01", L"02", L"03", L"04", 
				L"05", L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", 
				L"23"});
			this->hrEnd->BackColor = System::Drawing::SystemColors::Menu;
			this->hrEnd->DropDownHeight = 100;
			this->hrEnd->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->hrEnd->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->hrEnd->FormattingEnabled = true;
			this->hrEnd->IntegralHeight = false;
			this->hrEnd->Items->AddRange(gcnew cli::array< System::Object^  >(24) {L"00", L"01", L"02", L"03", L"04", L"05", L"06", L"07", 
				L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"});
			this->hrEnd->Location = System::Drawing::Point(11, 24);
			this->hrEnd->MaxDropDownItems = 5;
			this->hrEnd->MaxLength = 2;
			this->hrEnd->Name = L"hrEnd";
			this->hrEnd->Size = System::Drawing::Size(40, 22);
			this->hrEnd->Sorted = true;
			this->hrEnd->TabIndex = 4;
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->ticker2);
			this->panel6->Controls->Add(this->panel5);
			this->panel6->Controls->Add(this->panel4);
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Location = System::Drawing::Point(6, 204);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(346, 104);
			this->panel6->TabIndex = 15;
			// 
			// ticker2
			// 
			this->ticker2->AutoSize = true;
			this->ticker2->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ticker2->Location = System::Drawing::Point(44, 7);
			this->ticker2->Name = L"ticker2";
			this->ticker2->Size = System::Drawing::Size(297, 14);
			this->ticker2->TabIndex = 3;
			this->ticker2->Text = L"Please enter a START and END time in military format.";
			this->ticker2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::Control;
			this->panel7->Controls->Add(this->offset);
			this->panel7->Controls->Add(this->elapsed);
			this->panel7->Controls->Add(this->ElapsedLabel);
			this->panel7->Location = System::Drawing::Point(1, 25);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(343, 75);
			this->panel7->TabIndex = 12;
			// 
			// offset
			// 
			this->offset->BackColor = System::Drawing::SystemColors::ControlLight;
			this->offset->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->offset->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F));
			this->offset->Location = System::Drawing::Point(12, 2);
			this->offset->Name = L"offset";
			this->offset->Size = System::Drawing::Size(87, 23);
			this->offset->TabIndex = 6;
			this->offset->Text = L"<< offset";
			this->offset->UseVisualStyleBackColor = false;
			this->offset->Click += gcnew System::EventHandler(this, &Form1::offset_Click);
			// 
			// elapsed
			// 
			this->elapsed->AutoSize = true;
			this->elapsed->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->elapsed->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->elapsed->Location = System::Drawing::Point(170, 5);
			this->elapsed->Name = L"elapsed";
			this->elapsed->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->elapsed->Size = System::Drawing::Size(67, 15);
			this->elapsed->TabIndex = 5;
			this->elapsed->Text = L"00 : 00 : 00";
			this->elapsed->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// ElapsedLabel
			// 
			this->ElapsedLabel->AutoSize = true;
			this->ElapsedLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ElapsedLabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ElapsedLabel->Location = System::Drawing::Point(242, 3);
			this->ElapsedLabel->Name = L"ElapsedLabel";
			this->ElapsedLabel->Size = System::Drawing::Size(98, 18);
			this->ElapsedLabel->TabIndex = 4;
			this->ElapsedLabel->Text = L":TIME ELAPSED";
			// 
			// offsetDiv
			// 
			this->offsetDiv->AutoSize = true;
			this->offsetDiv->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->offsetDiv->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->offsetDiv->Location = System::Drawing::Point(151, 189);
			this->offsetDiv->Name = L"offsetDiv";
			this->offsetDiv->Size = System::Drawing::Size(201, 23);
			this->offsetDiv->TabIndex = 13;
			this->offsetDiv->Text = L"� � � � � � � � � � � � OFFSET";
			// 
			// credit
			// 
			this->credit->AutoSize = true;
			this->credit->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->credit->ForeColor = System::Drawing::SystemColors::ControlText;
			this->credit->Location = System::Drawing::Point(5, 308);
			this->credit->Name = L"credit";
			this->credit->Size = System::Drawing::Size(44, 13);
			this->credit->TabIndex = 1;
			this->credit->Text = L"amy luo";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(356, 320);
			this->Controls->Add(this->offsetDiv);
			this->Controls->Add(this->convDiv);
			this->Controls->Add(this->Headline);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->credit);
			this->Controls->Add(this->panel6);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Form1";
			this->Text = L"TheTi.me";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/* LAB 4 Military Clock GUI
		 * Amy Luo
		 * CSC 330
		 * 11/04/13
		 */
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 // Initialize Visuals
				 ticker->Text = "Please enter the time in MILITARY FORMAT (23 : 59 : 59)";
				 hrBox->Text = "00";
				 minBox->Text = "00";
				 sBox->Text = "00";
				 hrStart->Text = "00";
				 minStart->Text = "00";
				 sStart->Text = "00";
				 hrEnd->Text = "00";
				 minEnd->Text = "00";
				 sEnd->Text = "00";
				 
			 }

private: System::Void toStd_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 int hr = System::Convert::ToInt32(hrBox->Text + minBox->Text); // hours in military time
			 int sec = System::Convert::ToInt32(sBox->Text);

			if(hr >= 0 && hr <=2359 && sec >= 0 && sec <= 59){
				ticker->Text = "Please enter the time in MILITARY FORMAT (23 : 59 : 59)";
				/* CLASS OBJECT: CLOCK */
				MilTime Clock(hr, sec);
				
				/* FORMATTING AND OUTPUT */

					// Military Time Output (Padding)
				if (Clock.getHour() < 10)// if no hours and one digit min
					MTime->Text = "000" + Convert::ToString(Clock.getHour()) + " hr(s), " + Convert::ToString(Clock.getSec()) + " s"; 
				else if (Clock.getHour() >= 10 && Clock.getHour() < 100) // if no hours and two digit min
					MTime->Text = "00" + Convert::ToString(Clock.getHour()) + " hr(s), " + Convert::ToString(Clock.getSec()) + " s" ;
				else
					MTime->Text = Convert::ToString(Clock.getHour()) + " hr(s), " + Convert::ToString(Clock.getSec()) + " s";

					// Standard Time Output (Padding)
				StdTime->Text = Convert::ToString(Clock.getStandHr()); // output hours
				if (Clock.getMin() < 10) // if one digit min, pad with zero
					StdTime->Text += " : 0" + Convert::ToString(Clock.getMin());
				else
					StdTime->Text += " : " + Convert::ToString(Clock.getMin());

				if (Clock.getSec() < 10) // if one digit sec, pad with zero
					StdTime->Text += " : 0" + Convert::ToString(Clock.getSec());
				else
					StdTime->Text += " : " + Convert::ToString(Clock.getSec());
					//----Determine AM or PM for Standard Time
				if (hr < 1200)
					StdTime->Text += " AM";
				else
					StdTime->Text += " PM";
			}
			else
				ticker->Text = "ERROR: Invalid Input! (Tip: Use drop-down lists.)";

			
			


		 }

private: System::Void offset_Click(System::Object^  sender, System::EventArgs^  e) {
			 int hrS = System::Convert::ToInt32(hrStart->Text);
			 int minS = System::Convert::ToInt32(minStart->Text);
			 int secS = System::Convert::ToInt32(sStart->Text);
			 int hrE = System::Convert::ToInt32(hrEnd->Text);
			 int minE = System::Convert::ToInt32(minEnd->Text);
			 int secE = System::Convert::ToInt32(sEnd->Text);

			 /* CLASS OBJECT: CLOCK */
			 TimeClock Clock(hrS, minS, secS, hrE, minE, secE); // Set data
			 
			 Clock.TimeDif(); // Calculate Time Difference

			 /* PADDING AND OUTPUT */
			 elapsed->Text = Convert::ToString(Clock.getHour()); // output hours
			if (Clock.getMin() < 10) // if one digit min, pad with zero
				elapsed->Text += " : 0" + Convert::ToString(Clock.getMin());
			else
				elapsed->Text += " : " + Convert::ToString(Clock.getMin());

			if (Clock.getSec() < 10) // if one digit sec, pad with zero
				elapsed->Text += " : 0" + Convert::ToString(Clock.getSec());
			else
				elapsed->Text += " : " + Convert::ToString(Clock.getSec());
		 
		 }
};
}

