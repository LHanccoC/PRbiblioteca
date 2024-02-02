#include "publicacion.h"

Publicacion :: Publicacion(string a, int b, string c, string d, int e){
    titulo = a;
    id = b;
    autor = c;
    fecha = d;
    nPagina = e;
}
Publicacion::Publicacion(){
    
}

void Publicacion :: getInfo(){
    cout << "El titulo es: " <<titulo<<endl;
    cout << "El id es: " <<id<<endl;
    cout << "El autor es: " <<autor<<endl;
    cout << "La fecha es: " <<fecha<<endl;
    cout << "Numero de paginas: " <<nPagina<<endl;
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