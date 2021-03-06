#include "stdafx.h"
#include "StansaController.h"

using namespace StansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;

//Metodos de la Clase StaffDB
void StaffDB::Add(Staff^ s, int idModuloStansa){
	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "INSERT INTO Staff_DB" +
		" (dni, name, lastName, secondLastName, sex, username, password, inTime, outTime, position, idModStansa)" +
		" VALUES (@p1,@p2,@p3,@p4,@p5,@p6,@p7,@p8,@p9,@p10,@p11)";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::Char, 1);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p7 = gcnew SqlParameter("@p7",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p8 = gcnew SqlParameter("@p8",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p9 = gcnew SqlParameter("@p9",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p10 = gcnew SqlParameter("@p10",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p11 = gcnew SqlParameter("@p11",
		System::Data::SqlDbType::Int);

	p1->Value = s->dni; //String
	p2->Value = s->name; //String
	p3->Value = s->apellido_Paterno; //String
	p4->Value = s->apellido_Materno; //String
	p5->Value = s->sexo; // char
	p6->Value = s->username; //String
	p7->Value = s->password; //String
	p8->Value = s->hora_entrada; //DateTime
	p9->Value = s->hora_salida; //DateTime
	p10->Value = s->puesto; //String
	p11->Value = idModuloStansa; //int

	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	comm->Parameters->Add(p6);
	comm->Parameters->Add(p7);
	comm->Parameters->Add(p8);
	comm->Parameters->Add(p9);
	comm->Parameters->Add(p10);
	comm->Parameters->Add(p11);
	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}
void StaffDB::Update(Staff^ s, int idModuloStansa){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "UPDATE Staff_DB " +
		"SET dni=@p1, name=@p2, lastName=@p3, secondLastName=@p4, sex=@p5, username=@p6 , password=@p7 , inTime=@p8 , outTime=@p9, position=@p10, idModStansa=@p11 " +
		" WHERE id=@p12";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::Char, 1);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p7 = gcnew SqlParameter("@p7",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p8 = gcnew SqlParameter("@p8",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p9 = gcnew SqlParameter("@p9",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p10 = gcnew SqlParameter("@p10",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p11 = gcnew SqlParameter("@p11",
		System::Data::SqlDbType::Int);
	SqlParameter^ p12 = gcnew SqlParameter("@p12",
		System::Data::SqlDbType::Int);

	p1->Value = s->dni; //String
	p2->Value = s->name; //String
	p3->Value = s->apellido_Paterno; //String
	p4->Value = s->apellido_Materno; //String
	p5->Value = s->sexo; // char
	p6->Value = s->username; //String
	p7->Value = s->password; //String
	p8->Value = s->hora_entrada; //DateTime
	p9->Value = s->hora_salida; //DateTime
	p10->Value = s->puesto; //String
	p11->Value = idModuloStansa; //int
	p12->Value = s->id; //int

	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	comm->Parameters->Add(p6);
	comm->Parameters->Add(p7);
	comm->Parameters->Add(p8);
	comm->Parameters->Add(p9);
	comm->Parameters->Add(p10);
	comm->Parameters->Add(p11);
	comm->Parameters->Add(p12);
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
	comm->CommandText = "DELETE FROM Staff_DB " +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);

	p1->Value = id; //int

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
	comm->CommandText = "SELECT * FROM Staff_DB " +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	p1->Value = id; // int

	comm->Parameters->Add(p1);
	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Staff ^s = nullptr;
	if (dr->Read()){
		s = gcnew Staff();
		s->id = (int)dr["id"];
		if (dr["dni"] != System::DBNull::Value)
			s->dni = safe_cast<String^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			s->name = safe_cast<String ^>(dr["name"]);
		if (dr["lastName"] != System::DBNull::Value)
			s->apellido_Paterno = safe_cast<String ^>(dr["lastName"]);
		if (dr["secondLastName"] != System::DBNull::Value)
			s->apellido_Materno = safe_cast<String ^>(dr["secondLastName"]);
		if (dr["sex"] != System::DBNull::Value)
			s->sexo = Char::Parse(safe_cast<String ^>(dr["sex"]));
		if (dr["username"] != System::DBNull::Value)
			s->username = safe_cast<String ^>(dr["username"]);
		if (dr["password"] != System::DBNull::Value)
			s->password = safe_cast<String ^>(dr["password"]);
		if (dr["inTime"] != System::DBNull::Value)
			s->hora_entrada = dr->GetDateTime(8); //Columna 8 "inTime"
		if (dr["outTime"] != System::DBNull::Value)
			s->hora_salida = dr->GetDateTime(9); //Columna 9 "outTime"
		if (dr["position"] != System::DBNull::Value)
			s->puesto = safe_cast<String ^>(dr["position"]);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return s;
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
	comm->CommandText = "SELECT * FROM Staff_DB " +
		"WHERE dni=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	p1->Value = dni; // String

	comm->Parameters->Add(p1);
	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Staff ^s = nullptr;
	if (dr->Read()){
		s = gcnew Staff();
		s->id = (int)dr["id"];
		if (dr["dni"] != System::DBNull::Value)
			s->dni = safe_cast<String^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			s->name = safe_cast<String ^>(dr["name"]);
		if (dr["lastName"] != System::DBNull::Value)
			s->apellido_Paterno = safe_cast<String ^>(dr["lastName"]);
		if (dr["secondLastName"] != System::DBNull::Value)
			s->apellido_Materno = safe_cast<String ^>(dr["secondLastName"]);
		if (dr["sex"] != System::DBNull::Value)
			s->sexo = Char::Parse( safe_cast<String ^>(dr["sex"]));
		if (dr["username"] != System::DBNull::Value)
			s->username = safe_cast<String ^>(dr["username"]);
		if (dr["password"] != System::DBNull::Value)
			s->password = safe_cast<String ^>(dr["password"]);
		if (dr["inTime"] != System::DBNull::Value)
			s->hora_entrada = dr->GetDateTime(8); //Columna 8 "inTime"
		if (dr["outTime"] != System::DBNull::Value)
			s->hora_salida = dr->GetDateTime(9); //Columna 9 "outTime"
		if (dr["position"] != System::DBNull::Value)
			s->puesto = safe_cast<String ^>(dr["position"]);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return s;
}
Staff^ StaffDB::QueryByUsernameAndPassWord(String^ username, String^ password){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM Staff_DB " +
		"WHERE username=@p1 AND password=@p2";

	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	p1->Value = username; // String^
	p2->Value = password; // String^

	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Staff ^s = nullptr;
	if (dr->Read()){
		s = gcnew Staff();
		s->id = (int)dr["id"];
		if (dr["dni"] != System::DBNull::Value)
			s->dni = safe_cast<String^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			s->name = safe_cast<String ^>(dr["name"]);
		if (dr["lastName"] != System::DBNull::Value)
			s->apellido_Paterno = safe_cast<String ^>(dr["lastName"]);
		if (dr["secondLastName"] != System::DBNull::Value)
			s->apellido_Materno = safe_cast<String ^>(dr["secondLastName"]);
		if (dr["sex"] != System::DBNull::Value)
			s->sexo = Char::Parse(safe_cast<String ^>(dr["sex"]));
		if (dr["username"] != System::DBNull::Value)
			s->username = safe_cast<String ^>(dr["username"]);
		if (dr["password"] != System::DBNull::Value)
			s->password = safe_cast<String ^>(dr["password"]);
		if (dr["inTime"] != System::DBNull::Value)
			s->hora_entrada = dr->GetDateTime(8); //Columna 8 "inTime"
		if (dr["outTime"] != System::DBNull::Value)
			s->hora_salida = dr->GetDateTime(9); //Columna 9 "outTime"
		if (dr["position"] != System::DBNull::Value)
			s->puesto = safe_cast<String ^>(dr["position"]);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return s;
}
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
	comm->CommandText = "SELECT * FROM Staff_DB";

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados

	List<Staff^>^ staffList = gcnew List<Staff^>();
	while (dr->Read()){
		Staff^ s = gcnew Staff();
		s->id = (int)dr["id"];
		if (dr["dni"] != System::DBNull::Value)
			s->dni = safe_cast<String^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			s->name = safe_cast<String ^>(dr["name"]);
		if (dr["lastName"] != System::DBNull::Value)
			s->apellido_Paterno = safe_cast<String ^>(dr["lastName"]);
		if (dr["secondLastName"] != System::DBNull::Value)
			s->apellido_Materno = safe_cast<String ^>(dr["secondLastName"]);
		if (dr["sex"] != System::DBNull::Value)
			s->sexo = Char::Parse(safe_cast<String ^>(dr["sex"]));
		if (dr["username"] != System::DBNull::Value)
			s->username = safe_cast<String ^>(dr["username"]);
		if (dr["password"] != System::DBNull::Value)
			s->password = safe_cast<String ^>(dr["password"]);
		if (dr["inTime"] != System::DBNull::Value)
			s->hora_entrada = dr->GetDateTime(8); //Columna 8 "inTime"
		if (dr["outTime"] != System::DBNull::Value)
			s->hora_salida = dr->GetDateTime(9); //Columna 9 "outTime"
		if (dr["position"] != System::DBNull::Value)
			s->puesto = safe_cast<String ^>(dr["position"]);
		staffList->Add(s);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return staffList;
}
