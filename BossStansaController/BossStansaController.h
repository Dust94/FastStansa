#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace FotoLibrary;
using namespace StansaController;

namespace BossStansaController {

	public ref class ModStansaDB
	{
		public:
			List<ModStansaController^> ^ listModStansa;
		public:
			void Add(ModStansaController ^);
			void Update(ModStansaController^);
			void Delete(int id);
			ModStansaController^ QueryById(int id);
			List<ModStansaController^>^ QueryAll();
	};

	public ref class ReporteBoss
	{
		public:
			ModStansaDB^ modStansaDB;
	};

	public ref class ReporteUsuario
	{
		public:
			ModStansaDB^ modStansaDB;
	};

	public ref class BossController
	{
		public:
			static ModStansaDB^ modStansaDB = gcnew ModStansaDB();
			static ReporteBoss^ reporteBoss = gcnew ReporteBoss();
			static ReporteUsuario^ reporteUsuario = gcnew ReporteUsuario();
		public:
			//metodos de clase globlales para ModStansaDB
			static void AddModStansaController(ModStansaController ^);
			static void UpdateModStansaController(ModStansaController^);
			static void DeleteModStansaController(int id);
			static ModStansaController^ QueryModStansaControllerById(int id);
			static List<ModStansaController^>^ QueryAllModStansaController();
	};
}
