
#include "stdafx.h"
#include "StansaController.h"

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
		"(status, dni, name, n_order, reciveTime, leftTime) VALUES (@p1,@p2,@p3,@p4,@p5,@p6)";
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

	p1->Value = p->estado;
	p2->Value = p->dni;
	p3->Value = p->name;
	p4->Value = p->n_orden;
	p5->Value = p->hora_ini;
	p6->Value = p->hora_fin;

	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	comm->Parameters->Add(p6);
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
		"SET status=@p1, dni=@p2,name=@p3, n_order=@p4, reciveTime=@p5, leftTime=@p6  " +
		"WHERE id=@p7";
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
		System::Data::SqlDbType::Int);

	p1->Value = p->estado;
	p2->Value = p->dni;
	p3->Value = p->name;
	p4->Value = p->n_orden;
	p5->Value = p->hora_ini;
	p6->Value = p->hora_fin;
	p7->Value = p->id;

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
		"(status, dni, name, inTime, outTime, position) VALUES (@p1,@p2,@p3,@p4,@p5,@p6)";
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
	//6+26+56+5JCGHKCGYKCHUKV
	p1->Value = p->estado;
	p2->Value = p->dni;
	p3->Value = p->name;
	p4->Value = p->hora_entrada;
	p5->Value = p->hora_salida;
	p6->Value = p->puesto;

	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	comm->Parameters->Add(p6);

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
		"SET status=@p1, dni=@p2, name=@p3 ,inTime=@p4, outTime=@p5, position=@p6" +
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

	p1->Value = p->estado;
	p2->Value = p->dni;
	p3->Value = p->name;
	p4->Value = p->hora_entrada;
	p5->Value = p->hora_salida;
	p6->Value = p->puesto;
	p7->Value = p->id;

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
		staffList->Add(p);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();

	return staffList;
}

//Metodos de la Clase ProductDB
void ProductDB::Add(Product ^ p){
	//listProduct->Add(p);
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "INSERT INTO ProductDB " +
		"(name, description, price, stock) VALUES (@p1,@p2,@p3,@p4)";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::Float);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::Int);
	p1->Value = p->name;
	p2->Value = p->description;
	p3->Value = p->price;
	p4->Value = p->stock;

	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);

	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();

	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}
void ProductDB::Update(Product^p){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "UPDATE ProductDB " +
		"SET name=@p1, description=@p2, price=@p3, stock=@p4 " +
		"WHERE id=@p5";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::Float);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::Int);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::Int);

	p1->Value = p->name;
	p2->Value = p->description;
	p3->Value = p->price;
	p4->Value = p->stock;
	p5->Value = p->id;

	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);

	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}

void ProductDB::Delete(int id){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "DELETE FROM ProductDB " +
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
Product^ ProductDB::QueryById(int id){
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM ProductDB " +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	p1->Value = id;
	comm->Parameters->Add(p1);

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Product ^p = nullptr;
	if (dr->Read()){
		p = gcnew Product();
		p->id = (int)dr["id"];
		if (dr["name"] != System::DBNull::Value)
			p->name = safe_cast<String^>(dr["name"]);
		if (dr["description"] != System::DBNull::Value)
			p->description = safe_cast<String ^>(dr["description"]);
		if (dr["price"] != System::DBNull::Value)
			p->price = safe_cast<double>(dr["price"]);
		if (dr["stock"] != System::DBNull::Value)
			p->stock = safe_cast<int>(dr["stock"]);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return p;
}
List<Product^>^ ProductDB::QueryAll(){
	//return listProduct;
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM ProductDB";

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados
	List<Product^> ^productList = gcnew List<Product^>();
	while (dr->Read()){
		Product ^p = gcnew Product();
		p->id = (int)dr["id"];
		if (dr["name"] != System::DBNull::Value)
			p->name = safe_cast<String^>(dr["name"]);
		if (dr["description"] != System::DBNull::Value)
			p->description = safe_cast<String ^>(dr["description"]);
		if (dr["price"] != System::DBNull::Value)
			p->price = safe_cast<double>(dr["price"]);
		if (dr["stock"] != System::DBNull::Value)
			p->stock = safe_cast<int>(dr["stock"]);
		productList->Add(p);
	}

	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return productList;
}

//Metodos Estaticos de la Clase ModStansaController para Customer
void ModStansaController::AddCustomer(Customer ^ p){
	customerDB->Add(p);
}
void ModStansaController::UpdateCustomer(Customer^p){
	customerDB->Update(p);
}
void ModStansaController::DeleteCustomer(int id){
	customerDB->Delete(id);
}
Customer^ ModStansaController::QueryCustomerById(int id){
	return customerDB->QueryById(id);
}
Customer^ ModStansaController::QueryCustomerByN_orden(int n_orden){
	return customerDB->QueryById(n_orden);
}
List<Customer^>^ ModStansaController::QueryAllCustomer(){
	return customerDB->QueryAll();
}

//Metodos Estaticos de la Clase ModStansaController para Staff
void ModStansaController::AddStaff(Staff ^p){
	staffDB->Add(p);
}
void ModStansaController::UpdateStaff(Staff^p){
	staffDB->Update(p);
}
void ModStansaController::DeleteStaff(int id){
	staffDB->Delete(id);
}
Staff^ ModStansaController::QueryStaffById(int id){
	return staffDB->QueryById(id);
}
Staff^ ModStansaController::QueryStaffByDni(int dni){
	return staffDB->QueryById(dni);
}
List<Staff^>^ ModStansaController::QueryAllStaff(){
	return staffDB->QueryAll();
}

//Metodos Estaticos de la Clase ModStansaController para Staff
void ModStansaController::AddProduct(Product ^p){
	productDB->Add(p);
}
void ModStansaController::UpdateProduct(Product^p){
	productDB->Update(p);
}
void ModStansaController::DeleteProduct(int id){
	productDB->Delete(id);
}
Product^ ModStansaController::QueryProductById(int id){
	return productDB->QueryById(id);
}
List<Product^>^ ModStansaController::QueryAllProduct(){
	return productDB->QueryAll();
}