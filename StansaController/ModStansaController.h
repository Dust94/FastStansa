#include "StaffDB.h"
#include "CustomerDB.h"
#include "ProductDB.h"

#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace FotoLibrary;

namespace StansaController {
	public ref class ModStansaController
	{
	public:
		static CustomerDB^ customerDB = gcnew CustomerDB();
		static StaffDB^ staffDB = gcnew StaffDB();
		static ProductDB^ productDB = gcnew ProductDB();
	public://Atributos Publicos de cada Mod de Stansa
		int id; //Identificador para el Modulo de Stansa. Ejem: 1 = Stansa Arte
		String^ ubicacion; //Ejem: Arte, Ciencias, Arqui, etc.
		int operatingMachines;
	public:
		//metodos de clase globlales para Customer
		static void AddCustomer(Customer ^);
		static void UpdateCustomer(Customer^);
		static void DeleteCustomer(int id);
		static Customer^ QueryCustomerById(int id);
		static Customer^ QueryCustomerByN_orden(int n_orden);
		static List<Customer^>^ QueryAllCustomer();

		//metodos de clase globlales para Staff
		static void AddStaff(Staff ^);
		static void UpdateStaff(Staff^);
		static void DeleteStaff(int id);
		static Staff^ QueryStaffById(int id);
		static Staff^ QueryStaffByDni(String^ dni);
		static List<Staff^>^ QueryAllStaff();

		//metodos de clase globlales para Product
		static void AddProduct(Product ^);
		static void UpdateProduct(Product^);
		static void DeleteProduct(int id);
		static Product^ QueryProductById(int id);
		static List<Product^>^ QueryAllProduct();
	}; //Fin Clase ModStansaController
}