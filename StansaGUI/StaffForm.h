#pragma once
namespace StansaGUI {

	//Trabajando 
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace FotoLibrary;
	using namespace StansaController;

	/// <summary>
	/// Resumen de StaffForm
	/// </summary>
	public ref class StaffForm : public System::Windows::Forms::Form
	{
	public:
		StaffForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			RefreshDGVStaff();
		
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~StaffForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtStaffName;

	private: System::Windows::Forms::TextBox^  txtStaffDni;
	private: System::Windows::Forms::TextBox^  txtStaffApellidoPat;
	private: System::Windows::Forms::TextBox^  txtStaffApellidoMat;



	private: System::Windows::Forms::DataGridView^  dgvStaff;
	private: System::Windows::Forms::Button^  btnStaffAdd;
	private: System::Windows::Forms::Button^  btnStaffUpdate;
	private: System::Windows::Forms::Button^  btnStaffDelete;
	private: System::Windows::Forms::Button^  btnStaffQuery;












	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::RadioButton^  rbtnMasculino;
	private: System::Windows::Forms::RadioButton^  rbtnFemenino;












	private: System::Windows::Forms::TextBox^  txtStaffPassword;

	private: System::Windows::Forms::TextBox^  txtStaffUsername;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;




	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ComboBox^  combStaffPuesto;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::DateTimePicker^  dTPHoraEntrada;
	private: System::Windows::Forms::DateTimePicker^  dTPHoraSalida;
	private: System::Windows::Forms::Label^  lblPrueba;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ApellidoPaterno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ApellidoMateno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Sexo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  username;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  password;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  HoraEntrada;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Horasalida;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  puesto;
	private: System::Windows::Forms::Label^  lblPrueba2;














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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtStaffName = (gcnew System::Windows::Forms::TextBox());
			this->txtStaffDni = (gcnew System::Windows::Forms::TextBox());
			this->txtStaffApellidoPat = (gcnew System::Windows::Forms::TextBox());
			this->txtStaffApellidoMat = (gcnew System::Windows::Forms::TextBox());
			this->dgvStaff = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ApellidoPaterno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ApellidoMateno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sexo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->password = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HoraEntrada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Horasalida = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->puesto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnStaffAdd = (gcnew System::Windows::Forms::Button());
			this->btnStaffUpdate = (gcnew System::Windows::Forms::Button());
			this->btnStaffDelete = (gcnew System::Windows::Forms::Button());
			this->btnStaffQuery = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->rbtnMasculino = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnFemenino = (gcnew System::Windows::Forms::RadioButton());
			this->txtStaffPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtStaffUsername = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->combStaffPuesto = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dTPHoraEntrada = (gcnew System::Windows::Forms::DateTimePicker());
			this->dTPHoraSalida = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblPrueba = (gcnew System::Windows::Forms::Label());
			this->lblPrueba2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStaff))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(57, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(57, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"DNI";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(57, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Apellido Paterno";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(57, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Apellido Materno";
			// 
			// txtStaffName
			// 
			this->txtStaffName->Location = System::Drawing::Point(188, 57);
			this->txtStaffName->Name = L"txtStaffName";
			this->txtStaffName->Size = System::Drawing::Size(100, 20);
			this->txtStaffName->TabIndex = 4;
			// 
			// txtStaffDni
			// 
			this->txtStaffDni->Location = System::Drawing::Point(188, 20);
			this->txtStaffDni->Name = L"txtStaffDni";
			this->txtStaffDni->Size = System::Drawing::Size(100, 20);
			this->txtStaffDni->TabIndex = 5;
			// 
			// txtStaffApellidoPat
			// 
			this->txtStaffApellidoPat->Location = System::Drawing::Point(188, 92);
			this->txtStaffApellidoPat->Name = L"txtStaffApellidoPat";
			this->txtStaffApellidoPat->Size = System::Drawing::Size(100, 20);
			this->txtStaffApellidoPat->TabIndex = 6;
			// 
			// txtStaffApellidoMat
			// 
			this->txtStaffApellidoMat->Location = System::Drawing::Point(188, 129);
			this->txtStaffApellidoMat->Name = L"txtStaffApellidoMat";
			this->txtStaffApellidoMat->Size = System::Drawing::Size(100, 20);
			this->txtStaffApellidoMat->TabIndex = 7;
			// 
			// dgvStaff
			// 
			this->dgvStaff->AccessibleName = L"dgvStaff";
			this->dgvStaff->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStaff->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Id, this->DNI,
					this->Nombre, this->ApellidoPaterno, this->ApellidoMateno, this->Sexo, this->username, this->password, this->HoraEntrada, this->Horasalida,
					this->puesto
			});
			this->dgvStaff->Location = System::Drawing::Point(46, 278);
			this->dgvStaff->Name = L"dgvStaff";
			this->dgvStaff->Size = System::Drawing::Size(740, 150);
			this->dgvStaff->TabIndex = 8;
			this->dgvStaff->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StaffForm::dgvStaff_CellContentClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			this->Id->Width = 40;
			// 
			// DNI
			// 
			this->DNI->HeaderText = L"DNI";
			this->DNI->Name = L"DNI";
			this->DNI->Width = 60;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			// 
			// ApellidoPaterno
			// 
			this->ApellidoPaterno->HeaderText = L"Apellido Paterno";
			this->ApellidoPaterno->Name = L"ApellidoPaterno";
			// 
			// ApellidoMateno
			// 
			this->ApellidoMateno->HeaderText = L"Apellido Materno";
			this->ApellidoMateno->Name = L"ApellidoMateno";
			// 
			// Sexo
			// 
			this->Sexo->HeaderText = L"Sexo";
			this->Sexo->Name = L"Sexo";
			this->Sexo->Width = 40;
			// 
			// username
			// 
			this->username->HeaderText = L"Nombre de Usuario";
			this->username->Name = L"username";
			this->username->Width = 80;
			// 
			// password
			// 
			this->password->HeaderText = L"Contraseña";
			this->password->Name = L"password";
			this->password->Width = 80;
			// 
			// HoraEntrada
			// 
			this->HoraEntrada->HeaderText = L"Hora Entrada";
			this->HoraEntrada->Name = L"HoraEntrada";
			this->HoraEntrada->Width = 60;
			// 
			// Horasalida
			// 
			this->Horasalida->HeaderText = L"Hora Salida";
			this->Horasalida->Name = L"Horasalida";
			this->Horasalida->Width = 60;
			// 
			// puesto
			// 
			this->puesto->HeaderText = L"Puesto";
			this->puesto->Name = L"puesto";
			this->puesto->Width = 80;
			// 
			// btnStaffAdd
			// 
			this->btnStaffAdd->Location = System::Drawing::Point(201, 222);
			this->btnStaffAdd->Name = L"btnStaffAdd";
			this->btnStaffAdd->Size = System::Drawing::Size(75, 23);
			this->btnStaffAdd->TabIndex = 9;
			this->btnStaffAdd->Text = L"Agregar";
			this->btnStaffAdd->UseVisualStyleBackColor = true;
			this->btnStaffAdd->Click += gcnew System::EventHandler(this, &StaffForm::button1_Click);
			// 
			// btnStaffUpdate
			// 
			this->btnStaffUpdate->Location = System::Drawing::Point(337, 222);
			this->btnStaffUpdate->Name = L"btnStaffUpdate";
			this->btnStaffUpdate->Size = System::Drawing::Size(75, 23);
			this->btnStaffUpdate->TabIndex = 10;
			this->btnStaffUpdate->Text = L"Actualizar";
			this->btnStaffUpdate->UseVisualStyleBackColor = true;
			this->btnStaffUpdate->Click += gcnew System::EventHandler(this, &StaffForm::button2_Click);
			// 
			// btnStaffDelete
			// 
			this->btnStaffDelete->Location = System::Drawing::Point(476, 222);
			this->btnStaffDelete->Name = L"btnStaffDelete";
			this->btnStaffDelete->Size = System::Drawing::Size(75, 23);
			this->btnStaffDelete->TabIndex = 11;
			this->btnStaffDelete->Text = L"Eliminar";
			this->btnStaffDelete->UseVisualStyleBackColor = true;
			this->btnStaffDelete->Click += gcnew System::EventHandler(this, &StaffForm::button3_Click);
			// 
			// btnStaffQuery
			// 
			this->btnStaffQuery->Location = System::Drawing::Point(683, 222);
			this->btnStaffQuery->Name = L"btnStaffQuery";
			this->btnStaffQuery->Size = System::Drawing::Size(75, 23);
			this->btnStaffQuery->TabIndex = 12;
			this->btnStaffQuery->Text = L"Buscar";
			this->btnStaffQuery->UseVisualStyleBackColor = true;
			this->btnStaffQuery->Click += gcnew System::EventHandler(this, &StaffForm::button4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(57, 171);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"sexo";
			// 
			// rbtnMasculino
			// 
			this->rbtnMasculino->AutoSize = true;
			this->rbtnMasculino->Location = System::Drawing::Point(158, 172);
			this->rbtnMasculino->Name = L"rbtnMasculino";
			this->rbtnMasculino->Size = System::Drawing::Size(73, 17);
			this->rbtnMasculino->TabIndex = 14;
			this->rbtnMasculino->TabStop = true;
			this->rbtnMasculino->Text = L"Masculino";
			this->rbtnMasculino->UseVisualStyleBackColor = true;
			// 
			// rbtnFemenino
			// 
			this->rbtnFemenino->AutoSize = true;
			this->rbtnFemenino->Location = System::Drawing::Point(246, 172);
			this->rbtnFemenino->Name = L"rbtnFemenino";
			this->rbtnFemenino->Size = System::Drawing::Size(71, 17);
			this->rbtnFemenino->TabIndex = 15;
			this->rbtnFemenino->TabStop = true;
			this->rbtnFemenino->Text = L"Femenino";
			this->rbtnFemenino->UseVisualStyleBackColor = true;
			this->rbtnFemenino->CheckedChanged += gcnew System::EventHandler(this, &StaffForm::radioButton2_CheckedChanged);
			// 
			// txtStaffPassword
			// 
			this->txtStaffPassword->Location = System::Drawing::Point(503, 57);
			this->txtStaffPassword->Name = L"txtStaffPassword";
			this->txtStaffPassword->Size = System::Drawing::Size(100, 20);
			this->txtStaffPassword->TabIndex = 19;
			this->txtStaffPassword->UseSystemPasswordChar = true;
			// 
			// txtStaffUsername
			// 
			this->txtStaffUsername->Location = System::Drawing::Point(503, 20);
			this->txtStaffUsername->Name = L"txtStaffUsername";
			this->txtStaffUsername->Size = System::Drawing::Size(100, 20);
			this->txtStaffUsername->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(372, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Contraseña";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(372, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(98, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Nombre de Usuario";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(372, 129);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(77, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Hora de Salida";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(372, 92);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(85, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Hora de Entrada";
			// 
			// combStaffPuesto
			// 
			this->combStaffPuesto->FormattingEnabled = true;
			this->combStaffPuesto->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Cajero", L"Fotocopiador", L"Administrador",
					L"Gerente"
			});
			this->combStaffPuesto->Location = System::Drawing::Point(503, 163);
			this->combStaffPuesto->Name = L"combStaffPuesto";
			this->combStaffPuesto->Size = System::Drawing::Size(121, 21);
			this->combStaffPuesto->TabIndex = 24;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(372, 171);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 13);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Puesto";
			// 
			// dTPHoraEntrada
			// 
			this->dTPHoraEntrada->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dTPHoraEntrada->Location = System::Drawing::Point(503, 92);
			this->dTPHoraEntrada->MaxDate = System::DateTime(2017, 11, 16, 0, 0, 0, 0);
			this->dTPHoraEntrada->MinDate = System::DateTime(2015, 5, 28, 0, 0, 0, 0);
			this->dTPHoraEntrada->Name = L"dTPHoraEntrada";
			this->dTPHoraEntrada->ShowUpDown = true;
			this->dTPHoraEntrada->Size = System::Drawing::Size(100, 20);
			this->dTPHoraEntrada->TabIndex = 26;
			this->dTPHoraEntrada->Value = System::DateTime(2015, 6, 23, 18, 58, 56, 0);
			// 
			// dTPHoraSalida
			// 
			this->dTPHoraSalida->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dTPHoraSalida->Location = System::Drawing::Point(503, 126);
			this->dTPHoraSalida->Name = L"dTPHoraSalida";
			this->dTPHoraSalida->ShowUpDown = true;
			this->dTPHoraSalida->Size = System::Drawing::Size(100, 20);
			this->dTPHoraSalida->TabIndex = 27;
			// 
			// lblPrueba
			// 
			this->lblPrueba->AutoSize = true;
			this->lblPrueba->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblPrueba->Location = System::Drawing::Point(662, 98);
			this->lblPrueba->Name = L"lblPrueba";
			this->lblPrueba->Size = System::Drawing::Size(2, 15);
			this->lblPrueba->TabIndex = 28;
			// 
			// lblPrueba2
			// 
			this->lblPrueba2->AutoSize = true;
			this->lblPrueba2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblPrueba2->Location = System::Drawing::Point(662, 131);
			this->lblPrueba2->Name = L"lblPrueba2";
			this->lblPrueba2->Size = System::Drawing::Size(2, 15);
			this->lblPrueba2->TabIndex = 29;
			// 
			// StaffForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(798, 501);
			this->Controls->Add(this->lblPrueba2);
			this->Controls->Add(this->lblPrueba);
			this->Controls->Add(this->dTPHoraSalida);
			this->Controls->Add(this->dTPHoraEntrada);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->combStaffPuesto);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtStaffPassword);
			this->Controls->Add(this->txtStaffUsername);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->rbtnFemenino);
			this->Controls->Add(this->rbtnMasculino);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnStaffQuery);
			this->Controls->Add(this->btnStaffDelete);
			this->Controls->Add(this->btnStaffUpdate);
			this->Controls->Add(this->btnStaffAdd);
			this->Controls->Add(this->dgvStaff);
			this->Controls->Add(this->txtStaffApellidoMat);
			this->Controls->Add(this->txtStaffApellidoPat);
			this->Controls->Add(this->txtStaffDni);
			this->Controls->Add(this->txtStaffName);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"StaffForm";
			this->Text = L"StaffForm";
			this->Load += gcnew System::EventHandler(this, &StaffForm::StaffForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStaff))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void RefreshDGVStaff(){
			List<Staff^>^ listStaff = StansaManager::QueryAllStaff(); //Asumo Cualquier Modulo
			dgvStaff->Rows->Clear(); //Limpio la Grilla

			for (int i = 0; i < listStaff->Count; i++){
				dgvStaff->Rows->Add(gcnew array<String^>{
					"" + listStaff[i]->id,
						listStaff[i]->dni,
						listStaff[i]->name,
						listStaff[i]->apellido_Paterno,
						listStaff[i]->apellido_Materno,
						Convert::ToString(listStaff[i]->sexo),
						listStaff[i]->username,
						listStaff[i]->password,
						listStaff[i]->hora_entrada->ToString("hh:mm:ss"),
						listStaff[i]->hora_salida->ToString("hh:mm:ss"),
						listStaff[i]->puesto});
			} //Fin del For
		}//Fin del Metodo RefreshDGVStaff

