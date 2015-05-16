// FotoLibrary.h
#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace FotoLibrary {
	public ref class Customer
	{
		public:
			int n_orden; //Se setea a 0 cada dia
			int id; // Solo se ingresan los valores de la base de datos. No se reinicia cada dia.
			String^ estado;
			String^ name;
			DateTime^ hora_ini;
			DateTime^ hora_fin;
	}; // Fin Clase Customer

	public ref class Staff
	{
		public:  //Atributos Privados del Usuario
			int id; // Solo se ingresan los valores de la base de datos. No se reinicia cada dia.
			int dni;
			String^ name;
			String^ Estado;
			DateTime^ hora_entrada;
			DateTime^ hora_salida;
			String^ puesto;
			//ModStansa^ modStansa;

	}; // Fin Clase Staff

	public ref class Product
	{
		public:
			int id;
			String^ name;
			String^ description;
			double price;
			int stock;
		public:
			Product(){}; //Constructor por defecto
			Product(String^name, double price, int stock){ //Constructor Rapido
				this->name = name;
				this->price = price;
				this->stock = stock;
			};		
	};// Fin Clase Product

	public ref class SaleDetail { //Boleta
	public:
		int quantity;
		double subTotal;
		Product^ product;
		Staff^ Staff;
	};// Fin Clase SaleDetail

	public ref class Sale {
	public:
		int id;
		double total;
		char status; //Vendido
		DateTime^ date; // Dia de la Venta
		Customer^ customer;
		List<SaleDetail^>^ details; //Varias Boletas en un Proceso de Venta
	};// Fin Clase Sale


}
