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
	private: System::Windows::Forms::DataGridView^  dgvModuloStansa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  place;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  MachinesOperatives;
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
			this->dgvModuloStansa = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->place = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MachinesOperatives = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvModuloStansa))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(48, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Lugar";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(48, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"# Maquinas";
			// 
			// txtModStansaName
			// 
			this->txtModStansaName->Location = System::Drawing::Point(135, 26);
			this->txtModStansaName->Name = L"txtModStansaName";
			this->txtModStansaName->Size = System::Drawing::Size(100, 20);
			this->txtModStansaName->TabIndex = 3;
			// 
			// txtModStansaPlace
			// 
			this->txtModStansaPlace->Location = System::Drawing::Point(135, 63);
			this->txtModStansaPlace->Name = L"txtModStansaPlace";
			this->txtModStansaPlace->Size = System::Drawing::Size(100, 20);
			this->txtModStansaPlace->TabIndex = 4;
			// 
			// txtModStansaMachines
			// 
			this->txtModStansaMachines->Location = System::Drawing::Point(135, 102);
			this->txtModStansaMachines->Name = L"txtModStansaMachines";
			this->txtModStansaMachines->Size = System::Drawing::Size(100, 20);
			this->txtModStansaMachines->TabIndex = 5;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(197, 139);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 6;
			this->btnUpdate->Text = L"Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ModuloStansaForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(336, 139);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 7;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(61, 139);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 8;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ModuloStansaForm::btnAdd_Click);
			// 
			// dgvModuloStansa
			// 
			this->dgvModuloStansa->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvModuloStansa->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->id, this->name,
					this->place, this->MachinesOperatives
			});
			this->dgvModuloStansa->Location = System::Drawing::Point(32, 179);
			this->dgvModuloStansa->Name = L"dgvModuloStansa";
			this->dgvModuloStansa->Size = System::Drawing::Size(386, 150);
			this->dgvModuloStansa->TabIndex = 9;
			this->dgvModuloStansa->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ModuloStansaForm::dgvModuloStansa_CellContentClick);
			// 
			// id
			// 
			this->id->HeaderText = L"Id";
			this->id->Name = L"id";
			this->id->Width = 60;
			// 
			// name
			// 
			this->name->HeaderText = L"Nombre";
			this->name->Name = L"name";
			// 
			// place
			// 
			this->place->HeaderText = L"Lugar";
			this->place->Name = L"place";
			// 
			// MachinesOperatives
			// 
			this->MachinesOperatives->HeaderText = L"Maquinas Operativas";
			this->MachinesOperatives->Name = L"MachinesOperatives";
			this->MachinesOperatives->Width = 80;
			// 
			// ModuloStansaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(445, 350);
			this->Controls->Add(this->dgvModuloStansa);
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
			this->Load += gcnew System::EventHandler(this, &ModuloStansaForm::ModuloStansaForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvModuloStansa))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:  static Staff^ staffLocal = gcnew Staff();
			 static ModuloStansa^ moduloStansaLocal = gcnew ModuloStansa();
	public:  int idModStansaGrilla;
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

			void RefreshDGVModuloStaff(){
				List<ModuloStansa^>^ listModStansa = StansaManager::QueryAllModuloStansa();
				dgvModuloStansa->Rows->Clear(); //Limpio la Grilla

				for (int i = 0; i < listModStansa->Count; i++){
					dgvModuloStansa->Rows->Add(gcnew array<String^>{
						"" + listModStansa[i]->id,
							listModStansa[i]->name,
							listModStansa[i]->place,
						"" + listModStansa[i]->MaquinasOperativas});
				} //Fin del For
			}//Fin del Metodo RefreshDGVModuloStaff

	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ nombre = txtModStansaName->Text;
		String^ lugar = txtModStansaPlace->Text;
		int maquinas = Int32::Parse(txtModStansaMachines->Text);

		ModuloStansa^ modulo = gcnew ModuloStansa();
		modulo->name = nombre;
		modulo->place = lugar;
		modulo->MaquinasOperativas = maquinas;
		StansaManager::AddModuloStansa(modulo);	
		RefreshDGVModuloStaff();
	} //Fin del Metodo Add

private: System::Void ModuloStansaForm_Load(System::Object^  sender, System::EventArgs^  e) {
	RefreshDGVModuloStaff();
}
private: System::Void dgvModuloStansa_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e);
private: System::Void btnUpdate_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ nombre = txtModStansaName->Text;
	String^ lugar = txtModStansaPlace->Text;
	int maquinas = Int32::Parse(txtModStansaMachines->Text);

	ModuloStansa^ modulo = StansaManager::QueryModuloStansaById(idModStansaGrilla);
	modulo->name = nombre;
	modulo->place = lugar;
	modulo->MaquinasOperativas = maquinas;

	StansaManager::UpdateModuloStansa(modulo);
	RefreshDGVModuloStaff();
}//Fin del Metodo Update
};
}
