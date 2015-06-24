#include "ProductSearchForm.h"

#include "SaleForm.h"
/*
using namespace StansaAPPForm;

System::Void ProductsSearchForm::dgvProducts_CellContentClick(System::Object^  sender,
	System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex < 0){
		return;
	}
	int selectedRow = e->RowIndex;
	dgvProducts->Rows[selectedRow]->Selected = true;
	if (selectedRow >= 0){
		String^ productId = dgvProducts->Rows[selectedRow]->Cells[0]->Value->ToString();
		Product ^p = SalesManager::QueryProductById(Int32::Parse(productId));
		//¿Cómo agregamos el producto "p" al grid de los detalles de la venta?
		((SaleForm^)saleForm)->AddProductToDetails(p);
		this->Close();
	}


}

*/