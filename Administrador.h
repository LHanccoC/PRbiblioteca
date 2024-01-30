#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
#include <iostream>
#include <string.h>
#include "Reporte.h"
class Administrador{
	private:
		string IDadmin;
		string nombre;
		int nivelAcceso;
		int numeroR;
		Reporte *reportes[100]; //variable de composicion
	public:
		Administrador(string,string,int);
		void GenerarReportes();
		void MostrarReportes();
		void AdministrarLector();
};
#include "Administrador.cpp"
#endif