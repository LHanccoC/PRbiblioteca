#ifndef LECTOR_H
#define LECTOR_H
#include <iostream>
#include <string.h>
using namespace std;

class Lector{
	private:
		int IDlector;
		string DNI;
		string nombre;
		string HistorialPrestamo[100];
	public:
		//Lector(int,string,string) ;
		void RealizarPrestamo();
		void verHistorial();
		
};

#endif
