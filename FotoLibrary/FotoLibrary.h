// FotoLibrary.h
#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace FotoLibrary {
	public ref class Persona
	{
		public:
			int id; // Solo se ingresan los valores de la base de datos. No se reinicia cada dia.
			String^ dni;
			String^ name;
			String^ sexo; // Masculino(M) Femenino(F) sera luego un char
	}; // Fin Clase Persona

	public ref class Customer:Persona
	{
		public:
			int n_orden; //Se setea a 0 cada dia
			DateTime^ hora_ini; //Setea
			DateTime^ hora_fin;
			String^ estado;  //Customer: Esperando o Finalizado. 
	}; // Fin Clase Customer

	public ref class Staff:Persona
	{
		public:
			DateTime^ hora_entrada; //Hora de Entrada al Trabajo
			DateTime^ hora_salida; //Hora de Salida del Trabajo
			String^ puesto;
			String^ password;
			String^ user;
	}; // Fin Clase Staff

	public ref class Product
	{
		public:
			int id;
			String^ name;
			String^ description;
			double price;
			int stock;
		
	};// Fin Clase Product

	public ref class SaleDetail { //Boleta
	public:
		int quantity;
		double subTotal; //Producto*cantidad
		Product^ product; //1 Producto
	}; // Fin Clase SaleDetail

	public ref class Sale {
	public:
		int id;
		double total;
		DateTime^ date; // Dia de la Venta
		Staff^ staff; //Quien ejecuto la venta
		Customer^ customer; //Para Obtener el Numero de Orden del Usuario
		List<SaleDetail^>^ details; //Varias Boletas en un Proceso de Venta
	};// Fin Clase Sale.

}
