#include "stdafx.h"
#include "StansaController.h"

using namespace StansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;

//Metodos de la Clase ModuloStansaDB
void ModuloStansaDB::Add(ModuloStansa^ m){}
void ModuloStansaDB::Update(ModuloStansa^ m){}
void ModuloStansaDB::Delete(int id){}
ModuloStansa^ ModuloStansaDB::QueryById(int id){ return nullptr; }
ModuloStansa^ ModuloStansaDB::QueryByPlace(String^ place){ return nullptr; }
List<ModuloStansa^>^ ModuloStansaDB::QueryAll(){ return nullptr; }