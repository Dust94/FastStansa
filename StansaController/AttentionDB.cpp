#include "stdafx.h"
#include "StansaController.h"


using namespace StansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;

//Metodos de la Clase AttentionDB
void AttentionDB::Add(Attention^ a){
	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "INSERT INTO AttentionDB " +
		" (fecha, n_orden, hora_ini, hora_fin, estado, customerId, moduloStansaId, staffId)" +
		" VALUES (@p1,@p2,@p3,@p4,@p5,@p6,@p7,@p8)";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::Int);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::Int);
	SqlParameter^ p7 = gcnew SqlParameter("@p7",
		System::Data::SqlDbType::Int);
	SqlParameter^ p8 = gcnew SqlParameter("@p8",
		System::Data::SqlDbType::Int);

	p1->Value = a->fecha; //String
	p2->Value = a->n_orden; //int
	p3->Value = a->hora_ini; //String
	p4->Value = a->hora_fin; //String
	p5->Value = a->estado; // String
	p6->Value = a->customer->id; //int
	p7->Value = a->moduloStansa->id; //int
	p8->Value = a->staff->id; //int

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
void AttentionDB::Update(Attention^ a){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "UPDATE AttentionDB " +
		"SET fecha=@p1, n_orden=@p2, hora_ini=@p3, hora_fin=@p4, estado=@p5, customerId=@p6 , moduloStansaId=@p7 , staffId=@p8  " +
		" WHERE id=@p9";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::Int);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::Int);
	SqlParameter^ p7 = gcnew SqlParameter("@p7",
		System::Data::SqlDbType::Int);
	SqlParameter^ p8 = gcnew SqlParameter("@p8",
		System::Data::SqlDbType::Int);
	SqlParameter^ p9 = gcnew SqlParameter("@p9",
		System::Data::SqlDbType::Int);

	p1->Value = a->fecha; //String
	p2->Value = a->n_orden; //int
	p3->Value = a->hora_ini; //String
	p4->Value = a->hora_fin; //String
	p5->Value = a->estado; // String
	p6->Value = a->customer->id; //int
	p7->Value = a->moduloStansa->id; //int
	p8->Value = a->staff->id; //int
	p9->Value = a->id; //int

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
void AttentionDB::Delete(int id){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "DELETE FROM Attention_DB " +
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
Attention^ AttentionDB::QueryById(int id){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM Attention_DB " +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	p1->Value = id; // int

	comm->Parameters->Add(p1);
	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();


	//Paso 3.1: Procesamos los resultados	
	Attention ^ a = nullptr;
	if (dr->Read()){
		a = gcnew Attention();
		a->customer = gcnew Customer();
		a->moduloStansa = gcnew ModuloStansa();
		a->staff = gcnew Staff();
		a->id = (int)dr["id"];
		if (dr["fecha"] != System::DBNull::Value)
			a->fecha = safe_cast<DateTime^>(dr["fecha"]);
		if (dr["n_orden"] != System::DBNull::Value)
			a->n_orden = safe_cast<int>(dr["n_orden"]);
		if (dr["hora_ini"] != System::DBNull::Value)
			a->hora_ini = safe_cast<DateTime^>(dr["hora_ini"]);
		if (dr["hora_fin"] != System::DBNull::Value)
			a->hora_fin = safe_cast<DateTime^>(dr["hora_fin"]);
		if (dr["estado"] != System::DBNull::Value)
			a->estado = safe_cast<String^>(dr["estado"]);
		if (dr["customerId"] != System::DBNull::Value)
			a->customer->id = safe_cast<int>(dr["customerId"]);
		if (dr["moduloStansaId"] != System::DBNull::Value)
			a->moduloStansa->id = safe_cast<int>(dr["moduloStansaId"]);
		if (dr["staffId"] != System::DBNull::Value)
			a->staff->id = safe_cast<int>(dr["staffId"]);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return a;
}
List<Attention^>^ AttentionDB::QueryAll(){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM Attention_DB ";

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados
	List<Attention^>^ AttentionList = gcnew List<Attention^>();
	while (dr->Read()){
		Attention^a = gcnew Attention();
		a->customer = gcnew Customer();
		a->moduloStansa = gcnew ModuloStansa();
		a->staff = gcnew Staff();
		a->id = (int)dr["id"];
		if (dr["date"] != System::DBNull::Value)
			a->fecha = safe_cast<DateTime^>(dr["date"]);
		if (dr["orderNumber"] != System::DBNull::Value)
			a->n_orden = safe_cast<int>(dr["orderNumber"]);
		if (dr["inTime"] != System::DBNull::Value)
			a->hora_ini = safe_cast<DateTime^>(dr["inTime"]);
		if (dr["outTime"] != System::DBNull::Value)
			a->hora_fin = safe_cast<DateTime^>(dr["outTime"]);
		if (dr["status"] != System::DBNull::Value)
			a->estado = safe_cast<String^>(dr["status"]);
		if (dr["idCustomer"] != System::DBNull::Value)
			a->customer->id = safe_cast<int>(dr["idCustomer"]);
		if (dr["idModStansa"] != System::DBNull::Value)
			a->moduloStansa->id = safe_cast<int>(dr["idModStansa"]);
		if (dr["idStaff"] != System::DBNull::Value)
			a->staff->id = safe_cast<int>(dr["idStaff"]);

		AttentionList->Add(a);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return AttentionList;
}


List<Attention^>^ AttentionDB::QueryAllByModuloStansa(ModuloStansa^ modulo){
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM Attention_DB " +
		"WHERE idModStansa=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	p1->Value = modulo->id;
	comm->Parameters->Add(p1);

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados
	List<Attention^>^ AttentionList = gcnew List<Attention^>();
	while (dr->Read()){
		Attention^a = gcnew Attention();
		a->customer = gcnew Customer();
		a->moduloStansa = gcnew ModuloStansa();
		a->staff = gcnew Staff();
		a->id = (int)dr["id"];
		if (dr["date"] != System::DBNull::Value)
			a->fecha = safe_cast<DateTime^>(dr["date"]);
		if (dr["orderNumber"] != System::DBNull::Value)
			a->n_orden = safe_cast<int>(dr["orderNumber"]);
		if (dr["inTime"] != System::DBNull::Value)
			a->hora_ini = safe_cast<DateTime^>(dr["inTime"]);
		if (dr["outTime"] != System::DBNull::Value)
			a->hora_fin = safe_cast<DateTime^>(dr["outTime"]);
		if (dr["status"] != System::DBNull::Value)
			a->estado = safe_cast<String^>(dr["status"]);
		if (dr["idCustomer"] != System::DBNull::Value)
			a->customer->id = safe_cast<int>(dr["idCustomer"]);
		if (dr["idModStansa"] != System::DBNull::Value)
			a->moduloStansa->id = safe_cast<int>(dr["idModStansa"]);
		if (dr["idStaff"] != System::DBNull::Value)
			a->staff->id = safe_cast<int>(dr["idStaff"]);

		AttentionList->Add(a);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return AttentionList;
}
Attention^ AttentionDB::QueryAllByModuloStansaAndCustomer(ModuloStansa^ modulo, Customer^ customer){ //Paso 1: Se abre la conexión

	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM Attention_DB " +
		" WHERE idModStansa=@p1 AND  idCustomer=@p2 ";

	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	p1->Value = modulo->id;
	p2->Value = customer->id;
	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados
	
	Attention ^ a = nullptr;
	if (dr->Read()){
		Attention^a = gcnew Attention();
		a->customer = gcnew Customer();
		a->moduloStansa = gcnew ModuloStansa();
		a->staff = gcnew Staff();
		a->id = (int)dr["id"];
		if (dr["date"] != System::DBNull::Value)
			a->fecha = safe_cast<DateTime^>(dr["date"]);
		if (dr["orderNumber"] != System::DBNull::Value)
			a->n_orden = safe_cast<int>(dr["orderNumber"]);
		if (dr["inTime"] != System::DBNull::Value)
			a->hora_ini = safe_cast<DateTime^>(dr["inTime"]);
		if (dr["outTime"] != System::DBNull::Value)
			a->hora_fin = safe_cast<DateTime^>(dr["outTime"]);
		if (dr["status"] != System::DBNull::Value)
			a->estado = safe_cast<String^>(dr["status"]);
		if (dr["idCustomer"] != System::DBNull::Value)
			a->customer->id = safe_cast<int>(dr["idCustomer"]);
		if (dr["idModStansa"] != System::DBNull::Value)
			a->moduloStansa->id = safe_cast<int>(dr["idModStansa"]);
		if (dr["idStaff"] != System::DBNull::Value)
			a->staff->id = safe_cast<int>(dr["idStaff"]);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return a;
}
List<Attention^>^ AttentionDB::QueryAllByModuloStansaAndStaff(ModuloStansa^ modulo, Staff^ staff){ return nullptr; }
List<Attention^>^ AttentionDB::QueryAllByModuloStansaAndFecha(ModuloStansa^ modulo, String^ fecha){ return nullptr; }
List<Attention^>^ AttentionDB::QueryAllByModuloStansaFechaAndCustomer(ModuloStansa^ modulo, String^ fecha, Customer^ customer){ return nullptr; }
List<Attention^>^ AttentionDB::QueryAllByModuloStansaFechaAndStaff(ModuloStansa^ modulo, String^ fecha, Staff^ staff){ return nullptr; }
Attention^ AttentionDB::QueryByFechaNorderModuloStansa(DateTime^ fecha, int n_order, int idModuloStansa){ return nullptr; }; //Debo Mandarle la fecha actual

List<Attention^>^ AttentionDB::QueryAllByModuloStansaStatus(int idModuloStansa, String^ estadoCustomer){
		//Paso 1: Se abre la conexión
		SqlConnection^ conn;
		conn = gcnew SqlConnection();
		conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
			"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
		conn->Open();
		//Paso 2: Preparamos la sentencia
		SqlCommand^ comm = gcnew SqlCommand();
		comm->Connection = conn;
		comm->CommandText = "SELECT * FROM Attention_DB " +
			" WHERE idModStansa=@p1 AND status LIKE @p2";

		SqlParameter^ p1 = gcnew SqlParameter("@p1",
			System::Data::SqlDbType::Int);
		SqlParameter^ p2 = gcnew SqlParameter("@p2",
			System::Data::SqlDbType::VarChar);
		p1->Value = idModuloStansa;
		p2->Value = "%" + estadoCustomer + "%";
		comm->Parameters->Add(p1);
		comm->Parameters->Add(p2);


		//Paso 3: Ejecución de la sentencia
		SqlDataReader^ dr = comm->ExecuteReader();
		//Paso 3.1: Procesamos los resultados
		List<Attention^>^ AttentionList = gcnew List<Attention^>();
		while (dr->Read()){
			Attention^a = gcnew Attention();
			a->customer = gcnew Customer();
			a->staff = gcnew Staff();
			a->moduloStansa = gcnew ModuloStansa();

			a->id = (int)dr["id"];
			if (dr["date"] != System::DBNull::Value)
				a->fecha = dr->GetDateTime(1); //Columna 1 "date"
			if (dr["orderNumber"] != System::DBNull::Value)
				a->n_orden = safe_cast<int>(dr["orderNumber"]);
			if (dr["inTime"] != System::DBNull::Value)
				a->hora_ini = dr->GetDateTime(3); //Columna 3 "inTime"
			if (dr["outTime"] != System::DBNull::Value)
				a->hora_fin = dr->GetDateTime(4); //Columna 4 "outTime"
			if (dr["status"] != System::DBNull::Value)
				a->estado = safe_cast<String^>(dr["status"]);
			if (dr["idCustomer"] != System::DBNull::Value)
				a->customer->id = safe_cast<int>(dr["idCustomer"]);
			if (dr["idModStansa"] != System::DBNull::Value)
				a->moduloStansa->id = safe_cast<int>(dr["idModStansa"]);
			if (dr["idStaff"] != System::DBNull::Value)
				a->staff->id = safe_cast<int>(dr["idStaff"]);

			AttentionList->Add(a);
		}
		//Paso 4: Cerramos el dataReader y la conexión con la BD
		dr->Close();
		conn->Close();
		return AttentionList;
	
};