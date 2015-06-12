#pragma once

namespace StansaGUI {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace FotoLibrary;
	using namespace BossStansaController;
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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::DataGridView^  dgvStaff;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Estado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  User;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  HoraInicio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Horasalida;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;



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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dgvStaff = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->User = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HoraInicio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Horasalida = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStaff))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"DNI";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(54, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Estado";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(54, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"User";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(188, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(188, 63);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(188, 115);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(188, 157);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			// 
			// dgvStaff
			// 
			this->dgvStaff->AccessibleName = L"dgvStaff";
			this->dgvStaff->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStaff->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Id, this->Nombre,
					this->DNI, this->Estado, this->User, this->HoraInicio, this->Horasalida
			});
			this->dgvStaff->Location = System::Drawing::Point(46, 270);
			this->dgvStaff->Name = L"dgvStaff";
			this->dgvStaff->Size = System::Drawing::Size(740, 150);
			this->dgvStaff->TabIndex = 8;
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			// 
			// DNI
			// 
			this->DNI->HeaderText = L"DNI";
			this->DNI->Name = L"DNI";
			// 
			// Estado
			// 
			this->Estado->HeaderText = L"Estado";
			this->Estado->Name = L"Estado";
			// 
			// User
			// 
			this->User->HeaderText = L"User";
			this->User->Name = L"User";
			// 
			// HoraInicio
			// 
			this->HoraInicio->HeaderText = L"Hora Inicio";
			this->HoraInicio->Name = L"HoraInicio";
			// 
			// Horasalida
			// 
			this->Horasalida->HeaderText = L"Hora salida";
			this->Horasalida->Name = L"Horasalida";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(518, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StaffForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(518, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &StaffForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(518, 157);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &StaffForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(376, 222);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// StaffForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(811, 432);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dgvStaff);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"StaffForm";
			this->Text = L"StaffForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStaff))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		void RefreshDGVStaff(){
			List<Staff^>^ staffList = ModStansaController::QueryAllStaff();
			//lstProducts->Items->Clear();
			dgvStaff->Rows->Clear();
			for (int i = 0; i < staffList->Count; i++){
				dgvStaff->Rows->Add(gcnew array<String^>{
					"" + staffList[i]->id,
						staffList[i]->name,
						"" + staffList[i]->name,
						"" + staffList[i]->dni,
						"" + staffList[i]->estado,
						"" + staffList[i]->user});
			}
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ name = textBox1->Text;
				 String^ dni=textBox2->Text;
				 String^ estado = textBox3->Text;
				 String^ user = textBox4->Text;


				 Staff^ p = gcnew Staff();
				 p->name = name;
				 p->dni = dni;
				 p->estado = estado;
				 p->user = user;
				 
				 
				 ModStansaController::AddStaff(p);
				 RefreshDGVStaff();
	}
	
	
	
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ name = textBox1->Text;
			 String^ dni = textBox2->Text;
			 String^ estado = textBox3->Text;
			 String^ user = textBox4->Text;
		

			 Staff^ p = gcnew Staff();
			 p->name=name;
			 p->dni=dni;
			 p->estado=estado;
			 p->user=user;

			ModStansaController::UpdateStaff(p);
			 RefreshDGVStaff();


}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (dgvStaff->CurrentCell != nullptr &&
				 dgvStaff->CurrentCell->Value != nullptr &&
				 dgvStaff->CurrentCell->Value->ToString() != "") {
				 String^ idStaff = dgvStaff->SelectedRows[0]->
					 Cells[1]->Value->ToString();

				 ModStansaController::DeleteStaff(Int32::Parse(idStaff));
				 RefreshDGVStaff();
			 }



}
};
}
