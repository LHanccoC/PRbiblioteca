#include "publicacion.h"

Publicacion :: Publicacion(string a, int b, string c, string d, int e, bool h){
    titulo = a;
    id = b;
    autor = c;
    fecha = d;
    nPagina = e;
    disponible = h;
}
Publicacion::Publicacion(){
    
}

bool Publicacion::getDisponible(){
    return disponible;
}

string Publicacion :: getTitulo(){
    return titulo;
}

int Publicacion :: getId(){
    return id;
}

string Publicacion :: getAutor(){
    return autor;
}

string Publicacion :: getFecha(){
    return fecha;
}

int Publicacion :: getnPagina(){
    return nPagina;
}

void Publicacion :: setDisponible(bool b){
    disponible = b;
}