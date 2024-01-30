#include "libro.h"

Libro :: Libro(string f, string g) : Publicacion(string a, int b, string c, string d, int e){
    ISBN = f;
    editorial = g;
}

void Libro :: getinfolibro(){
    getInfo();
    cout << "ISBN del libro: " <<ISBN<<endl;
    cout << "Editorial del libro: " <<editorial<<endl;
}

string Publicacion :: getISBN(){
    return ISBN;
}

string Publicacion :: geteditorial(){
    return editorial;
}

