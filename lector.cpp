#include "lector.h"

Lector::Lector(string n, string d, int i){
    nombre = n;
    dni = d;
    id = i;
}
Lector::Lector(){
    
}

void Lector::getInfo(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Dni: "<<dni<<endl;
    cout<<"Id: "<<id<<endl;
}
    

void Lector::setPrestamo(Prestamo *p){
    prestamo = p;
}

void Lector::setNombre(string n){
    nombre = n;
}

void Lector::setDni(string d){
    dni = d;
}

void Lector::setId(int i){
    id = i;
}

int Lector::getId(){
    return id;
}

bool Lector::operator>(Lector lc){
    if(id > lc.id){
        return true;
    }
    return false;
}