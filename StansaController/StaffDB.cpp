#include "stdafx.h"
#include "StaffDB.h"

using namespace StansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;

//Metodos de la Clase StaffDB
void StaffDB::Add(Staff^p){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "INSERT INTO StaffDB" +
		"(status, dni, name, inTime, outTime, position, user, password	) VALUES (@p1,@p2,@p3,@p4,@p5,@p6,@p7,@p8)";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p7 = gcnew SqlParameter("@p7",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p8 = gcnew SqlParameter("@p8",
		System::Data::SqlDbType::VarChar);

	p1->Value = p->estado;
	p2->Value = p->dni;
	p3->Value = p->name;
	p4->Value = p->hora_entrada;
	p5->Value = p->hora_salida;
	p6->Value = p->puesto;
	p7->Value = p->user;
	p8->Value = p->psw;

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
void StaffDB::Update(Staff^p){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "UPDATE StaffDB" +
		"SET status=@p1, dni=@p2, name=@p3 ,inTime=@p4, outTime=@p5, position=@p6, user=@p8, password=@p9" +
		"WHERE id=@p7";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p7 = gcnew SqlParameter("@p7",
		System::Data::SqlDbType::Int);
	SqlParameter^ p8 = gcnew SqlParameter("@p8",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p9 = gcnew SqlParameter("@p9",
		System::Data::SqlDbType::VarChar);


	p1->Value = p->estado;
	p2->Value = p->dni;
	p3->Value = p->name;
	p4->Value = p->hora_entrada;
	p5->Value = p->hora_salida;
	p6->Value = p->puesto;
	p7->Value = p->id;
	p8->Value = p->user;
	p9->Value = p->psw;

	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	comm->Parameters->Add(p6);
	comm->Parameters->Add(p7);
	comm->Parameters->Add(p8);
	comm->Parameters->Add(p9);



	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}

void StaffDB::Delete(int id){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "DELETE FROM StaffDB" +
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

Staff^ StaffDB::QueryById(int id){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM StaffDB " +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	p1->Value = id;
	comm->Parameters->Add(p1);

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Staff^p = nullptr;
	if (dr->Read()){
		p = gcnew Staff();
		p->id = (int)dr["id"];
		if (dr["status"] != System::DBNull::Value)
			p->estado = safe_cast<String^>(dr["status"]);
		if (dr["dni"] != System::DBNull::Value)
			p->dni = safe_cast<String^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			p->name = safe_cast<String^>(dr["name"]);
		if (dr["inTime"] != System::DBNull::Value)
			p->hora_entrada = safe_cast<DateTime^>(dr["inTime"]);
		if (dr["outTime"] != System::DBNull::Value)
			p->hora_salida = safe_cast<DateTime^>(dr["outTime"]);
		if (dr["position"] != System::DBNull::Value)
			p->puesto = safe_cast<String^>(dr["position"]);
		if (dr["user"] != System::DBNull::Value)
			p->puesto = safe_cast<String^>(dr["user"]);
		if (dr["password"] != System::DBNull::Value)
			p->puesto = safe_cast<String^>(dr["password"]);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return p;
}

Staff^ StaffDB::QueryByDni(String^ dni){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM StaffDB" +
		"WHERE dni=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	p1->Value = dni;
	comm->Parameters->Add(p1);

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Staff ^p = nullptr;
	if (dr->Read()){
		p = gcnew Staff();
		p->id = (int)dr["id"];
		if (dr["status"] != System::DBNull::Value)
			p->estado = safe_cast<String^>(dr["status"]);
		if (dr["dni"] != System::DBNull::Value)
			p->dni = safe_cast<String^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			p->name = safe_cast<String^>(dr["name"]);
		if (dr["inTime"] != System::DBNull::Value)
			p->hora_entrada = safe_cast<DateTime^>(dr["inTime"]);
		if (dr["outTime"] != System::DBNull::Value)
			p->hora_salida = safe_cast<DateTime^>(dr["outTime"]);
		if (dr["position"] != System::DBNull::Value)
			p->puesto = safe_cast<String^>(dr["position"]);
		if (dr["user"] != System::DBNull::Value)
			p->puesto = safe_cast<String^>(dr["user"]);
		if (dr["password"] != System::DBNull::Value)
			p->puesto = safe_cast<String^>(dr["password"]);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return p;
} //Fin metodo QueryByDni

List<Staff^>^ StaffDB::QueryAll(){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM StaffDB";

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados
	List<Staff^> ^staffList = gcnew List<Staff^>();
	while (dr->Read()){
		Staff^p = gcnew Staff();
		p->id = (int)dr["id"];
		if (dr["status"] != System::DBNull::Value)
			p->estado = safe_cast<String^>(dr["status"]);
		if (dr["dni"] != System::DBNull::Value)
			p->dni = safe_cast<String^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			p->name = safe_cast<String^>(dr["name"]);
		if (dr["inTime"] != System::DBNull::Value)
			p->hora_entrada = safe_cast<DateTime^>(dr["inTime"]);
		if (dr["outTime"] != System::DBNull::Value)
			p->hora_salida = safe_cast<DateTime^>(dr["outTime"]);
		if (dr["position"] != System::DBNull::Value)
			p->puesto = safe_cast<String^>(dr["position"]);
		if (dr["user"] != System::DBNull::Value)
			p->puesto = safe_cast<String^>(dr["user"]);
		if (dr["password"] != System::DBNull::Value)
			p->puesto = safe_cast<String^>(dr["password"]);
		staffList->Add(p);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();

	return staffList;
}