#pragma once

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
	/// Summary for ModuloStansaForm
	/// </summary>
	public ref class ModuloStansaForm : public System::Windows::Forms::Form
	{
	public:
		ModuloStansaForm(void)
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
		~ModuloStansaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtModStansaName;
	private: System::Windows::Forms::TextBox^  txtModStansaPlace;
	private: System::Windows::Forms::TextBox^  txtModStansaMachines;
	private: System::Windows::Forms::Button^  btnUpdate;
	private: System::Windows::Forms::Button^  btnDelete;
	private: System::Windows::Forms::Button^  btnAdd;
	protected:

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtModStansaName = (gcnew System::Windows::Forms::TextBox());
			this->txtModStansaPlace = (gcnew System::Windows::Forms::TextBox());
			this->txtModStansaMachines = (gcnew System::Windows::Forms::TextBox());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Lugar";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"# Maquinas";
			// 
			// txtModStansaName
			// 
			this->txtModStansaName->Location = System::Drawing::Point(116, 42);
			this->txtModStansaName->Name = L"txtModStansaName";
			this->txtModStansaName->Size = System::Drawing::Size(100, 20);
			this->txtModStansaName->TabIndex = 3;
			// 
			// txtModStansaPlace
			// 
			this->txtModStansaPlace->Location = System::Drawing::Point(116, 79);
			this->txtModStansaPlace->Name = L"txtModStansaPlace";
			this->txtModStansaPlace->Size = System::Drawing::Size(100, 20);
			this->txtModStansaPlace->TabIndex = 4;
			// 
			// txtModStansaMachines
			// 
			this->txtModStansaMachines->Location = System::Drawing::Point(116, 118);
			this->txtModStansaMachines->Name = L"txtModStansaMachines";
			this->txtModStansaMachines->Size = System::Drawing::Size(100, 20);
			this->txtModStansaMachines->TabIndex = 5;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(199, 159);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 6;
			this->btnUpdate->Text = L"Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(338, 159);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 7;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(63, 159);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 8;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ModuloStansaForm::btnAdd_Click);
			// 
			// ModuloStansaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(514, 316);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->txtModStansaMachines);
			this->Controls->Add(this->txtModStansaPlace);
			this->Controls->Add(this->txtModStansaName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ModuloStansaForm";
			this->Text = L"ModuloStansaForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:  static Staff^ staffLocal = gcnew Staff();
			 static ModuloStansa^ moduloStansaLocal = gcnew ModuloStansa();
	public: System::Void ActualizarModuloyStaff(ModuloStansa^ modulo, Staff^ staff){
			moduloStansaLocal->id = modulo->id;
			moduloStansaLocal->name = modulo->name;
			moduloStansaLocal->place = modulo->place;
			moduloStansaLocal->MaquinasOperativas = modulo->MaquinasOperativas;

			staffLocal->id = staff->id;
			staffLocal->dni = staff->dni;
			staffLocal->name = staff->name;
			staffLocal->apellido_Paterno = staff->apellido_Paterno;
			staffLocal->apellido_Materno = staff->apellido_Materno;
			staffLocal->sexo = staff->sexo;
			staffLocal->username = staff->username;
			staffLocal->password = staff->password;
			staffLocal->hora_entrada = staff->hora_entrada;
			staffLocal->hora_salida = staff->hora_salida;
			staffLocal->puesto = staff->puesto;
		}

	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ nombre = txtModStansaName->Text;
		String^ lugar = txtModStansaPlace->Text;
		int maquinas = Int32::Parse(txtModStansaMachines->Text);

		ModuloStansa^ modulo = gcnew ModuloStansa();
		modulo->name = nombre;
		modulo->place = lugar;
		modulo->MaquinasOperativas = maquinas;
		StansaManager::AddModuloStansa(modulo);	

	} //Fin del Metodo Add
};
}
