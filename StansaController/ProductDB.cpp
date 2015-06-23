#include "stdafx.h"
#include "StansaController.h"

using namespace StansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;

//Metodos de la Clase ProductDB
void ProductDB::Add(Product^ p){}
void ProductDB::Update(Product^ p){}
void ProductDB::Delete(int id){}
Product^ ProductDB::QueryById(int id){ return nullptr; }
List<Product^>^ ProductDB::QueryAll(){ return nullptr; }
