#pragma once

namespace UsuarioGUI {

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
	/// Summary for GUI_StansaForm
	/// </summary>
	public ref class GUI_StansaForm : public System::Windows::Forms::Form
	{
	public:
		GUI_StansaForm(void)
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
		~GUI_StansaForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtProduc;
	private: System::Windows::Forms::TextBox^  txtCantidad;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnProductQuery;
	private: System::Windows::Forms::Button^  btnSale;
	private: System::Windows::Forms::DataGridView^  dgvProducts;




	private: System::Windows::Forms::TextBox^  txtOrdenCustomer;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Norden;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Cantidad;
	private: System::Windows::Forms::Button^  button1;










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
			this->txtProduc = (gcnew System::Windows::Forms::TextBox());
			this->txtCantidad = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnProductQuery = (gcnew System::Windows::Forms::Button());
			this->btnSale = (gcnew System::Windows::Forms::Button());
			this->dgvProducts = (gcnew System::Windows::Forms::DataGridView());
			this->txtOrdenCustomer = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Norden = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Codig del Producto";
			// 
			// txtProduc
			// 
			this->txtProduc->Location = System::Drawing::Point(161, 31);
			this->txtProduc->Name = L"txtProduc";
			this->txtProduc->Size = System::Drawing::Size(100, 20);
			this->txtProduc->TabIndex = 2;
			// 
			// txtCantidad
			// 
			this->txtCantidad->Location = System::Drawing::Point(160, 72);
			this->txtCantidad->Name = L"txtCantidad";
			this->txtCantidad->Size = System::Drawing::Size(100, 20);
			this->txtCantidad->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(58, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Cantidad";
			this->label2->Click += gcnew System::EventHandler(this, &GUI_StansaForm::label2_Click);
			// 
			// btnProductQuery
			// 
			this->btnProductQuery->Location = System::Drawing::Point(299, 27);
			this->btnProductQuery->Name = L"btnProductQuery";
			this->btnProductQuery->Size = System::Drawing::Size(75, 23);
			this->btnProductQuery->TabIndex = 5;
			this->btnProductQuery->Text = L"Agregar";
			this->btnProductQuery->UseVisualStyleBackColor = true;
			this->btnProductQuery->Click += gcnew System::EventHandler(this, &GUI_StansaForm::btnProductQuery_Click);
			// 
			// btnSale
			// 
			this->btnSale->Location = System::Drawing::Point(449, 122);
			this->btnSale->Name = L"btnSale";
			this->btnSale->Size = System::Drawing::Size(75, 23);
			this->btnSale->TabIndex = 6;
			this->btnSale->Text = L"Venta";
			this->btnSale->UseVisualStyleBackColor = true;
			this->btnSale->Click += gcnew System::EventHandler(this, &GUI_StansaForm::btnSale_Click);
			// 
			// dgvProducts
			// 
			this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->id, this->Norden,
					this->name, this->price, this->Cantidad
			});
			this->dgvProducts->Location = System::Drawing::Point(23, 166);
			this->dgvProducts->Name = L"dgvProducts";
			this->dgvProducts->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvProducts->Size = System::Drawing::Size(501, 179);
			this->dgvProducts->TabIndex = 14;
			this->dgvProducts->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GUI_StansaForm::dgvProducts_CellContentClick);
			// 
			// txtOrdenCustomer
			// 
			this->txtOrdenCustomer->Location = System::Drawing::Point(161, 122);
			this->txtOrdenCustomer->Name = L"txtOrdenCustomer";
			this->txtOrdenCustomer->Size = System::Drawing::Size(100, 20);
			this->txtOrdenCustomer->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"No orden de Customer";
			// 
			// id
			// 
			this->id->HeaderText = L"Código";
			this->id->Name = L"id";
			this->id->Width = 50;
			// 
			// Norden
			// 
			this->Norden->HeaderText = L"Customer";
			this->Norden->Name = L"Norden";
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(299, 122);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// GUI_StansaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(585, 380);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtOrdenCustomer);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dgvProducts);
			this->Controls->Add(this->btnSale);
			this->Controls->Add(this->btnProductQuery);
			this->Controls->Add(this->txtCantidad);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtProduc);
			this->Controls->Add(this->label1);
			this->Name = L"GUI_StansaForm";
			this->Text = L"GUI_StansaForm";
			this->Load += gcnew System::EventHandler(this, &GUI_StansaForm::GUI_StansaForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void RefreshDGVProducts(){
		List<Product^>^ productList = ModStansaController::QueryAllProduct();
		dgvProducts->Rows->Clear();
		for (int i = 0; i < productList->Count; i++){
			dgvProducts->Rows->Add(gcnew array < String^ > {
				"" + productList[i]->id,
					productList[i]->name,
					"" + productList[i]->description});
		}
	}

	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void btnProductQuery_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ codigo = txtProduc->Text;
	String^ cantidad = txtCantidad->Text;

	ModStansaController^ Mod1 = gcnew ModStansaController();
	Product^ p = gcnew Product();
	p = Mod1->QueryProductById(Int32::Parse(codigo));
	RefreshDGVProducts();

}
private: System::Void dgvProducts_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void btnSale_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void GUI_StansaForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
