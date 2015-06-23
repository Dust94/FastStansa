#pragma once
//#include "ProductDB.h"

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
	/// Summary for SaleForm
	/// </summary>
	public ref class SaleForm : public System::Windows::Forms::Form
	{
	public:
		SaleForm(void)
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
		~SaleForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:


	private: System::Windows::Forms::DataGridView^  dgvVenta;






	private: System::Windows::Forms::Button^  btnSale;





	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  totalPrice1Row;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Total;









	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;






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
			this->dgvVenta = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->totalPrice1Row = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnSale = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVenta))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvVenta
			// 
			this->dgvVenta->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvVenta->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->id, this->name,
					this->price, this->Cantidad, this->totalPrice1Row, this->Total
			});
			this->dgvVenta->Location = System::Drawing::Point(43, 185);
			this->dgvVenta->Name = L"dgvVenta";
			this->dgvVenta->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvVenta->Size = System::Drawing::Size(547, 98);
			this->dgvVenta->TabIndex = 24;
			// 
			// id
			// 
			this->id->HeaderText = L"Código";
			this->id->Name = L"id";
			this->id->Width = 50;
			// 
			// name
			// 
			this->name->HeaderText = L"Nombre";
			this->name->Name = L"name";
			this->name->Width = 150;
			// 
			// price
			// 
			this->price->HeaderText = L"Precio";
			this->price->Name = L"price";
			this->price->Width = 50;
			// 
			// Cantidad
			// 
			this->Cantidad->HeaderText = L"Cantidad";
			this->Cantidad->Name = L"Cantidad";
			this->Cantidad->Width = 50;
			// 
			// totalPrice1Row
			// 
			this->totalPrice1Row->HeaderText = L"SubTotal";
			this->totalPrice1Row->Name = L"totalPrice1Row";
			// 
			// Total
			// 
			this->Total->HeaderText = L"Total";
			this->Total->Name = L"Total";
			// 
			// btnSale
			// 
			this->btnSale->Location = System::Drawing::Point(43, 306);
			this->btnSale->Name = L"btnSale";
			this->btnSale->Size = System::Drawing::Size(180, 23);
			this->btnSale->TabIndex = 23;
			this->btnSale->Text = L"Realizar Venta";
			this->btnSale->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(40, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 35;
			this->label4->Text = L"Fecha";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(128, 18);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 36;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 13);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Atendido por";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(128, 55);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(200, 21);
			this->comboBox1->TabIndex = 38;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(40, 98);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 39;
			this->label5->Text = L"Cliente";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(128, 98);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(200, 21);
			this->comboBox2->TabIndex = 40;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(83, 139);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 23);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Agregar producto";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(380, 139);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 23);
			this->button2->TabIndex = 42;
			this->button2->Text = L"Eliminar producto";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(412, 312);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 43;
			this->label2->Text = L"Monto total";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(478, 309);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 44;
			// 
			// SaleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(620, 355);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dgvVenta);
			this->Controls->Add(this->btnSale);
			this->Name = L"SaleForm";
			this->Text = L"Formulario de venta";
			this->Load += gcnew System::EventHandler(this, &SaleForm::SaleForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVenta))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: void RefreshDGVProducts(){
			List<FotoLibrary::Product^>^ productList =  ModStansaController::QueryAllProduct();
			//lstProducts->Items->Clear();
			ProductDGV->Rows->Clear();
			for (int i = 0; i < productList->Count; i++){
				ProductDGV->Rows->Add(gcnew array<String^>{
					"" + productList[i]->id,
						productList[i]->name,
						"" + productList[i]->stock,
						"" + productList[i]->price});
			}
}
		
		/* public: void RefreshDGVVenta(){
					List< FotoLibrary::Product^ >^ productList = ModStansaController::QueryAllProduct();
					//lstProducts->Items->Clear();
					ProductDGV->Rows->Clear();
					for (int i = 0; i < productList->Count; i++){
				ProductDGV->Rows->Add(gcnew array<String^>{
					"" + productList[i]->id,
						productList[i]->name,
						"" + productList[i]->stock,
						"" + productList[i]->price});
					}
		}*/


//dustin gay
	private: System::Void SaleForm_Load(System::Object^  sender, System::EventArgs^  e) {
	
	
	
	
	
	}
				 
private: System::Void btnQueryNorden_Click(System::Object^  sender, System::EventArgs^  e) {

			 String^ orden = txtOrdenCustomer->Text;
			 int intorden = Int32::Parse(orden);
			 Customer^ costumer = ModStansaController::QueryCustomerByN_orden(intorden);
			 

}
};
}
