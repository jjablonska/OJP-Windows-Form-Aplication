#pragma once
#include "stdafx.h"
#include "AboutForm.h"
#include "AddDateForm.h"



namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::IO; //potrzebne do zapisu pliku

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zakoñczToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pomocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oProgramieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  edycjaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wstawToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  dateToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	private: AddDateForm^addDateForm;
	private: System::Windows::Forms::ToolStripMenuItem^  otwózToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zapiszToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->otwózToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->zakoñczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edycjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wstawToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->edycjaToolStripMenuItem, this->pomocToolStripMenuItem
			});
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->otwózToolStripMenuItem,
					this->zapiszToolStripMenuItem, this->toolStripSeparator1, this->zakoñczToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			resources->ApplyResources(this->plikToolStripMenuItem, L"plikToolStripMenuItem");
			// 
			// otwózToolStripMenuItem
			// 
			this->otwózToolStripMenuItem->Name = L"otwózToolStripMenuItem";
			resources->ApplyResources(this->otwózToolStripMenuItem, L"otwózToolStripMenuItem");
			this->otwózToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
			// 
			// zapiszToolStripMenuItem
			// 
			this->zapiszToolStripMenuItem->Name = L"zapiszToolStripMenuItem";
			resources->ApplyResources(this->zapiszToolStripMenuItem, L"zapiszToolStripMenuItem");
			this->zapiszToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::zapiszToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			resources->ApplyResources(this->toolStripSeparator1, L"toolStripSeparator1");
			// 
			// zakoñczToolStripMenuItem
			// 
			this->zakoñczToolStripMenuItem->Name = L"zakoñczToolStripMenuItem";
			resources->ApplyResources(this->zakoñczToolStripMenuItem, L"zakoñczToolStripMenuItem");
			this->zakoñczToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::zakoñczToolStripMenuItem_Click);
			// 
			// edycjaToolStripMenuItem
			// 
			this->edycjaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->wstawToolStripMenuItem });
			this->edycjaToolStripMenuItem->Name = L"edycjaToolStripMenuItem";
			resources->ApplyResources(this->edycjaToolStripMenuItem, L"edycjaToolStripMenuItem");
			// 
			// wstawToolStripMenuItem
			// 
			this->wstawToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->dateToolStripMenuItem });
			this->wstawToolStripMenuItem->Name = L"wstawToolStripMenuItem";
			resources->ApplyResources(this->wstawToolStripMenuItem, L"wstawToolStripMenuItem");
			// 
			// dateToolStripMenuItem
			// 
			this->dateToolStripMenuItem->Name = L"dateToolStripMenuItem";
			resources->ApplyResources(this->dateToolStripMenuItem, L"dateToolStripMenuItem");
			this->dateToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::dateToolStripMenuItem_Click);
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->oProgramieToolStripMenuItem });
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			resources->ApplyResources(this->pomocToolStripMenuItem, L"pomocToolStripMenuItem");
			// 
			// oProgramieToolStripMenuItem
			// 
			this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
			resources->ApplyResources(this->oProgramieToolStripMenuItem, L"oProgramieToolStripMenuItem");
			this->oProgramieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::oProgramieToolStripMenuItem_Click);
			// 
			// richTextBox1
			// 
			resources->ApplyResources(this->richTextBox1, L"richTextBox1");
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Name = L"richTextBox1";
			// 
			// Form1
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void zakoñczToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			//	 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			// 	 resources->GetString(L"Plik nie zosta³ zapisany. Czy chcesz to zrobiæ teraz?")
				 System::Windows::Forms::DialogResult result; 
				
				 if (isFileModifited())
				 {
					 result = MessageBox::Show(L"Plik nie zosta³ zapisany. Czy chcesz to zrobiæ teraz?", L"AsioEdit", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question, MessageBoxDefaultButton::Button1, MessageBoxOptions::DefaultDesktopOnly);

					 if (result == System::Windows::Forms::DialogResult::No)
					 {
						 Close();
					 }
					 else if (result == System::Windows::Forms::DialogResult::Yes)
					 {
						 zapiszPlik();
					 }
				 }
				 else
				 {
					 Close();
				 }





	}

	private:  System::Boolean isFileModifited() {
				  return this->richTextBox1->Text->Length > 0;

	}

	private: System::Void oProgramieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
				 AboutForm^ aboutForm = gcnew AboutForm();
				 aboutForm->ShowDialog();
	}

	private: System::Void dateToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->addDateForm = (gcnew AddDateForm());
			

				 this->addDateForm->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
				 this->addDateForm->ShowDialog();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //this->addDateForm->monthCalendar1-
				 this->addDateForm->Hide();
				 this->richTextBox1->AppendText(this->addDateForm->dateTimePicker1->Text);
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (isFileModifited())
			 {
				 System::Windows::Forms::DialogResult result;
				 result = MessageBox::Show(L"Czy chcesz zapisaæ obecny plik?", L"AsioEdit", MessageBoxButtons::YesNo, MessageBoxIcon::Question, MessageBoxDefaultButton::Button1, MessageBoxOptions::DefaultDesktopOnly);

				 if (result == System::Windows::Forms::DialogResult::Yes)
				 {
					 zapiszPlik();
				 }
			 }
			 
			 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
			 openFileDialog1->Filter = "Pliki tekstowe|*.txt;*.ini;*.log";
			 openFileDialog1->Title = "Wska¿ plik";
			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 System::IO::StreamReader^ sr = gcnew
					 System::IO::StreamReader(openFileDialog1->FileName);
				 this->richTextBox1->Text = sr->ReadToEnd();
				 sr->Close();
			 }
}

	private: System::Void zapiszPlik() {
				 SaveFileDialog^ fileDialog1 = gcnew SaveFileDialog();
				 fileDialog1->Filter = "Pliki tekstowe|*.txt;*.ini;*.log";
				 fileDialog1->Title = "Wska¿ plik do zapisu";

				 if (fileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 StreamWriter^ sw = gcnew StreamWriter(fileDialog1->FileName);
					 sw->Write(this->richTextBox1->Text);
					 sw->Close();
				 }


	}
private: System::Void zapiszToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 zapiszPlik();
}
};


}

