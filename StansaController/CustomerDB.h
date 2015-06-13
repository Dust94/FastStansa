//CustomerDB
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
		static void Add(Customer ^);
		static void Update(Customer^);
		static void Delete(int);
		static Customer^ QueryById(int);
		static Customer^ QueryByN_orden(int n_orden);
		static List<Customer^>^ QueryAll();
	}; //Fin Clase CustomerDB
}