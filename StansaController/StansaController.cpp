
#include "stdafx.h"
#include "StansaController.h"

using namespace StansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;

//Metodos de la Clase CustomerDB
void CustomerDB::Add(Customer ^ p){
	listCustomer->Add(p);
}
void CustomerDB::Delete(int id) {
	for (int i = 0; i < listCustomer->Count; i++){
		if (listCustomer[i]->id == id){
			listCustomer->RemoveAt(i);
		}
	}
}
void CustomerDB::Update(Customer^ p){
	for (int i = 0; i < listCustomer->Count; i++){
		if (listCustomer[i]->id == p->id){
			listCustomer[i]->n_orden = p->n_orden;
			listCustomer[i]->estado = p->estado;
			listCustomer[i]->name=p->name;
			listCustomer[i]->hora_fin=p->hora_fin;
			listCustomer[i]->hora_ini=p->hora_ini;
		}
	}
}
Customer^ CustomerDB::QueryById(int id	){ 
	for (int i = 0; i < listCustomer->Count; i++){
		if (listCustomer[i]->id == id){
			return listCustomer[i];
		}
	}
}
Customer^ CustomerDB::QueryByN_orden(int n_orden){ 
	for (int i = 0; i < listCustomer->Count; i++){
		if (listCustomer[i]->n_orden == n_orden){
			return listCustomer[i];
		}
	}
}
List<Customer^>^ CustomerDB::QueryAll(){ 
	return listCustomer;
}

//Metodos de la Clase StaffDB
void StaffDB::Add(Staff ^ p){
	listStaff->Add(p);
}
void StaffDB::Update(Staff^p){
	for (int i = 0; i < listStaff->Count; i++){
		if (listStaff[i]->id == p->id){
			listStaff[i]->dni = p->dni;
			listStaff[i]->name = p->name;
			listStaff[i]->name = p->name;
			listStaff[i]->hora_entrada = p->hora_entrada;
			listStaff[i]->hora_salida = p->hora_salida;
			listStaff[i]->puesto = p->puesto;
			listStaff[i]->Estado = p->Estado;		
		}
	}
}
void StaffDB::Delete(int id){
	for (int i = 0; i < listStaff->Count; i++){
		if (listStaff[i]->id == id){
			listStaff->RemoveAt(i);
		}
	}
}
Staff^ StaffDB::QueryById(int id){ 
	for (int i = 0; i < listStaff->Count; i++){
		if (listStaff[i]->id == id){
			return listStaff[i];
		}
	}
}
List<Staff^>^ StaffDB::QueryAll(){ 
	return listStaff;
}
Staff^ StaffDB::QueryByDni(int dni){
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM Product_2015_1 " +
		"WHERE dni=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	p1->Value = dni;
	comm->Parameters->Add(p1);
	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Staff ^p = nullptr;
	if (dr->Read()){
		p = gcnew Staff();
		p->dni = (int)dr["dni"];
		/*p->name = safe_cast<String^>(dr["name"]);
		if (dr["description"] != System::DBNull::Value)
		p->description = safe_cast<String ^>(dr["description"]); */
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return p;
} //Fin metodo QueryByDni

//Metodos de la Clase ProductDB
void ProductDB::Add(Product ^ p){
	listProduct->Add(p);
}
void ProductDB::Update(Product^p){
	for (int i = 0; i < listProduct->Count; i++){
		if (listProduct[i]->id == p->id){
			listProduct[i]->name=p->name;
			listProduct[i]->description=p->description;
			listProduct[i]->price=p->price;
			listProduct[i]->stock=p->stock;
		}
	}
}
void ProductDB::Delete(int id){
	for (int i = 0; i < listProduct->Count; i++){
		if (listProduct[i]->id == id){
			listProduct->RemoveAt(i);
		}
	}
}
Product^ ProductDB::QueryById(int id){
	for (int i = 0; i < listProduct->Count; i++){
		if (listProduct[i]->id == id){
			return listProduct[i];
		}
	}
}
List<Product^>^ ProductDB::QueryAll(){ 
	return listProduct;
}

//Metodos Estaticos de la Clase ModStansaController para Customer
void ModStansaController::AddCustomer(Customer ^ p){
	customerDB->Add(p);
	//PersistToXMLFile();
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