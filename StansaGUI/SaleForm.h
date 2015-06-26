#pragma once
#include "ProductSearchForm.h"

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




















	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  cmbStaff;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  cmbCostumer;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  btndelete;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txttotal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  unitprice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  subtotal;

















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
			this->unitprice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->subtotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnSale = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cmbStaff = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cmbCostumer = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btndelete = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txttotal = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVenta))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvVenta
			// 
			this->dgvVenta->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvVenta->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->id, this->name,
					this->unitprice, this->Quantity, this->subtotal
			});
			this->dgvVenta->Location = System::Drawing::Point(43, 185);
			this->dgvVenta->Name = L"dgvVenta";
			this->dgvVenta->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvVenta->Size = System::Drawing::Size(493, 98);
			this->dgvVenta->TabIndex = 24;
			this->dgvVenta->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SaleForm::dgvVenta_CellContentClick);
			this->dgvVenta->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SaleForm::dgvVenta_CellValueChanged);
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
			// unitprice
			// 
			this->unitprice->HeaderText = L"P.U.";
			this->unitprice->Name = L"unitprice";
			// 
			// Quantity
			// 
			this->Quantity->HeaderText = L"Cantidad";
			this->Quantity->Name = L"Quantity";
			this->Quantity->Width = 50;
			// 
			// subtotal
			// 
			this->subtotal->HeaderText = L"Sub Total";
			this->subtotal->Name = L"subtotal";
			// 
			// btnSale
			// 
			this->btnSale->Location = System::Drawing::Point(43, 306);
			this->btnSale->Name = L"btnSale";
			this->btnSale->Size = System::Drawing::Size(180, 23);
			this->btnSale->TabIndex = 23;
			this->btnSale->Text = L"Realizar Venta";
			this->btnSale->UseVisualStyleBackColor = true;
			this->btnSale->Click += gcnew System::EventHandler(this, &SaleForm::btnSale_Click);
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
			// cmbStaff
			// 
			this->cmbStaff->FormattingEnabled = true;
			this->cmbStaff->Location = System::Drawing::Point(128, 55);
			this->cmbStaff->Name = L"cmbStaff";
			this->cmbStaff->Size = System::Drawing::Size(200, 21);
			this->cmbStaff->TabIndex = 38;
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
			// cmbCostumer
			// 
			this->cmbCostumer->FormattingEnabled = true;
			this->cmbCostumer->Location = System::Drawing::Point(128, 98);
			this->cmbCostumer->Name = L"cmbCostumer";
			this->cmbCostumer->Size = System::Drawing::Size(200, 21);
			this->cmbCostumer->TabIndex = 40;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(83, 139);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 23);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Agregar producto";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SaleForm::button1_Click);
			// 
			// btndelete
			// 
			this->btndelete->Location = System::Drawing::Point(380, 139);
			this->btndelete->Name = L"btndelete";
			this->btndelete->Size = System::Drawing::Size(129, 23);
			this->btndelete->TabIndex = 42;
			this->btndelete->Text = L"Eliminar producto";
			this->btndelete->UseVisualStyleBackColor = true;
			this->btndelete->Click += gcnew System::EventHandler(this, &SaleForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(345, 306);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 43;
			this->label2->Text = L"Monto total";
			// 
			// txttotal
			// 
			this->txttotal->Location = System::Drawing::Point(436, 303);
			this->txttotal->Name = L"txttotal";
			this->txttotal->Size = System::Drawing::Size(100, 20);
			this->txttotal->TabIndex = 44;
			// 
			// SaleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(554, 355);
			this->Controls->Add(this->txttotal);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btndelete);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cmbCostumer);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cmbStaff);
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

public: void RefreshDGVProducts(){
			List<Product^>^ productList =  StansaManager::QueryAllProduct();
			//lstProducts->Items->Clear();
			dgvVenta->Rows->Clear();
			for (int i = 0; i < productList->Count; i++){
				dgvVenta->Rows->Add(gcnew array<String^>{
					"" + productList[i]->id,
						productList[i]->name,
						"" + productList[i]->stock,
						"" + productList[i]->price});
			}
}
		
		public: System::Void AddProductToDetails(Product ^p){
			dgvVenta->Rows->Add(gcnew array<String^>{"" + p->id,
				p->name,
				"" + p->price,
				"1",
				"" + p->price});
			double total = 0;
			for (int i = 0; i < dgvVenta->RowCount - 1; i++)
				total += Double::Parse(dgvVenta->Rows[i]->Cells[4]->Value->ToString());
			txttotal->Text = "" + total;
		}



	private: System::Void SaleForm_Load(System::Object^  sender, System::EventArgs^  e) {
		cmbCostumer->Items->Clear();
		
			List <Customer^> ^customerList = StansaManager::QueryAllCustomer();
			for (int i = 0; i < customerList->Count; i++){
				cmbCostumer->Items->Add(customerList[i]->id + " - " +
					customerList[i]->name + " " +
					customerList[i]->apellido_Paterno);
			}
		
		
			List <Staff^> ^StaffList = StansaManager::QueryAllStaff();
			for (int i = 0; i < StaffList->Count; i++){
				 cmbStaff->Items->Add(StaffList[i]->id + " - " +
					 StaffList[i]->name + " " + 
					 StaffList[i]->apellido_Paterno);
			}
		}	 

