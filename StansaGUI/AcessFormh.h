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
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtpsw;
	private: System::Windows::Forms::TextBox^  txtuser;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;




			 Form^ saleForm; //Creo un Form para acceder a "SaleForm.h"
	public:
		AcessFormh(Form^ stansaAppForm, Form^ staffForm)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
			this->stansaAppForm = stansaAppForm;
			this->staffForm = staffForm;
		}
		AcessFormh(){
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n utilizando.
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
		/// Variable del dise�ador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido del m�todo con el editor de c�digo.
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
			this->txtpsw = (gcnew System::Windows::Forms::TextBox());
			this->txtuser = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(358, 67);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 0;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &AcessFormh::btnCancel_Click);
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(358, 25);
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
			this->label1->Location = System::Drawing::Point(41, 111);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ingresar DNI";
			// 
			// txtStaffDni
			// 
			this->txtStaffDni->Location = System::Drawing::Point(149, 108);
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
			this->label2->Location = System::Drawing::Point(47, 184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Contrase�a";
			this->label2->Click += gcnew System::EventHandler(this, &AcessFormh::label2_Click);
			// 
			// txtpsw
			// 
			this->txtpsw->Location = System::Drawing::Point(149, 177);
			this->txtpsw->Name = L"txtpsw";
			this->txtpsw->PasswordChar = '*';
			this->txtpsw->Size = System::Drawing::Size(153, 20);
			this->txtpsw->TabIndex = 12;
			this->txtpsw->TextChanged += gcnew System::EventHandler(this, &AcessFormh::txtpsw_TextChanged_1);
			// 
			// txtuser
			// 
			this->txtuser->Location = System::Drawing::Point(149, 148);
			this->txtuser->Name = L"txtuser";
			this->txtuser->PasswordChar = '*';
			this->txtuser->Size = System::Drawing::Size(153, 20);
			this->txtuser->TabIndex = 14;
			this->txtuser->TextChanged += gcnew System::EventHandler(this, &AcessFormh::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(47, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Username";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(43, 65);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(259, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Por favor, solo ingrese su n�mero de DNI o username";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(44, 78);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L" para la validaci�n.";
			// 
			// AcessFormh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(476, 220);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtuser);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtpsw);
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
private: System::Void btnOk_Click(System::Object^  sender, System::EventArgs^  e) {

			 
			 String^ dni = txtStaffDni->Text->Trim();
			 String^ User = txtuser->Text->Trim();
			 String^ psw = txtpsw->Text->Trim();

			
			 String^ ModuloStansaPlace = combModuloStansa->Text; //Eligo el Modulo de Stansa al que estoy accediendo
			 ModuloStansa^ moduloStansa = StansaManager::QueryModuloStansaLikePlace(ModuloStansaPlace);
			


			 if (dni != "" && User == "")
			 {
				 Staff^ s = StansaManager::QueryStaffByDni(dni);
				 String^ msg = "" + s->name + s->apellido_Paterno + s->dni;
				 MessageBox::Show(msg);

				 ((StansaAPPForm^)stansaAppForm)->ActualizarModuloyStaff(moduloStansa, s);
				 ((StaffForm^)staffForm)->ActualizarModuloyStaff(moduloStansa, s);
				 ((ProductForm^)productForm)->ActualizarModuloyStaff(moduloStansa, s);
				 ((ProductSearchForm^)productSearchForm)->ActualizarModuloyStaff(moduloStansa, s);
				 ((SaleForm^)saleForm)->ActualizarModuloyStaff(moduloStansa, s);

				 StansaAPPForm^ pForm = gcnew StansaAPPForm();
				 pForm->Show();
				 //AcessFormh::Close();
			 }
			 else
			 {
				 MessageBox::Show("DNI INCORRECTO");
				 return;
			 }

			 if (User != "" && dni== "")
			 {
				 Staff^ s = StansaManager::QueryByUsername(User);

				 if (!String::Compare(s->password, psw))
				 {
					 if (s != nullptr){
						 String^ msg = "" + s->name + s->apellido_Paterno + s->dni;
						 MessageBox::Show(msg);

						 ((StansaAPPForm^)stansaAppForm)->ActualizarModuloyStaff(moduloStansa, s);
						 ((StaffForm^)staffForm)->ActualizarModuloyStaff(moduloStansa, s);
						 ((ProductForm^)productForm)->ActualizarModuloyStaff(moduloStansa, s);
						 ((ProductSearchForm^)productSearchForm)->ActualizarModuloyStaff(moduloStansa, s);
						 ((SaleForm^)saleForm)->ActualizarModuloyStaff(moduloStansa, s);

						 StansaAPPForm^ pForm = gcnew StansaAPPForm();
						 pForm->Show();
						 //AcessFormh::Close();


					 }
					 else
					 {
						 MessageBox::Show("Usuario o Contrase�a INCORRECTA");
					 }
				 }
			 }

			 if (User != "" && dni != "")
			 {
				 MessageBox::Show("Por favor, solo ingrese uno de los campos requeridos");
			 }

}
private: System::Void txtpsw_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void AcessFormh_Load(System::Object^  sender, System::EventArgs^  e) {
			 List <ModuloStansa^> ^ modstansaList = StansaManager::QueryAllModuloStansa();
			 for (int i = 0; i < modstansaList->Count; i++){
				 combModuloStansa->Items->Add(
					 modstansaList[i]->name + " " +
					 modstansaList[i]->place);
			 }
			 
}
private: System::Void btnregister_Click(System::Object^  sender, System::EventArgs^  e) {

			 




}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void txtpsw_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
