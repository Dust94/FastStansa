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
		 void Add(Customer ^);
		 void Update(Customer^);
		 void Delete(int);
		 Customer^ QueryById(int);
		 Customer^ QueryByN_orden(int n_orden);
		 List<Customer^>^ QueryAll();
	}; //Fin Clase CustomerDB
}