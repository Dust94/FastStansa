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
	using namespace StansaController;

	/// <summary>
	/// Summary for Lector_PruebaForm
	/// </summary>
	public ref class Lector_PruebaForm : public System::Windows::Forms::Form
	{
	public:
		Lector_PruebaForm(void)
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
		~Lector_PruebaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblHora;
	protected:
	private: System::Windows::Forms::Button^  btnBuildUser;

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
			this->lblHora = (gcnew System::Windows::Forms::Label());
			this->btnBuildUser = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblHora
			// 
			this->lblHora->AutoSize = true;
			this->lblHora->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblHora->Location = System::Drawing::Point(103, 138);
			this->lblHora->Name = L"lblHora";
			this->lblHora->Size = System::Drawing::Size(2, 15);
			this->lblHora->TabIndex = 3;
			// 
			// btnBuildUser
			// 
			this->btnBuildUser->Location = System::Drawing::Point(103, 54);
			this->btnBuildUser->Name = L"btnBuildUser";
			this->btnBuildUser->Size = System::Drawing::Size(75, 23);
			this->btnBuildUser->TabIndex = 2;
			this->btnBuildUser->Text = L"Preionar";
			this->btnBuildUser->UseVisualStyleBackColor = true;
			this->btnBuildUser->Click += gcnew System::EventHandler(this, &Lector_PruebaForm::btnBuildUser_Click);
			// 
			// Lector_PruebaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->lblHora);
			this->Controls->Add(this->btnBuildUser);
			this->Name = L"Lector_PruebaForm";
			this->Text = L"Lector_PruebaForm";
			this->Load += gcnew System::EventHandler(this, &Lector_PruebaForm::Lector_PruebaForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnBuildUser_Click(System::Object^  sender, System::EventArgs^  e) {
		Attention^ atencion = gcnew Attention(); //Creo un objeto Atencion
		ModuloStansa^ modStansa = StansaManager::QueryModuloStansaById(1); //Busco a cual Modulo de Stansa Pertenece
		Customer^ usuario = StansaManager::QueryCustomerById(1); //Busco el usuario que voy a atender
		DateTime^ fechaDateTime = DateTime::Now; //Creo un objeto DateTime con la hora actual
		atencion->fecha = fechaDateTime->ToString("yyyy-MM-dd");
		atencion->hora_ini = fechaDateTime->ToString("HH:mm tt");
		atencion->hora_fin = fechaDateTime->ToString("HH:mm tt");
		atencion->estado = "Esperando";
		atencion->customer->id = usuario->id;
		atencion->moduloStansa->id = modStansa->id;
		StansaManager::AddAttention(atencion);
	}
	private: System::Void Lector_PruebaForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
