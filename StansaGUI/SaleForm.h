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
	using namespace BossStansaController;
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
	private: System::Windows::Forms::Button^  btnQueryNorden;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^  txtOrdenCustomer;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridView^  dgvVenta;






	private: System::Windows::Forms::Button^  btnSale;
	private: System::Windows::Forms::Button^  btnProductQuery;
	private: System::Windows::Forms::TextBox^  txtCantidad;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtProduc;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  totalPrice1Row;
	private: System::Windows::Forms::Label^  lblCustomer;

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
			this->btnQueryNorden = (gcnew System::Windows::Forms::Button());
			this->txtOrdenCustomer = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dgvVenta = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->totalPrice1Row = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnSale = (gcnew System::Windows::Forms::Button());
			this->btnProductQuery = (gcnew System::Windows::Forms::Button());
			this->txtCantidad = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtProduc = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblCustomer = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVenta))->BeginInit();
			this->SuspendLayout();
			// 
			// btnQueryNorden
			// 
			this->btnQueryNorden->Location = System::Drawing::Point(214, 13);
			this->btnQueryNorden->Name = L"btnQueryNorden";
			this->btnQueryNorden->Size = System::Drawing::Size(75, 23);
			this->btnQueryNorden->TabIndex = 27;
			this->btnQueryNorden->Text = L"Buscar";
			this->btnQueryNorden->UseVisualStyleBackColor = true;
			this->btnQueryNorden->Click += gcnew System::EventHandler(this, &SaleForm::btnQueryNorden_Click);
			// 
			// txtOrdenCustomer
			// 
			this->txtOrdenCustomer->Location = System::Drawing::Point(155, 15);
			this->txtOrdenCustomer->Name = L"txtOrdenCustomer";
			this->txtOrdenCustomer->Size = System::Drawing::Size(40, 20);
			this->txtOrdenCustomer->TabIndex = 26;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 13);
			this->label3->TabIndex = 25;
			this->label3->Text = L"No orden de Customer";
			// 
			// dgvVenta
			// 
			this->dgvVenta->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvVenta->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->id, this->name,
					this->price, this->Cantidad, this->totalPrice1Row
			});
			this->dgvVenta->Location = System::Drawing::Point(67, 173);
			this->dgvVenta->Name = L"dgvVenta";
			this->dgvVenta->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvVenta->Size = System::Drawing::Size(444, 201);
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
			// btnSale
			// 
			this->btnSale->Location = System::Drawing::Point(436, 144);
			this->btnSale->Name = L"btnSale";
			this->btnSale->Size = System::Drawing::Size(75, 23);
			this->btnSale->TabIndex = 23;
			this->btnSale->Text = L"Venta";
			this->btnSale->UseVisualStyleBackColor = true;
			this->btnSale->Click += gcnew System::EventHandler(this, &SaleForm::btnSale_Click);
			// 
			// btnProductQuery
			// 
			this->btnProductQuery->Location = System::Drawing::Point(307, 88);
			this->btnProductQuery->Name = L"btnProductQuery";
			this->btnProductQuery->Size = System::Drawing::Size(75, 23);
			this->btnProductQuery->TabIndex = 22;
			this->btnProductQuery->Text = L"Agregar";
			this->btnProductQuery->UseVisualStyleBackColor = true;
			this->btnProductQuery->Click += gcnew System::EventHandler(this, &SaleForm::btnProductQuery_Click);
			// 
			// txtCantidad
			// 
			this->txtCantidad->Location = System::Drawing::Point(168, 133);
			this->txtCantidad->Name = L"txtCantidad";
			this->txtCantidad->Size = System::Drawing::Size(100, 20);
			this->txtCantidad->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(66, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Cantidad";
			// 
			// txtProduc
			// 
			this->txtProduc->Location = System::Drawing::Point(169, 92);
			this->txtProduc->Name = L"txtProduc";
			this->txtProduc->Size = System::Drawing::Size(100, 20);
			this->txtProduc->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(52, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Codig del Producto";
			// 
			// lblCustomer
			// 
			this->lblCustomer->AutoSize = true;
			this->lblCustomer->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblCustomer->Location = System::Drawing::Point(412, 22);
			this->lblCustomer->Name = L"lblCustomer";
			this->lblCustomer->Size = System::Drawing::Size(2, 15);
			this->lblCustomer->TabIndex = 28;
			// 
			// SaleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(635, 386);
			this->Controls->Add(this->lblCustomer);
			this->Controls->Add(this->btnQueryNorden);
			this->Controls->Add(this->txtOrdenCustomer);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dgvVenta);
			this->Controls->Add(this->btnSale);
			this->Controls->Add(this->btnProductQuery);
			this->Controls->Add(this->txtCantidad);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtProduc);
			this->Controls->Add(this->label1);
			this->Name = L"SaleForm";
			this->Text = L"SaleForm";
			this->Load += gcnew System::EventHandler(this, &SaleForm::SaleForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVenta))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SaleForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	public:  void Add1Row(Product^ p){
		String^ cantidad = txtCantidad->Text;
		double subtotal = p->price*Double::Parse(cantidad);
		dgvVenta->Rows->Add(gcnew array < String^ > {
			"" + p->id,
				p->name,
				"" + p->price,
				cantidad,
				"" + subtotal});
	}
	private: System::Void btnProductQuery_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ codigo = txtProduc->Text;
		
		ModStansaController^ Mod1 = gcnew ModStansaController();
		Product^ p = gcnew Product();
		p = Mod1->QueryProductById(Int32::Parse(codigo));
		Add1Row(p);
	}
//dustin se la come enterita3edsfdr
			 //sdcdecsdcscsdcs
			 //calla mierda
private: System::Void btnSale_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnQueryNorden_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ norden = txtOrdenCustomer->Text;
	ModStansaController^ Mod1 = gcnew ModStansaController();
	Customer^ u = gcnew Customer();
	u = Mod1->QueryCustomerByN_orden(Int32::Parse(norden));
	lblCustomer->Text = u->name;
}
};
}