public:  int idStaff;
		 static ModuloStansa^ moduloStansaLocal = gcnew ModuloStansa();
		 int idModuloStansa;

 private: System::Void dgvStaff_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e);

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { //Boton Add
		String^ dni = txtStaffDni->Text;
		String^ name = txtStaffName->Text;
		String^ apellido_Paterno = txtStaffApellidoPat->Text;
		String^ apellido_Materno = txtStaffApellidoMat->Text;
		char sexo;
		if (rbtnMasculino->Checked) sexo = 'M';
		if (rbtnFemenino->Checked) sexo = 'F';
		String^ username = txtStaffUsername->Text;
		String^ password = txtStaffPassword->Text;
		DateTime^ horaEntrada = dTPHoraEntrada->Value;
		DateTime^ horaSalida = dTPHoraSalida->Value;
		String^ puesto = combStaffPuesto->Text;

		lblPrueba->Text = horaEntrada->ToString("hh:mm:ss");
		lblPrueba2->Text = puesto;

		Staff^ s = gcnew Staff();
		s->dni = dni;
		s->name = name;
		s->apellido_Paterno = apellido_Paterno;
		s->apellido_Materno = apellido_Materno;
		s->sexo = sexo;
		s->username = username;
		s->password = password;
		s->hora_entrada = horaEntrada;
		s->hora_salida = horaSalida;
		s->puesto = puesto;
		StansaManager::AddStaff(s); //Asumo Cualquier Identificador de Modulo de Stansa
		RefreshDGVStaff();
	}
	
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { //Boton Update
	String^ dni = txtStaffDni->Text;
	String^ name = txtStaffName->Text;
	String^ apellido_Paterno = txtStaffApellidoPat->Text;
	String^ apellido_Materno = txtStaffApellidoMat->Text;
	char sexo;
	if (rbtnMasculino->Checked) sexo = 'M';
	if (rbtnFemenino->Checked) sexo = 'F';
	String^ username = txtStaffUsername->Text;
	String^ password = txtStaffPassword->Text;
	DateTime^ horaEntrada = dTPHoraEntrada->Value;
	DateTime^ horaSalida = dTPHoraSalida->Value;
	String^ puesto = combStaffPuesto->Text;

	Staff ^ s = StansaManager::QueryStaffById(idStaff);
	s->dni = dni;
	s->name = name;
	s->apellido_Paterno = apellido_Paterno;
	s->apellido_Materno = apellido_Materno;
	s->sexo = sexo;
	s->username = username;
	s->password = password;
	s->hora_entrada = horaEntrada;
	s->hora_salida = horaSalida;
	s->puesto = puesto;
	StansaManager::UpdateStaff(s);
	RefreshDGVStaff();
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) { //Boton Delete
	StansaManager::DeleteStaff(idStaff);
	RefreshDGVStaff();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {


}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void StaffForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
