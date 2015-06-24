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
	/// Summary for ProductForm
	/// </summary>
	public ref class ProductForm : public System::Windows::Forms::Form
	{
	public:
		ProductForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			RefreshDGVProducts();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ProductForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblName;
	private: System::Windows::Forms::TextBox^  txtName;
	private: System::Windows::Forms::TextBox^  txtPrice;
	protected:


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtDescription;
	private: System::Windows::Forms::Button^  btnUpdate;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnDelete;
	private: System::Windows::Forms::DataGridView^  dgvProducts;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  description;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  stock;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtstock;








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
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dgvProducts = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->description = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtstock = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(81, 25);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(44, 13);
			this->lblName->TabIndex = 0;
			this->lblName->Text = L"Nombre";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(196, 18);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(178, 20);
			this->txtName->TabIndex = 1;
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(196, 100);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(70, 20);
			this->txtPrice->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(81, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Descripcion";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(81, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Price";
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(196, 59);
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(178, 20);
			this->txtDescription->TabIndex = 5;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(239, 170);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 6;
			this->btnUpdate->Text = L"Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ProductForm::btnUpdate_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(69, 170);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 7;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ProductForm::btnAdd_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(403, 170);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 8;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ProductForm::btnDelete_Click);
			// 
			// dgvProducts
			// 
			this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id, this->Nombre,
					this->description, this->price, this->stock
			});
			this->dgvProducts->Location = System::Drawing::Point(27, 219);
			this->dgvProducts->Name = L"dgvProducts";
			this->dgvProducts->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvProducts->Size = System::Drawing::Size(558, 150);
			this->dgvProducts->TabIndex = 9;
			this->dgvProducts->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductForm::dataGridView1_CellContentClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			this->Id->Width = 50;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"name";
			this->Nombre->Name = L"Nombre";
			// 
			// description
			// 
			this->description->HeaderText = L"Descripcion";
			this->description->Name = L"description";
			// 
			// price
			// 
			this->price->HeaderText = L"Precio";
			this->price->Name = L"price";
			// 
			// stock
			// 
			this->stock->HeaderText = L"Stock";
			this->stock->Name = L"stock";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(81, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Stock";
			// 
			// txtstock
			// 
			this->txtstock->Location = System::Drawing::Point(196, 143);
			this->txtstock->Name = L"txtstock";
			this->txtstock->Size = System::Drawing::Size(70, 20);
			this->txtstock->TabIndex = 11;
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(597, 390);
			this->Controls->Add(this->txtstock);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvProducts);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->lblName);
			this->Name = L"ProductForm";
			this->Text = L"ProductForm";
			this->Load += gcnew System::EventHandler(this, &ProductForm::ProductForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void RefreshDGVProducts(){
			List<Product^>^ productList = StansaManager::QueryAllProduct();
			dgvProducts->Rows->Clear();
			for (int i = 0; i < productList->Count; i++){
				dgvProducts->Rows->Add(gcnew array<String^>{
					"" + productList[i]->id,
						productList[i]->name,
						"" + productList[i]->description,
						"" + productList[i]->price,
						"" + productList[i]->stock});
			}
		}
	private: System::Void ProductForm_Load(System::Object^  sender, System::EventArgs^  e) {

		RefreshDGVProducts();
	}
	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ name = txtName->Text;
		String^ descripcion = txtDescription->Text;
		String^ precio = txtPrice->Text;
		String^ stock = txtstock->Text;

		Product^ p = gcnew Product();
		p->name = name;
		p->description = descripcion;
		p->price = Double::Parse(precio);
		p->stock = Int32::Parse(stock);
		StansaManager::AddProduct(p);
		RefreshDGVProducts();
	}
		
			public:  int idProd;
public:	System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	
	
		
		if (dgvProducts->CurrentCell != nullptr &&
			dgvProducts->CurrentCell->Value != nullptr &&
			dgvProducts->CurrentCell->Value->ToString() != "") {
	        idProd = Int32::Parse(
				dgvProducts->SelectedRows[0]->
				Cells[0]->Value->ToString());
			Product ^ p = StansaManager::QueryProductById(idProd);
			txtName->Text = p->name;
			txtDescription->Text = p->description;
			txtPrice->Text = Convert::ToString(p->price);
			txtstock->Text = Convert::ToString(p->stock);
		}
				
	}
private: System::Void btnUpdate_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ name = txtName->Text;
	String^ descripcion = txtDescription->Text;
	String^ precio = txtPrice->Text;
	String^ stock = txtstock->Text;

	Product^ p = gcnew Product();
	p->name = name;
	p->description = descripcion;
	p->price = Double::Parse(precio);
	p->stock = Int32::Parse(stock);
	StansaManager::UpdateProduct(p);
	
	RefreshDGVProducts();

}
private: System::Void btnDelete_Click(System::Object^  sender, System::EventArgs^  e) {

	
	StansaManager::DeleteProduct(idProd);
	RefreshDGVProducts();
//entregaa
}
};
}

