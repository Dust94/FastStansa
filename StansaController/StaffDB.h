//StaffDB
#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace FotoLibrary;

namespace StansaController {
	public ref class StaffDB
	{
	public:
		List<Staff^> ^ listStaff;
	public:
		static void Add(Staff ^);
		static void Update(Staff^);
		static void Delete(int id);
		static Staff^ QueryById(int id);
		static Staff^ QueryByDni(String^ dni);
		static List<Staff^>^ QueryAll();
	}; //Fin Clase StaffDB
}