#ifndef REPORTE_H
#define REPORTE_H
#include <iostream>
#include <string.h>
using namespace std;
class Reporte{
	private:
		int IDreporte;
		string TipoReporte;
		string contenido;
	public:
		Reporte(int,string,string);
		void GenerarReporte();
		void MostrarReporte();
		
};
#include "Reporte.cpp"
#endif