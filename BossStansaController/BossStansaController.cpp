#include "stdafx.h"
#include "BossStansaController.h"

using namespace BossStansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;


void ModStansaDB::Add(ModStansaController ^ p){
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "INSERT INTO ModStansaDB " +
		"(id, ubicacion, operatingMachines) VALUES (@p1,@p2,@p3)";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Float);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::Float);

	p1->Value = p->id;
	p2->Value = p->ubicacion;
	p3->Value = p->operatingMachines;

	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);

	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();

	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}
void ModStansaDB::Update(ModStansaController^ p){
	/*
	for (int i = 0; i < listDB->Count; i++){
	if (listDB[i]->GetId() == p->GetId()){
	listDB[i]->SetName(p->GetName());
	listDB[i]->SetDescription(p->GetDescription());
	listDB[i]->SetPrice(p->GetPrice());
	listDB[i]->SetStock(p->GetStock());
	}
	}*/
	//PersistToBinaryFile();
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "UPDATE ModStansaDB " +
		"SET description=@p2, price=@p3 " +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Float);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::Float);

	p1->Value = p->id;
	p2->Value = p->ubicacion;
	p3->Value = p->operatingMachines;


	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);


	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();

	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}
void ModStansaDB::Delete(int id){
	/*
	for (int i = 0; i < listDB->Count; i++){
	if (listDB[i]->GetId() == productId){
	listDB->RemoveAt(i);
	}
	}
	*/
	//PersistToBinaryFile();
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "DELETE FROM ModStansaDB" +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);

	p1->Value = id;

	comm->Parameters->Add(p1);

	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();

	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}
ModStansaController^ ModStansaDB::QueryById(int id){
	//LoadFromBinaryFile();
	/*
	for (int i = 0; i < listDB->Count; i++){
	if (listDB[i]->GetId() == productId){
	return listDB[i];
	}
	}
	*/
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM ModStansaDB " +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	p1->Value = id;
	comm->Parameters->Add(p1);

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();

	//Paso 3.1: Procesamos los resultados	
	ModStansaController ^p = nullptr;
	if (dr->Read()){
		p = gcnew ModStansaController();
		p->id = (int)dr["id"];
		if (dr["ubicacion"] != System::DBNull::Value)
			p->ubicacion = safe_cast<String ^>(dr["ubicacion"]);
		if (dr["operatingMachines"] != System::DBNull::Value)
			p->operatingMachines = safe_cast<double>(dr["operatingMachines"]);

	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return p;
}
List<ModStansaController^>^ ModStansaDB::QueryAll(){
	//LoadFromBinaryFile();
	//return listDB;
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM ModStansaDB";

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();

	//Paso 3.1: Procesamos los resultados
	List<ModStansaController^> ^productList = gcnew List<ModStansaController^>();
	while (dr->Read()){
		ModStansaController^p = gcnew ModStansaController();
		p->id = (int)dr["id"];
		if (dr["ubicacion"] != System::DBNull::Value)
			p->ubicacion = safe_cast<String ^>(dr["ubicacion"]);
		if (dr["operatingMachines"] != System::DBNull::Value)
			p->operatingMachines = safe_cast<double>(dr["operatingMachines"]);

		productList->Add(p);
	}

	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();

	return productList;
}

void BossController::AddModStansaController(ModStansaController ^ p){
	//productDB->listDB->Add(p);
	//PersistToXMLFile();
	modStansaDB->Add(p);
}
void BossController::UpdateModStansaController(ModStansaController^ p){
	modStansaDB->Update(p);
}
void BossController::DeleteModStansaController(int id){
	modStansaDB->Delete(id);
}
ModStansaController^ BossController::QueryModStansaControllerById(int id){
	return modStansaDB->QueryById(id);
}
List<ModStansaController^>^ BossController::QueryAllModStansaController(){
	return modStansaDB->QueryAll();
}