#include "stdafx.h"
#include "CustomerDB.h"

using namespace StansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;

//Metodos de la Clase CustomerDB
void CustomerDB::Add(Customer ^ p){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "INSERT INTO CustomerDB " +
		"(dni, name, sex, n_orden, reciveTime, leftTime, status) VALUES (@p1,@p2,@p3,@p4,@p5,@p6,@p7)";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::Int);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p7 = gcnew SqlParameter("@p7",
		System::Data::SqlDbType::VarChar);

	p1->Value = p->dni;
	p2->Value = p->name;
	p3->Value = p->sexo;
	p4->Value = p->n_orden;
	p5->Value = p->hora_ini;
	p6->Value = p->hora_fin;
	p7->Value = p->estado;

	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	comm->Parameters->Add(p6);
	comm->Parameters->Add(p7);
	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}

void CustomerDB::Update(Customer^ p){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "UPDATE CustomerDB" +
		"SET dni=@p1, name=@p2, sex=@p3, n_order=@p4, reciveTime=@p5, leftTime=@p6, status=@p7 " +
		"WHERE id=@p8"; 
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::Int);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p7 = gcnew SqlParameter("@p7",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p8 = gcnew SqlParameter("@p8",
		System::Data::SqlDbType::Int);

	p1->Value = p->dni;
	p2->Value = p->name;
	p3->Value = p->sexo;
	p4->Value = p->n_orden;
	p5->Value = p->hora_ini;
	p6->Value = p->hora_fin;
	p7->Value = p->estado;
	p8->Value = p->id;

	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	comm->Parameters->Add(p6);
	comm->Parameters->Add(p7);
	comm->Parameters->Add(p8);

	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}

void CustomerDB::Delete(int id) {
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "DELETE FROM CustomerDB" +
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

Customer^ CustomerDB::QueryById(int id){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM CustomerDB " +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	p1->Value = id;
	comm->Parameters->Add(p1);

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Customer^p = nullptr;
	if (dr->Read()){
		p = gcnew Customer();
		p->id = (int)dr["id"];
		if (dr["status"] != System::DBNull::Value)
			p->estado = safe_cast<String^>(dr["status"]);
		if (dr["dni"] != System::DBNull::Value)
			p->dni = safe_cast<String^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			p->name = safe_cast<String^>(dr["name"]);
		if (dr["n_order"] != System::DBNull::Value)
			p->n_orden = (int)dr["n_order"];
		if (dr["reciveTime"] != System::DBNull::Value)
			p->hora_ini = safe_cast<DateTime^>(dr["reciveTime"]);
		if (dr["leftTime"] != System::DBNull::Value)
			p->hora_fin = safe_cast<DateTime^>(dr["leftTime"]);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return p;
}
Customer^ CustomerDB::QueryByN_orden(int n_orden){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM CustomerDB " +
		"WHERE n_order=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	p1->Value = n_orden;
	comm->Parameters->Add(p1);

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Customer^p = nullptr;
	if (dr->Read()){
		p = gcnew Customer();
		p->id = (int)dr["id"];
		if (dr["status"] != System::DBNull::Value)
			p->estado = safe_cast<String^>(dr["status"]);
		if (dr["dni"] != System::DBNull::Value)
			p->dni = safe_cast<String^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			p->name = safe_cast<String^>(dr["name"]);
		if (dr["n_order"] != System::DBNull::Value)
			p->n_orden = (int)dr["n_order"];
		if (dr["reciveTime"] != System::DBNull::Value)
			p->hora_ini = safe_cast<DateTime^>(dr["reciveTime"]);
		if (dr["leftTime"] != System::DBNull::Value)
			p->hora_fin = safe_cast<DateTime^>(dr["leftTime"]);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return p;
}
List<Customer^>^ CustomerDB::QueryAll(){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM CustomerDB";
	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados
	List<Customer^> ^costumerList = gcnew List<Customer^>();
	while (dr->Read()){
		Customer^ p = gcnew Customer();
		p->id = (int)dr["id"];
		if (dr["status"] != System::DBNull::Value)
			p->estado = safe_cast<String^>(dr["status"]);
		if (dr["dni"] != System::DBNull::Value)
			p->dni = safe_cast<String^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			p->name = safe_cast<String^>(dr["name"]);
		if (dr["n_order"] != System::DBNull::Value)
			p->n_orden = (int)dr["n_order"];
		if (dr["reciveTime"] != System::DBNull::Value)
			p->hora_ini = safe_cast<DateTime^>(dr["reciveTime"]);
		if (dr["leftTime"] != System::DBNull::Value)
			p->hora_fin = safe_cast<DateTime^>(dr["leftTime"]);
		costumerList->Add(p);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return costumerList;
}
