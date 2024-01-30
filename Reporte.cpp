#include "reporte.h"
#include <iostream>
#include <string.h>
using namespace std;

Reporte :: Reporte (int i,string tr,string ct){
    IDreporte=i;
	TipoReporte=tr;
	contenido=ct;
}

void Reporte :: GenerarReporte(){
	cout<<"REPORTE "<<endl;
	
}

void Reporte :: MostrarReporte(){
	cout<<"Reporte N° "<<IDreporte <<endl;
	cout<<"Tipo de Reporte "<<TipoReporte<<endl;
	cout<<"Contenido : "<< contenido<<endl;
	
}