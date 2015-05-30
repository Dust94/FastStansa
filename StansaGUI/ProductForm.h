#pragma once
#include "ProductForm.h"
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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtId;
	private: System::Windows::Forms::TextBox^  txtName;
	private: System::Windows::Forms::DataGridView^  dgvProducts;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Description;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Stock;
	private: System::Windows::Forms::Button^  button1;




	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->dgvProducts = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Description = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Description";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(149, 28);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(100, 20);
			this->txtId->TabIndex = 5;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(149, 55);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(100, 20);
			this->txtName->TabIndex = 6;
			// 
			// dgvProducts
			// 
			this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id, this->Name,
					this->Description, this->Price, this->Stock
			});
			this->dgvProducts->Location = System::Drawing::Point(28, 135);
			this->dgvProducts->Name = L"dgvProducts";
			this->dgvProducts->Size = System::Drawing::Size(395, 150);
			this->dgvProducts->TabIndex = 7;
			// 
			// Id
			// 
			this->Id->FillWeight = 25;
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			// 
			// Name
			// 
			this->Name->HeaderText = L"Nombre";
			this->Name->Name = L"Name";
			// 
			// Description
			// 
			this->Description->FillWeight = 200;
			this->Description->HeaderText = L"Descripcion";
			this->Description->Name = L"Description";
			// 
			// Price
			// 
			this->Price->HeaderText = L"Precio";
			this->Price->Name = L"Price";
			// 
			// Stock
			// 
			this->Stock->HeaderText = L"Stock";
			this->Stock->Name = L"Stock";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(51, 99);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ProductForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(158, 99);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Modificar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(302, 98);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(435, 297);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dgvProducts);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ProductForm";
			this->Text = L"ProductForm";
			this->Load += gcnew System::EventHandler(this, &ProductForm::ProductForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: void RefreshDGVProducts(){
		List<Product^>^ productList = ModStansaController::QueryAllProduct();
		//lstProducts->Items->Clear();
		dgvProducts->Rows->Clear();
		for (int i = 0; i < productList->Count; i++){
			dgvProducts->Rows->Add(gcnew array<String^>{
				"" + productList[i]->id,
					productList[i]->name,
					"" + productList[i]->description,
					"" + productList[i]->price});
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ sId = txtId->Text;
		String^ name = txtName->Text;

		Product^ p = gcnew Product();
		p->id = (Int32::Parse(sId));
		p->name = name;
		ModStansaController::AddProduct(p);
		RefreshDGVProducts();
	}
};
}
