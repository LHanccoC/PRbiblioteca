#include "publicacion.h"

Publicacion :: Publicacion(string a, int b, string c, string d, int e){
    titulo = a;
    id = b;
    autor = c;
    fecha = d;
    npagina = e;
}

void Publicacion :: getInfo(){
    cout << "El titulo es: " <<titulo<<endl;
    cout << "El id es: " <<id<<endl;
    cout << "El autor es: " <<autor<<endl;
    cout << "Ea fecha es: " <<fecha<<endl;
    cout << "Numero de paginas: " <<npagina<<endl;
}

string Publicacion :: gettitulo(){
    return titulo;
}

int Publicacion :: getid(){
    return id;
}

string Publicacion :: getautor(){
    return autor;
}

string Publicacion :: getfecha(){
    return fecha;
}

int Publicacion :: getnpagina(){
    return npagina;
}



