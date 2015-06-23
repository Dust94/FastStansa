#include "stdafx.h"
#include "StansaController.h"

using namespace StansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;

//Metodos de la Clase StaffDB
void StaffDB::Add(Staff^ s){}
void StaffDB::Update(Staff^ s){}
void StaffDB::Delete(int id){}
Staff^ StaffDB::QueryById(int id){ return nullptr; }
Staff^ StaffDB::QueryByDni(String^ dni){ return nullptr; }
List<Staff^>^ StaffDB::QueryAll(){ return nullptr; }
