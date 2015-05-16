#include "stdafx.h"
#include "BossStansaController.h"

using namespace BossStansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;

void ModStansaDB::Add(ModStansaController ^){}
void ModStansaDB::Update(ModStansaController^){}
void ModStansaDB::Delete(int id){}
ModStansaController^ ModStansaDB::QueryById(int id){ return nullptr; }
List<ModStansaController^>^ ModStansaDB::QueryAll(){ return nullptr; }

void BossController::AddModStansaController(ModStansaController ^){}
void BossController::UpdateModStansaController(ModStansaController^){}
void BossController::DeleteModStansaController(int id){}
ModStansaController^ BossController::QueryModStansaControllerById(int id){ return nullptr; }
List<ModStansaController^>^ BossController::QueryAllModStansaController(){ return nullptr; }