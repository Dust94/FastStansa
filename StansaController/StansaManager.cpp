#include "stdafx.h"
#include "StansaController.h"

using namespace StansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;

//metodos de clase globlales para Customer
void StansaManager::AddCustomer(Customer^ c){}
void StansaManager::UpdateCustomer(Customer^ c){}
void StansaManager::DeleteCustomer(int id){}
Customer^ StansaManager::QueryCustomerById(int id){ return nullptr; }
Customer^ StansaManager::QueryCustomerByDni(String^ dni){ return nullptr; }
Customer^ StansaManager::QueryCustomerByCodigoPUCP(String^ codigoPUCP){ return nullptr; }
List<Customer^>^ StansaManager::QueryAllCustomer(){ return nullptr; }

//metodos de clase globlales para Staff
void StansaManager::AddStaff(Staff^ s){}
void StansaManager::UpdateStaff(Staff^ s){}
void StansaManager::DeleteStaff(int id){}
Staff^ StansaManager::QueryStaffById(int id){ return nullptr; }
Staff^ StansaManager::QueryStaffByDni(String^ dni){ return nullptr; }
List<Staff^>^ StansaManager::QueryAllStaff(){ return nullptr; }

//metodos de clase globlales para Product
void StansaManager::AddProduct(Product^ p){}
void StansaManager::UpdateProduct(Product^ p){}
void StansaManager::DeleteProduct(int id){}
Product^ StansaManager::QueryProductById(int id){ return nullptr; }
List<Product^>^ StansaManager::QueryAllProduct(){ return nullptr; }

//metodos de clase globlales para ModuloStansa
void StansaManager::AddModuloStansa(ModuloStansa^ m){}
void StansaManager::UpdateModuloStansa(ModuloStansa^ m){}
void StansaManager::DeleteModuloStansa(int id){}
ModuloStansa^ StansaManager::QueryModuloStansaById(int id){ return nullptr; }
ModuloStansa^ StansaManager::QueryModuloStansaByPlace(String^ place){ return nullptr; }
List<ModuloStansa^>^ StansaManager::QueryAllModuloStansa(){ return nullptr; }

//metodos de clase globlales para Attention
void StansaManager::AddAttention(Attention^ a){}
void StansaManager::UpdateAttention(Attention^ a){}
void StansaManager::DeleteAttention(int id){}
Attention^ StansaManager::QueryAttentionById(int id){ return nullptr; }
List<Attention^>^ StansaManager::QueryAllAttention(){ return nullptr; }
List<Attention^>^ StansaManager::QueryAllAttentionByModuloStansa(ModuloStansa^ modulo){ return nullptr; }
List<Attention^>^ StansaManager::QueryAllAttentionByModuloStansaAndCustomer(ModuloStansa^ modulo, Customer^ customer){ return nullptr; }
List<Attention^>^ StansaManager::QueryAllAttentionByModuloStansaAndStaff(ModuloStansa^ modulo, Staff^ staff){ return nullptr; }
List<Attention^>^ StansaManager::QueryAllAttentionByModuloStansaAndFecha(ModuloStansa^ modulo, String^ fecha){ return nullptr; }
List<Attention^>^ StansaManager::QueryAllAttentionByModuloStansaFechaAndCustomer(ModuloStansa^ modulo, String^ fecha, Customer^ customer){ return nullptr; }
List<Attention^>^ StansaManager::QueryAllAttentionByModuloStansaFechaAndStaff(ModuloStansa^ modulo, String^ fecha, Staff^ staff){ return nullptr; }