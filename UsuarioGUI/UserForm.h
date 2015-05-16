#pragma once

namespace UsuarioGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace FotoLibrary;

	/// <summary>
	/// Summary for UserForm
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		UserForm(void)
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
		~UserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnBuildUser;
	private: System::Windows::Forms::Label^  lblHora;
	protected:

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
			this->btnBuildUser = (gcnew System::Windows::Forms::Button());
			this->lblHora = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnBuildUser
			// 
			this->btnBuildUser->Location = System::Drawing::Point(104, 39);
			this->btnBuildUser->Name = L"btnBuildUser";
			this->btnBuildUser->Size = System::Drawing::Size(75, 23);
			this->btnBuildUser->TabIndex = 0;
			this->btnBuildUser->Text = L"Preionar";
			this->btnBuildUser->UseVisualStyleBackColor = true;
			this->btnBuildUser->Click += gcnew System::EventHandler(this, &UserForm::btnBuildUser_Click);
			// 
			// lblHora
			// 
			this->lblHora->AutoSize = true;
			this->lblHora->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblHora->Location = System::Drawing::Point(104, 123);
			this->lblHora->Name = L"lblHora";
			this->lblHora->Size = System::Drawing::Size(2, 15);
			this->lblHora->TabIndex = 1;
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->lblHora);
			this->Controls->Add(this->btnBuildUser);
			this->Name = L"UserForm";
			this->Text = L"UserForm";
			this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnBuildUser_Click(System::Object^  sender, System::EventArgs^  e) {

		Customer^ User = gcnew Customer(); //Creo un objeto Usuario
		DateTime^ d1 = DateTime::Now; //Creo un objeto DateTime con la hora actual
		User->hora_ini = d1;
		User->estado = "Esperando";
		lblHora->Text = "" + User->hora_ini;
	} //Fin metodo Boton
	private: System::Void UserForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	}; // Fin de la clase UserForm
} // Fin namespace UsuarioGUI
