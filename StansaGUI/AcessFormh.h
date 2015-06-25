#pragma once
#include "StansaAPPForm.h"
#include "StaffForm.h"
#include "ProductForm.h"
#include "ProductSearchForm.h"
#include "SaleForm.h"

namespace StansaGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace FotoLibrary;
	using namespace StansaController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de AcessFormh
	/// </summary>
	public ref class AcessFormh : public System::Windows::Forms::Form
	{
		Form^ stansaAppForm; //Creo un Form para acceder a "StansaAPPForm.h". 
		Form^ staffForm; //Creo un Form para acceder a "StaffForm.h"
		Form^ productForm; //Creo un Form para acceder a "ProductForm.h"
		Form^ productSearchForm; //Creo un Form para acceder a "ProductSearchForm.h"
		Form^ saleForm; //Creo un Form para acceder a "SaleForm.h"
	public:
		AcessFormh(Form^ stansaAppForm, Form^ staffForm)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->stansaAppForm = stansaAppForm;
			this->staffForm = staffForm;
		}
		AcessFormh(){
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~AcessFormh()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::Button^  btnOk;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtStaffDni;






	private: System::Windows::Forms::ComboBox^  combModuloStansa;
	private: System::Windows::Forms::Label^  label3;



	protected:

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtStaffDni = (gcnew System::Windows::Forms::TextBox());
			this->combModuloStansa = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(89, 129);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 0;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &AcessFormh::btnCancel_Click);
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(204, 129);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(75, 23);
			this->btnOk->TabIndex = 1;
			this->btnOk->Text = L"Aceptar";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &AcessFormh::btnOk_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ingresar DNI";
			// 
			// txtStaffDni
			// 
			this->txtStaffDni->Location = System::Drawing::Point(136, 82);
			this->txtStaffDni->Name = L"txtStaffDni";
			this->txtStaffDni->Size = System::Drawing::Size(153, 20);
			this->txtStaffDni->TabIndex = 4;
			// 
			// combModuloStansa
			// 
			this->combModuloStansa->FormattingEnabled = true;
			this->combModuloStansa->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Arquitectura", L"Arte", L"Ciencias" });
			this->combModuloStansa->Location = System::Drawing::Point(149, 25);
			this->combModuloStansa->Name = L"combModuloStansa";
			this->combModuloStansa->Size = System::Drawing::Size(121, 21);
			this->combModuloStansa->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Modulo de Stansa";
			// 
			// AcessFormh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(360, 213);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->combModuloStansa);
			this->Controls->Add(this->txtStaffDni);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->btnCancel);
			this->Name = L"AcessFormh";
			this->Text = L"Acceso";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();

	}
private: System::Void btnOk_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ dni = txtStaffDni->Text;
	String^ ModuloStansaPlace = combModuloStansa->Text; //Eligo el Modulo de Stansa al que estoy accediendo
	if (dni != nullptr){
		Staff^ s = StansaManager::QueryStaffByDni(dni);
		if (s != nullptr){
			ModuloStansa^ moduloStansa = StansaManager::QueryModuloStansaLikePlace(ModuloStansaPlace);
			((StansaAPPForm^)stansaAppForm)->moduloStansaLocal->id = moduloStansa->id;
			((StaffForm^)staffForm)->moduloStansaLocal->id = moduloStansa->id;
			((ProductForm^)staffForm)->moduloStansaLocal->id = moduloStansa->id;
			((ProductSearchForm^)staffForm)->moduloStansaLocal->id = moduloStansa->id;
			((SaleForm^)staffForm)->moduloStansaLocal->id = moduloStansa->id;

			((StansaAPPForm^)stansaAppForm)->staffLocal->id = s->id;
			((StaffForm^)staffForm)->staffLocal->id = s->id;
			((ProductForm^)staffForm)->staffLocal->id = s->id;
			((ProductSearchForm^)staffForm)->staffLocal->id = s->id;
			((SaleForm^)staffForm)->staffLocal->id = s->id;		
			StansaAPPForm^ pForm = gcnew StansaAPPForm();
			pForm->Show();
			//AcessFormh::Close();
		}
		else MessageBox::Show("Personal de Stansa No Registrado");
	}

}
private: System::Void txtpsw_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
