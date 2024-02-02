#include "prestamo.h"

Prestamo::Prestamo(){
}

void Prestamo::setFechaDevolucion(string f){
    fechaDevolucion = f;
    publicacion->setDisponible(true);
}

void Prestamo::setFechaPrest(string f){
    fechaPrestamo = f;
    publicacion->setDisponible(false);
}

void Prestamo::setPublicacion(Publicacion *p){
    publicacion = p;
}

void Prestamo::setLector(Lector *p){
    lector = p;
}

void Prestamo::setId(int i){
    idPrestamo = i;
}

void Prestamo::getInfo(){
    cout<<"ID del prestamo: "<<idPrestamo<<endl;
    cout<<"Fecha del prestamo: "<<fechaPrestamo<<endl;
    cout<<"Fecha de devolucion: "<<fechaDevolucion<<endl;
    cout<<"Publicacion: "<<endl;
    publicacion->getInfo();

    cout<<"Lector: "<<endl;
    lector->getInfo();
} 

int Prestamo::getId(){
    return idPrestamo;
}

bool Prestamo::operator>(Prestamo p){
    if(idPrestamo > p.idPrestamo){
        return true;
    }
    return false;
}


string Prestamo::getFechaDevolucion(){
    return fechaDevolucion;
}