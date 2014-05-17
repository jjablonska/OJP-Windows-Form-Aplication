#pragma once
#include "stdafx.h"
#include "AboutForm.h"


namespace WindowsFormApplication1 {

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zakoñczToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pomocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oProgramieToolStripMenuItem;

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
			this->zakoñczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->plikToolStripMenuItem,
					this->pomocToolStripMenuItem
			});
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->zakoñczToolStripMenuItem });
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			resources->ApplyResources(this->plikToolStripMenuItem, L"plikToolStripMenuItem");
			// 
			// zakoñczToolStripMenuItem
			// 
			this->zakoñczToolStripMenuItem->Name = L"zakoñczToolStripMenuItem";
			resources->ApplyResources(this->zakoñczToolStripMenuItem, L"zakoñczToolStripMenuItem");
			this->zakoñczToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::zakoñczToolStripMenuItem_Click);
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
			// Form1
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
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

				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
				 System::Windows::Forms::DialogResult result; 
				 result = MessageBox::Show(resources->GetString(L"fileNotSavedExitQuestion"), resources->GetString(L"appName"), MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question, MessageBoxDefaultButton::Button1, MessageBoxOptions::DefaultDesktopOnly);

				 Close();
				 if (result == System::Windows::Forms::DialogResult::No)
				 {
					 Close();
				 }


	}

	private: System::Void oProgramieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
				 AboutForm^ aboutForm = gcnew AboutForm();
				 aboutForm->ShowDialog();
	}
};


}

