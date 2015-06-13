//ProductDB
#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace FotoLibrary;


namespace StansaController {
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
}