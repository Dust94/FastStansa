#include "stdafx.h"
#include "StansaController.h"

using namespace StansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;

//Metodos de la Clase AttentionDB
void AttentionDB::Add(Attention^ a){}
void AttentionDB::Update(Attention^ a){}
void AttentionDB::Delete(int id){}
Attention^ AttentionDB::QueryById(int id){ return nullptr; }
List<Attention^>^ AttentionDB::QueryAll(){ return nullptr; }
List<Attention^>^ AttentionDB::QueryAllByModuloStansa(ModuloStansa^ modulo){ return nullptr; }
List<Attention^>^ AttentionDB::QueryAllByModuloStansaAndCustomer(ModuloStansa^ modulo, Customer^ customer){ return nullptr; }
List<Attention^>^ AttentionDB::QueryAllByModuloStansaAndStaff(ModuloStansa^ modulo, Staff^ staff){ return nullptr; }
List<Attention^>^ AttentionDB::QueryAllByModuloStansaAndFecha(ModuloStansa^ modulo, String^ fecha){ return nullptr; }
List<Attention^>^ AttentionDB::QueryAllByModuloStansaFechaAndCustomer(ModuloStansa^ modulo, String^ fecha, Customer^ customer){ return nullptr; }
List<Attention^>^ AttentionDB::QueryAllByModuloStansaFechaAndStaff(ModuloStansa^ modulo, String^ fecha, Staff^ staff){ return nullptr; }