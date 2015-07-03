#pragma once
#include "StansaAPPForm.h"
#include "StaffForm.h"
#include "ProductForm.h"
#include "ProductSearchForm.h"
#include "SaleForm.h"
#include "ModuloStansaForm.h"

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
		Form^ moduloStansaForm; //Creo un Form para acceder a "ModuloStansaForm.h"

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtStaffUsername;
	private: System::Windows::Forms::TextBox^  txtStaffPassword;


	private: System::Windows::Forms::Label^  label4;




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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtStaffUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtStaffPassword = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(360, 204);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 0;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &AcessFormh::btnCancel_Click);
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(200, 204);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(75, 23);
			this->btnOk->TabIndex = 1;
			this->btnOk->Text = L"Acceder";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &AcessFormh::btnOk_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(368, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ingresar DNI";
			// 
			// txtStaffDni
			// 
			this->txtStaffDni->Location = System::Drawing::Point(470, 97);
			this->txtStaffDni->Name = L"txtStaffDni";
			this->txtStaffDni->Size = System::Drawing::Size(153, 20);
			this->txtStaffDni->TabIndex = 4;
			// 
			// combModuloStansa
			// 
			this->combModuloStansa->FormattingEnabled = true;
			this->combModuloStansa->Location = System::Drawing::Point(149, 25);
			this->combModuloStansa->Name = L"combModuloStansa";
			this->combModuloStansa->Size = System::Drawing::Size(153, 21);
			this->combModuloStansa->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(47, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Modulo de Stansa";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Nombre de Usuario";
			this->label2->Click += gcnew System::EventHandler(this, &AcessFormh::label2_Click);
			// 
			// txtStaffUsername
			// 
			this->txtStaffUsername->Location = System::Drawing::Point(156, 97);
			this->txtStaffUsername->Name = L"txtStaffUsername";
			this->txtStaffUsername->PasswordChar = '*';
			this->txtStaffUsername->Size = System::Drawing::Size(153, 20);
			this->txtStaffUsername->TabIndex = 12;
			// 
			// txtStaffPassword
			// 
			this->txtStaffPassword->Location = System::Drawing::Point(156, 138);
			this->txtStaffPassword->Name = L"txtStaffPassword";
			this->txtStaffPassword->PasswordChar = '*';
			this->txtStaffPassword->Size = System::Drawing::Size(153, 20);
			this->txtStaffPassword->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Contraseña";
			// 
			// AcessFormh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(658, 317);
			this->Controls->Add(this->txtStaffPassword);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtStaffUsername);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->combModuloStansa);
			this->Controls->Add(this->txtStaffDni);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->btnCancel);
			this->Name = L"AcessFormh";
			this->Text = L"Acceso";
			this->Load += gcnew System::EventHandler(this, &AcessFormh::AcessFormh_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();

	}

public: Staff^ s = gcnew Staff();
public: bool Validacion(){
	bool dni = String::Equals(txtStaffDni->Text, ""); //Vacio = true. //Llenado = false
	bool username = String::Equals(txtStaffUsername->Text, "");
	bool password = String::Equals(txtStaffPassword->Text, "");
	if ((!username && !password) && !dni){
		MessageBox::Show("Sólo debe ingresar un criterio de búsqueda");
		return false;
	}
	if ( (!username && !password) && dni ){ //Si solo se ha llenado el campo de username y password
		String^ usernameText = txtStaffUsername->Text; //username Ingresado por Usuario
		String^ passwordText = txtStaffPassword->Text; //password Ingresado por Usuario
		s = StansaManager::QueryStaffByUsernameAndPassWord(usernameText, passwordText);
		if (s != nullptr) return true; //Se ha encontrado el usuario
		else {
			MessageBox::Show("Nombre de Usuario o Contraseña Incorrecta");
			return false;
		}
	}
	if ( !(!username && !password) && !dni ){ //Si solo se ha llenado el campo de dni
		String^ dni = txtStaffDni->Text; //Codigo PUCP Ingresado por Usuario
		s = StansaManager::QueryStaffByDni(dni);
		if (s != nullptr) return true; //Se ha encontrado el usuario
		else {
			MessageBox::Show("DNI Incorrecto");
			return false;
		}
	}
	if ((username && password) && dni){ //Si todos los campos estan vacios
		MessageBox::Show("Ingrese algun Campo de Busqueda");
		return false;
	}
}// Fin de Metodo Validacion
private: System::Void btnOk_Click(System::Object^  sender, System::EventArgs^  e) {	 
			 String^ ModuloStansaPlace = combModuloStansa->Text; //Eligo el Modulo de Stansa al que estoy accediendo
			 ModuloStansa^ moduloStansa = StansaManager::QueryModuloStansaLikePlace(ModuloStansaPlace);
			 if (Validacion())
			 {
				 String^ msg = "" + s->name + s->apellido_Paterno + s->dni;
				 MessageBox::Show(msg);
				 
				 ((StansaAPPForm^)stansaAppForm)->ActualizarModuloyStaff(moduloStansa, s);
				 ((StaffForm^)staffForm)->ActualizarModuloyStaff(moduloStansa, s);
				 ((ProductForm^)productForm)->ActualizarModuloyStaff(moduloStansa, s);
				 ((ProductSearchForm^)productSearchForm)->ActualizarModuloyStaff(moduloStansa, s);
				 ((SaleForm^)saleForm)->ActualizarModuloyStaff(moduloStansa, s);
				 ((ModuloStansaForm^)moduloStansaForm)->ActualizarModuloyStaff(moduloStansa, s);
				 
				 StansaAPPForm^ pForm = gcnew StansaAPPForm();
				 pForm->Show();
				 //AcessFormh::Close();
			 }//Fin de If
} //fin de Metodo Ok

private: System::Void txtpsw_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void AcessFormh_Load(System::Object^  sender, System::EventArgs^  e) {
	
	List <ModuloStansa^> ^ modstansaList = StansaManager::QueryAllModuloStansa();
			 for (int i = 0; i < modstansaList->Count; i++){
				 combModuloStansa->Items->Add(modstansaList[i]->place);
			 }
			 
			 
}
private: System::Void btnregister_Click(System::Object^  sender, System::EventArgs^  e) {



}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
