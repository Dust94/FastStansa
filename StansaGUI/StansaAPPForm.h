#pragma once

#include "Lector_PruebaForm.h"
#include "ProductForm.h"
#include "SaleForm.h"
#include "StaffForm.h"

namespace StansaGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// Summary for StansaAPPForm
	/// </summary>
	public ref class StansaAPPForm : public System::Windows::Forms::Form
	{
	private:
		Thread ^ myThread;
	public:
		StansaAPPForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			myThread = gcnew Thread(gcnew ThreadStart(this, &StansaAPPForm::MyRun));
			myThread->Start();
		}
		void MyRun(){
			while (true) {
				/*
				DateTime^ now = DateTime::Now;
				Invoke(gcnew delegateUpdateTitle(this, &StansaAPPForm::UpdateTitle),
					gcnew array<String^>{"Sistema de Ventas " + now->ToString("hh:mm:ss")});
				Thread::Sleep(1000);
				if (!this->Visible)
					return;
					*/
			}
		}

		delegate void delegateUpdateTitle(String^);

		void UpdateTitle(String ^newTitle){
			this->Text = newTitle;
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StansaAPPForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  operacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  realizarVentaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  actualizarProductosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lectorPruebaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  staffToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->operacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->realizarVentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actualizarProductosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lectorPruebaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->staffToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->operacionesToolStripMenuItem,
					this->mantenimientoToolStripMenuItem, this->toolStripMenuItem2, this->toolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &StansaAPPForm::menuStrip1_ItemClicked);
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->realizarVentaToolStripMenuItem });
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// realizarVentaToolStripMenuItem
			// 
			this->realizarVentaToolStripMenuItem->Name = L"realizarVentaToolStripMenuItem";
			this->realizarVentaToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->realizarVentaToolStripMenuItem->Text = L"Realizar Venta";
			this->realizarVentaToolStripMenuItem->Click += gcnew System::EventHandler(this, &StansaAPPForm::realizarVentaToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->actualizarProductosToolStripMenuItem,
					this->lectorPruebaToolStripMenuItem, this->staffToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// actualizarProductosToolStripMenuItem
			// 
			this->actualizarProductosToolStripMenuItem->Name = L"actualizarProductosToolStripMenuItem";
			this->actualizarProductosToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->actualizarProductosToolStripMenuItem->Text = L"Actualizar Productos";
			this->actualizarProductosToolStripMenuItem->Click += gcnew System::EventHandler(this, &StansaAPPForm::actualizarProductosToolStripMenuItem_Click);
			// 
			// lectorPruebaToolStripMenuItem
			// 
			this->lectorPruebaToolStripMenuItem->Name = L"lectorPruebaToolStripMenuItem";
			this->lectorPruebaToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->lectorPruebaToolStripMenuItem->Text = L"Lector Prueba";
			this->lectorPruebaToolStripMenuItem->Click += gcnew System::EventHandler(this, &StansaAPPForm::lectorPruebaToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(125, 20);
			this->toolStripMenuItem2->Text = L"toolStripMenuItem2";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(12, 20);
			// 
			// staffToolStripMenuItem
			// 
			this->staffToolStripMenuItem->Name = L"staffToolStripMenuItem";
			this->staffToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->staffToolStripMenuItem->Text = L"Staff";
			this->staffToolStripMenuItem->Click += gcnew System::EventHandler(this, &StansaAPPForm::staffToolStripMenuItem_Click);
			// 
			// StansaAPPForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"StansaAPPForm";
			this->Text = L"StansaAPPForm";
			this->Load += gcnew System::EventHandler(this, &StansaAPPForm::StansaAPPForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void lectorPruebaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Lector_PruebaForm^ pForm = gcnew Lector_PruebaForm();
		pForm->MdiParent = this;
		pForm->Show();
	}
private: System::Void realizarVentaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SaleForm^ pForm = gcnew SaleForm();
		pForm->MdiParent = this;
		pForm->Show();
	}
private: System::Void actualizarProductosToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ProductForm^ pForm = gcnew ProductForm();
	pForm->MdiParent = this;
	pForm->Show();
}
private: System::Void StansaAPPForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void staffToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 StaffForm^ pForm = gcnew StaffForm();
			 pForm->MdiParent = this;
			 pForm->Show();

}
};
}
