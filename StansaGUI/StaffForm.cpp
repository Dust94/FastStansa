#include "StaffForm.h"

using namespace StansaGUI;

System::Void StaffForm::dgvStaff_CellContentClick(System::Object^  sender,
	System::Windows::Forms::DataGridViewCellEventArgs^  e) {

	if (e->RowIndex < 0){
		return;
	}
	int selectedRow = e->RowIndex;
	dgvStaff->Rows[selectedRow]->Selected = true;
	if (selectedRow >= 0){
		String^ idStaffString = dgvStaff->Rows[selectedRow]->Cells[0]->Value->ToString();
		idStaff = Int32::Parse(idStaffString);

		Staff ^s = StansaManager::QueryStaffById(idStaff);

		txtStaffDni->Text = s->dni;
		txtStaffName->Text = s->name;
		txtStaffApellidoPat->Text = s->apellido_Paterno;
		txtStaffApellidoMat->Text = s->apellido_Materno;
		txtStaffUsername->Text = s->username;
		txtStaffPassword->Text = s->password;
		dTPHoraEntrada->Text = s->hora_entrada->ToString("hh:mm:ss");
		dTPHoraSalida->Text = s->hora_salida->ToString("hh:mm:ss");
		combStaffPuesto->Text = s->puesto;
	} //Fin de If
} //Fin de Metodo
