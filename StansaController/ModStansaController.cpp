
#include "stdafx.h"
#include "ModStansaController.h"

using namespace StansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;

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
Staff^ ModStansaController::QueryStaffByDni(String^ dni){
	return staffDB->QueryByDni(dni);
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