#include "stdafx.h"
#include "ProductDB.h"

using namespace StansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;


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
	p3->Value = safe_cast<float>(p->price);
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
	p3->Value = safe_cast<float>(p->price);
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
			p->description = safe_cast<String^>(dr["description"]);
		if (dr["price"] != System::DBNull::Value)
			p->price = safe_cast<double>(dr["price"]);
		if (dr["stock"] != System::DBNull::Value)
			p->stock = (int)dr["stock"];
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
			p->description = safe_cast<String^>(dr["description"]);
		if (dr["price"] != System::DBNull::Value)
			p->price = safe_cast<double>(dr["price"]);
		if (dr["stock"] != System::DBNull::Value)
			p->stock = (int)dr["stock"];
		productList->Add(p);
	}

	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return productList;
}