#pragma once

namespace StansaGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace StansaController;
	using namespace System::Collections::Generic;
	using namespace FotoLibrary;

	/// <summary>
	/// Summary for ProductSearchForm
	/// </summary>
	public ref class ProductSearchForm : public System::Windows::Forms::Form
	{
		Form^ saleForm;

	public:
		ProductSearchForm(Form ^saleForm)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->saleForm = saleForm;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ProductSearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnsearch;
	private: System::Windows::Forms::DataGridView^  dgvproductsearch;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  code;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  stock;
	private: System::Windows::Forms::TextBox^  txtquerycode;
	private: System::Windows::Forms::TextBox^  txtqueryname;
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
			this->btnsearch = (gcnew System::Windows::Forms::Button());
			this->dgvproductsearch = (gcnew System::Windows::Forms::DataGridView());
			this->code = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtquerycode = (gcnew System::Windows::Forms::TextBox());
			this->txtqueryname = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvproductsearch))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Busqueda por codigo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Busqueda por nombre";
			// 
			// btnsearch
			// 
			this->btnsearch->Location = System::Drawing::Point(33, 86);
			this->btnsearch->Name = L"btnsearch";
			this->btnsearch->Size = System::Drawing::Size(137, 23);
			this->btnsearch->TabIndex = 2;
			this->btnsearch->Text = L"Buscar de producto";
			this->btnsearch->UseVisualStyleBackColor = true;
			this->btnsearch->Click += gcnew System::EventHandler(this, &ProductSearchForm::btnsearch_Click);
			// 
			// dgvproductsearch
			// 
			this->dgvproductsearch->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvproductsearch->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->code,
					this->name, this->price, this->stock
			});
			this->dgvproductsearch->Location = System::Drawing::Point(33, 133);
			this->dgvproductsearch->Name = L"dgvproductsearch";
			this->dgvproductsearch->Size = System::Drawing::Size(395, 150);
			this->dgvproductsearch->TabIndex = 3;
			this->dgvproductsearch->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductSearchForm::dgvproductsearch_CellContentClick);
			// 
			// code
			// 
			this->code->HeaderText = L"Codigo";
			this->code->Name = L"code";
			this->code->Width = 50;
			// 
			// name
			// 
			this->name->HeaderText = L"Nombre";
			this->name->Name = L"name";
			// 
			// price
			// 
			this->price->HeaderText = L"Precio unitario";
			this->price->Name = L"price";
			// 
			// stock
			// 
			this->stock->HeaderText = L"Stock";
			this->stock->Name = L"stock";
			// 
			// txtquerycode
			// 
			this->txtquerycode->Location = System::Drawing::Point(172, 21);
			this->txtquerycode->Name = L"txtquerycode";
			this->txtquerycode->Size = System::Drawing::Size(200, 20);
			this->txtquerycode->TabIndex = 4;
			// 
			// txtqueryname
			// 
			this->txtqueryname->Location = System::Drawing::Point(172, 50);
			this->txtqueryname->Name = L"txtqueryname";
			this->txtqueryname->Size = System::Drawing::Size(200, 20);
			this->txtqueryname->TabIndex = 5;
			// 
			// ProductSearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(455, 303);
			this->Controls->Add(this->txtqueryname);
			this->Controls->Add(this->txtquerycode);
			this->Controls->Add(this->dgvproductsearch);
			this->Controls->Add(this->btnsearch);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ProductSearchForm";
			this->Text = L"Busqueda de ";
			this->Load += gcnew System::EventHandler(this, &ProductSearchForm::ProductSearchForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvproductsearch))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:  static Staff^ staffLocal = gcnew Staff();
				 static ModuloStansa^ moduloStansaLocal = gcnew ModuloStansa();

		void RefreshDGVProducts(){
			List<Product^>^ productList = StansaManager::QueryAllProduct();
			dgvproductsearch->Rows->Clear();
			for (int i = 0; i < productList->Count; i++){
				dgvproductsearch->Rows->Add(gcnew array<String^>{
					"" + productList[i]->id,
						productList[i]->name,
					"" + productList[i]->price,
					"" + productList[i]->stock});
			}
		}

	private: System::Void btnsearch_Click(System::Object^  sender, System::EventArgs^  e) {

		if (String::Compare(txtquerycode->Text->Trim(), "") != 0 &&
			String::Compare(txtqueryname->Text->Trim(), "") != 0){
			MessageBox::Show("Sólo debe ingresar un criterio de búsqueda");
			return;
		}
		if (String::Compare(txtquerycode->Text->Trim(), "") != 0){
			int id = Int32::Parse(txtquerycode->Text); //Codigo de Producto Ingresado por Usuario
			Product^ p = StansaManager::QueryProductById(id);
			dgvproductsearch->Rows->Clear();
			if (p != nullptr){//Si existe un Producto con ese codigo
				dgvproductsearch->Rows->Add(gcnew array<String^>{
					"" + p->id,
						p->name,
						"" + p->price,
						"" + p->stock});
				return;
			}
			else {
				MessageBox::Show("Product no existe");
			}
		}
		else {//Si no ha ingresado codigo el Usuario
			List<Product^> ^productList = StansaManager::QueryProductsLikeName(txtqueryname->Text);//Lo busco por nombre
			dgvproductsearch->Rows->Clear();
			for (int i = 0; i < productList->Count; i++){ //Si lo encuentro, lleno la grilla
				dgvproductsearch->Rows->Add(gcnew array<String^>{
					"" + productList[i]->id,
						productList[i]->name,
						"" + productList[i]->price,
						"" + productList[i]->stock});
			}
		}



	}
	
private: System::Void ProductSearchForm_Load(System::Object^  sender, System::EventArgs^  e) {
	RefreshDGVProducts();

}
 System::Void dgvproductsearch_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e);

};
}
