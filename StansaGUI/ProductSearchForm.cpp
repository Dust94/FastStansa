#include "ProductSearchForm.h"

#include "SaleForm.h"

using namespace StansaGUI;


 System::Void ProductSearchForm::dgvproductsearch_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

	 if (e->RowIndex < 0){
		 return;
	 }
	 int selectedRow = e->RowIndex;
	 dgvproductsearch->Rows[selectedRow]->Selected = true;
	 if (selectedRow >= 0){
		 String^ productId = dgvproductsearch->Rows[selectedRow]->Cells[0]->Value->ToString();
		 Product ^p = StansaManager::QueryProductById(Int32::Parse(productId));
		 //¿Cómo agregamos el producto "p" al grid de los detalles de la venta?
		 ((SaleForm^)saleForm)->AddProductToDetails(p);
		 this->Close();
	 }
  
 }




