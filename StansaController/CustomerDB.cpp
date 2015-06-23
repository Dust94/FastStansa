#include "stdafx.h"
#include "StansaController.h"

using namespace StansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;

//Metodos de la Clase CustomerDB
void CustomerDB::Add(Customer^ c){}
void CustomerDB::Update(Customer^ c){}
void CustomerDB::Delete(int id){}
Customer^ CustomerDB::QueryById(int id){ return nullptr; }
Customer^ CustomerDB::QueryByDni(String^ dni){ return nullptr; }
Customer^ CustomerDB::QueryByCodigoPUCP(String^ codigoPUCP){ return nullptr; }
List<Customer^>^ CustomerDB::QueryAll(){ return nullptr; }
