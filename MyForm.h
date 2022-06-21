#include "MyForm1.h"
#pragma once

namespace KeyMaster {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:







	private: System::Windows::Forms::ToolStripMenuItem^ тренировкаToolStripMenuItem;
	private: System::Windows::Forms::Label^ wordLine;
	private: System::Windows::Forms::Label^ errCounter;
	private: System::Windows::Forms::Label^ symbCounter;








	private: System::Windows::Forms::Button^ startButton;


	private: System::Windows::Forms::Button^ stopButton;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Timer^ timer;


	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->тренировкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wordLine = (gcnew System::Windows::Forms::Label());
			this->errCounter = (gcnew System::Windows::Forms::Label());
			this->symbCounter = (gcnew System::Windows::Forms::Label());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->stopButton = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->тренировкаToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1025, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// тренировкаToolStripMenuItem
			// 
			this->тренировкаToolStripMenuItem->Name = L"тренировкаToolStripMenuItem";
			this->тренировкаToolStripMenuItem->Size = System::Drawing::Size(84, 20);
			this->тренировкаToolStripMenuItem->Text = L"Тренировка";
			this->тренировкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::тренировкаToolStripMenuItem_Click);
			// 
			// wordLine
			// 
			this->wordLine->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->wordLine->AutoSize = true;
			this->wordLine->BackColor = System::Drawing::Color::Transparent;
			this->wordLine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->wordLine->Font = (gcnew System::Drawing::Font(L"Calibri", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->wordLine->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->wordLine->Location = System::Drawing::Point(95, 171);
			this->wordLine->Name = L"wordLine";
			this->wordLine->Size = System::Drawing::Size(0, 45);
			this->wordLine->TabIndex = 2;
			this->wordLine->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// errCounter
			// 
			this->errCounter->AutoSize = true;
			this->errCounter->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->errCounter->ForeColor = System::Drawing::SystemColors::Control;
			this->errCounter->Location = System::Drawing::Point(91, 498);
			this->errCounter->Name = L"errCounter";
			this->errCounter->Size = System::Drawing::Size(95, 23);
			this->errCounter->TabIndex = 4;
			this->errCounter->Text = L"Ошибок: 0";
			// 
			// symbCounter
			// 
			this->symbCounter->AutoSize = true;
			this->symbCounter->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->symbCounter->ForeColor = System::Drawing::SystemColors::Control;
			this->symbCounter->Location = System::Drawing::Point(278, 498);
			this->symbCounter->Name = L"symbCounter";
			this->symbCounter->Size = System::Drawing::Size(133, 23);
			this->symbCounter->TabIndex = 5;
			this->symbCounter->Text = L"0/0 напечатано";
			// 
			// startButton
			// 
			this->startButton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->startButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->startButton->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->startButton->FlatAppearance->BorderSize = 0;
			this->startButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->startButton->Font = (gcnew System::Drawing::Font(L"ALS Hauss Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->startButton->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->startButton->Location = System::Drawing::Point(95, 336);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(217, 45);
			this->startButton->TabIndex = 10;
			this->startButton->Text = L"Начать печатать";
			this->startButton->UseVisualStyleBackColor = false;
			this->startButton->Click += gcnew System::EventHandler(this, &MyForm::startButton_Click);
			// 
			// stopButton
			// 
			this->stopButton->BackColor = System::Drawing::Color::RoyalBlue;
			this->stopButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->stopButton->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->stopButton->FlatAppearance->BorderSize = 0;
			this->stopButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->stopButton->Font = (gcnew System::Drawing::Font(L"ALS Hauss Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->stopButton->ForeColor = System::Drawing::Color::White;
			this->stopButton->Location = System::Drawing::Point(309, 336);
			this->stopButton->Name = L"stopButton";
			this->stopButton->Size = System::Drawing::Size(217, 45);
			this->stopButton->TabIndex = 11;
			this->stopButton->Text = L"Остановить";
			this->stopButton->UseVisualStyleBackColor = false;
			this->stopButton->Click += gcnew System::EventHandler(this, &MyForm::stopButton_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::RoyalBlue;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"ALS Hauss", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(95, 284);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(217, 28);
			this->textBox1->TabIndex = 12;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// timer
			// 
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(1025, 561);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->stopButton);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->symbCounter);
			this->Controls->Add(this->errCounter);
			this->Controls->Add(this->wordLine);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Тренажёр KeyMaster";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public:
			String^ setText() {
				String^ Rtext;
				StreamReader^ stream = File::OpenText("text.txt"); //открываем нужный файл
				
				for (int i = 1; i <= rand() % 18; i++) {
					Rtext = Convert::ToString(stream->ReadLine()); //считываем строки
				}

				if (!Rtext || Rtext == "") {
					for (int i = 1; i <= rand() % 18; i++) {
						Rtext = Convert::ToString(stream->ReadLine()); //считываем строки
					}
				}
				
				return Rtext;
			}

			String^ text = "";
			
			String^ actionText = "";
			int textLen;
			int index = 0;
			int countOfSymbols = 0;
			int countOfMistakes = 0;
			void updateActionText() {
				actionText = "";
				index++;
				for (int k = index; k < text->Length; k++) {
					actionText += text[k];
				}
			}
			int timerTicks = 0;

	private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e) {
		text = setText();
		textLen = text->Length;
		actionText = "";
		index = 0;
		int timerTicks = 0;

		timer->Enabled = true;

		symbCounter->Text = Convert::ToString(countOfSymbols) + "/" + Convert::ToString(textLen) + " напечатано";
		errCounter->Text = "Ошибок: " + Convert::ToString(countOfMistakes);

		textBox1->Enabled = true;
		wordLine->Text = text;
		textBox1->Select();
	}

	private: System::Void stopButton_Click(System::Object^ sender, System::EventArgs^ e) {
		timer->Enabled = false;
		textBox1->Enabled = false;

		KeyMaster::MyForm1^ form = gcnew MyForm1(); // создаём экземпляр формы

		form->showResult(countOfSymbols, countOfMistakes, timerTicks);

		form->ShowDialog();
	}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (index == text->Length) {
		KeyMaster::MyForm1^ form = gcnew MyForm1(); // создаём экземпляр формы
		form->showResult(countOfSymbols, countOfMistakes, timerTicks);
		form->ShowDialog();
	}
	else if (textBox1->Text == Convert::ToString(text[index])) {
		//textBox1->Enabled = false;
		updateActionText();
		wordLine->Text = actionText;
		textBox1->Text = "";
		countOfSymbols++;
		symbCounter->Text = Convert::ToString(countOfSymbols) + "/" + Convert::ToString(textLen) + " напечатано";

	}
	else if (textBox1->Text != "") {
		countOfMistakes++;
		errCounter->Text = "Ошибок: " + Convert::ToString(countOfMistakes);
		textBox1->Text = "";
	}
	
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	timerTicks++;
}
private: System::Void тренировкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	countOfMistakes = 0;
	countOfSymbols = 0;
	actionText = "";
	index = 0;
	int timerTicks = 0;
	textBox1->Enabled = false;

	timer->Enabled = true;

	symbCounter->Text = Convert::ToString(countOfSymbols) + "/" + Convert::ToString(textLen) + " напечатано";
	errCounter->Text = "Ошибок: " + Convert::ToString(countOfMistakes);

	textBox1->Enabled = true;
	wordLine->Text = text;
	textLen = text->Length;
	textBox1->Select();
}
};
}
