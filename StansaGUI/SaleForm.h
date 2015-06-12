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

	protected:

	protected:


	private: System::Windows::Forms::DataGridView^  dgvVenta;






	private: System::Windows::Forms::Button^  btnSale;

	private: System::Windows::Forms::TextBox^  txtCantidad;
	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  totalPrice1Row;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Total;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  IdProduct;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Product;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Stock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  UnitPrice;
	private: System::Windows::Forms::Button^  btnQueryNorden;
	private: System::Windows::Forms::TextBox^  txtOrdenCustomer;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;




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
			this->btnSale = (gcnew System::Windows::Forms::Button());
			this->txtCantidad = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->IdProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Product = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UnitPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnQueryNorden = (gcnew System::Windows::Forms::Button());
			this->txtOrdenCustomer = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVenta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvVenta
			// 
			this->dgvVenta->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvVenta->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->id, this->name,
					this->price, this->Cantidad, this->totalPrice1Row, this->Total
			});
			this->dgvVenta->Location = System::Drawing::Point(43, 253);
			this->dgvVenta->Name = L"dgvVenta";
			this->dgvVenta->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvVenta->Size = System::Drawing::Size(547, 98);
			this->dgvVenta->TabIndex = 24;
			this->dgvVenta->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SaleForm::dgvVenta_CellContentClick);
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
			this->btnSale->Location = System::Drawing::Point(216, 382);
			this->btnSale->Name = L"btnSale";
			this->btnSale->Size = System::Drawing::Size(180, 23);
			this->btnSale->TabIndex = 23;
			this->btnSale->Text = L"Realizar Venta";
			this->btnSale->UseVisualStyleBackColor = true;
			this->btnSale->Click += gcnew System::EventHandler(this, &SaleForm::btnSale_Click);
			// 
			// txtCantidad
			// 
			this->txtCantidad->Location = System::Drawing::Point(114, 175);
			this->txtCantidad->Name = L"txtCantidad";
			this->txtCantidad->Size = System::Drawing::Size(100, 20);
			this->txtCantidad->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 178);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Cantidad";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->IdProduct,
					this->Product, this->Stock, this->UnitPrice
			});
			this->dataGridView1->Location = System::Drawing::Point(32, 39);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(480, 81);
			this->dataGridView1->TabIndex = 30;
			// 
			// IdProduct
			// 
			this->IdProduct->HeaderText = L"Id";
			this->IdProduct->Name = L"IdProduct";
			// 
			// Product
			// 
			this->Product->HeaderText = L"Producto";
			this->Product->Name = L"Product";
			// 
			// Stock
			// 
			this->Stock->HeaderText = L"Stock";
			this->Stock->Name = L"Stock";
			// 
			// UnitPrice
			// 
			this->UnitPrice->HeaderText = L"Precio Unitario";
			this->UnitPrice->Name = L"UnitPrice";
			// 
			// Total
			// 
			this->Total->HeaderText = L"Total";
			this->Total->Name = L"Total";
			// 
			// btnQueryNorden
			// 
			this->btnQueryNorden->Location = System::Drawing::Point(233, 204);
			this->btnQueryNorden->Name = L"btnQueryNorden";
			this->btnQueryNorden->Size = System::Drawing::Size(75, 23);
			this->btnQueryNorden->TabIndex = 33;
			this->btnQueryNorden->Text = L"Buscar";
			this->btnQueryNorden->UseVisualStyleBackColor = true;
			// 
			// txtOrdenCustomer
			// 
			this->txtOrdenCustomer->Location = System::Drawing::Point(165, 206);
			this->txtOrdenCustomer->Name = L"txtOrdenCustomer";
			this->txtOrdenCustomer->Size = System::Drawing::Size(40, 20);
			this->txtOrdenCustomer->TabIndex = 32;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(40, 209);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 13);
			this->label3->TabIndex = 31;
			this->label3->Text = L"No orden de cliente";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 13);
			this->label1->TabIndex = 34;
			this->label1->Text = L"Lista de productos";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(40, 148);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 13);
			this->label4->TabIndex = 35;
			this->label4->Text = L"Formulario de venta";
			// 
			// SaleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(662, 437);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnQueryNorden);
			this->Controls->Add(this->txtOrdenCustomer);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->dgvVenta);
			this->Controls->Add(this->btnSale);
			this->Controls->Add(this->txtCantidad);
			this->Controls->Add(this->label2);
			this->Name = L"SaleForm";
			this->Text = L"SaleForm";
			this->Load += gcnew System::EventHandler(this, &SaleForm::SaleForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVenta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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

private: System::Void btnSale_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnQueryNorden_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ norden = txtOrdenCustomer->Text;
	ModStansaController^ Mod1 = gcnew ModStansaController();
	Customer^ u = gcnew Customer();
	u = Mod1->QueryCustomerByN_orden(Int32::Parse(norden));
	lblCustomer->Text = u->name;
}
private: System::Void dgvVenta_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void txtOrdenCustomer_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
