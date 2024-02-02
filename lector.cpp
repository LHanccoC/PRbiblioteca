#include "lector.h"

Lector::Lector(string n, string d, int i){
    nombre = n;
    dni = d;
    id = i;
}
Lector::Lector(){
    
}
    
void Lector::setPrestado(bool b){
    prestado = b;
}

void Lector::setPrestamo(Prestamo *p){
    prestamo = p;
}

