#include "ModuloStansaForm.h"
using namespace StansaGUI;

System::Void ModuloStansaForm::dgvModuloStansa_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e){
	if (e->RowIndex < 0){
		return;
	}
	int selectedRow = e->RowIndex;
	dgvModuloStansa->Rows[selectedRow]->Selected = true;
	if (selectedRow >= 0){
		String^ idModStansaGrillaString = dgvModuloStansa->Rows[selectedRow]->Cells[0]->Value->ToString();
		idModStansaGrilla = Int32::Parse(idModStansaGrillaString);

		ModuloStansa ^mod = StansaManager::QueryModuloStansaById(idModStansaGrilla);
		txtModStansaName->Text = mod->name;
		txtModStansaPlace->Text = mod->place;
		txtModStansaMachines->Text = "" + mod->MaquinasOperativas;
	} //Fin de If
}//Fin del Metodo
