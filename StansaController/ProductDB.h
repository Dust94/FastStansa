//ProductDB
#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace FotoLibrary;


namespace StansaController {
	public ref class ProductDB
	{
	public:
		static List<Product^> ^ listProduct;
	public:
		static void Add(Product ^);
		static void Update(Product^);
		static void Delete(int id);
		static Product^ QueryById(int id);
		static List<Product^>^ QueryAll();
	}; //Fin Clase ProductDB
}