private: System::Void dgvVenta_CellValueChanged(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

	if (dgvVenta->Columns[e->ColumnIndex]->Name == "Quantity"){
		if (dgvVenta->CurrentCell != nullptr &&
			dgvVenta->CurrentCell->Value != nullptr &&
			dgvVenta->CurrentCell->Value->ToString() != ""){
			dgvVenta->Rows[e->RowIndex]->Cells[4]->Value =
				Int32::Parse(dgvVenta->CurrentCell->Value->ToString()) *
				Double::Parse(dgvVenta->Rows[e->RowIndex]->Cells[2]->Value->ToString());
			double total = 0;
			for (int i = 0; i < dgvVenta->RowCount - 1; i++)
				total += Double::Parse(dgvVenta->Rows[i]->Cells[4]->Value->ToString());
			txttotal->Text = "" + total;
		}
	}

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	ProductSearchForm ^psForm = gcnew ProductSearchForm(this);
	psForm->ShowDialog();
	
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (dgvVenta->CurrentCell != nullptr &&
		dgvVenta->CurrentCell->Value != nullptr &&
		dgvVenta->CurrentCell->Value->ToString() != "") {

		Int32 rowToDelete = dgvVenta->Rows->GetFirstRow(
			DataGridViewElementStates::Selected);
		if (rowToDelete > -1)
		{
			this->dgvVenta->Rows->RemoveAt(rowToDelete);
		}
				
	}
}
		

public: System::Void dgvVenta_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	
}
private: System::Void btnSale_Click(System::Object^  sender, System::EventArgs^  e) {

			 if ((cmbCostumer->Text == "") && (cmbStaff->Text == ""))
			 {
				 MessageBox::Show("Por favor, seleccione el cliente en atención y al personal atendiendo");
				 return;
			 }			 
			 
			 if (cmbCostumer->Text == "") 
			 {
				 MessageBox::Show("Por favor, seleccione el cliente en atención");
				 return; }

			 if (cmbStaff->Text == "")
			 {	 MessageBox::Show("Por favor, seleccione al personal atendiendo");
				 return; }
			 
	 DateTime fecha = DateTime::Now;
	//txtTotal->Text = fecha.ToString("yyyy/MM/dd");
	Staff ^salesman = gcnew Staff();
	int idsale = 1;
	salesman->id = idsale;
	int whitePos = cmbCostumer->Items[cmbCostumer->SelectedIndex]->ToString()->IndexOf(" -");
	int customerId = Int32::Parse(cmbCostumer->Items[cmbCostumer->SelectedIndex]
		->ToString()->Substring(0, whitePos));
	Customer^ cust = gcnew Customer(); //SalesManager::QueryCustomerById(customerId);
	cust->id = customerId; // Esto no debería

	Sale ^sale = gcnew Sale();
		
	sale->date = fecha;
	sale->staff->id = idsale;
	sale->customer = cust;
	sale->attention->fecha = fecha;
	sale->status = 'P';
	sale->total = Double::Parse(txttotal->Text);
	sale->details = gcnew List<Saledetail^>();
	for (int i = 0; i < dgvVenta->Rows->Count - 1; i++){
		Saledetail ^detail = gcnew Saledetail();
		detail->product = StansaManager::QueryProductById(
			Int32::Parse(dgvVenta->Rows[i]->Cells[0]->Value->ToString()));
		detail->quantity = Int32::Parse(dgvVenta->Rows[i]->Cells[3]->Value->ToString());
		detail->subTotal = Double::Parse(dgvVenta->Rows[i]->Cells[4]->Value->ToString());
		sale->details->Add(detail);
	}
	StansaManager::RegisterSaveSale(sale);


}
};
}
