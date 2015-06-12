// StansaController.h

#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace FotoLibrary;

namespace StansaController {
	public ref class CustomerDB
	{
		public:
			List<Customer^> ^ listCustomer;
		public:
			void Add(Customer ^);
			void Update(Customer^);
			void Delete(int );
			Customer^ QueryById(int);
			Customer^ QueryByN_orden(int n_orden);
			List<Customer^>^ QueryAll();
	}; //Fin Clase CustomerDB
	//MARCO AURELIO ES FELIZ ESTANDO AKL ALDO DE DUSTIN 
	public ref class StaffDB
	{
		public:
			List<Staff^> ^ listStaff;
		public:
			void Add(Staff ^);
			void Update(Staff^);
			void Delete(int id);
			Staff^ QueryById(int id);
			Staff^ QueryByDni(String^ dni);
			List<Staff^>^ QueryAll();
	}; //Fin Clase StaffDB

	public ref class ProductDB
	{
		public:
			List<Product^> ^ listProduct;
		public:
			void Add(Product ^);
			void Update(Product^);
			void Delete(int id);
			Product^ QueryById(int id);
			List<Product^>^ QueryAll();
	}; //Fin Clase ProductDB

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
			static Staff^ QueryStaffByDni(int dni);
			static List<Staff^>^ QueryAllStaff();

			//metodos de clase globlales para Product
			static void AddProduct(Product ^);
			static void UpdateProduct(Product^);
			static void DeleteProduct(int id);
			static Product^ QueryProductById(int id);
			static List<Product^>^ QueryAllProduct();
	}; //Fin Clase ModStansaController
}
