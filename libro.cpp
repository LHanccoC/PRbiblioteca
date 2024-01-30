#include "libro.h"

Libro :: Libro(string a, int b, string c, string d, int e,string f, string g) : Publicacion(a,b,c,d,e){
    ISBN = f;
    editorial = g;
}

void Libro :: getinfolibro(){
    getInfo();
    cout << "ISBN del libro: " <<ISBN<<endl;
    cout << "Editorial del libro: " <<editorial<<endl;
}

string Libro :: getISBN(){
    return ISBN;
}

string Libro :: geteditorial(){
    return editorial;
}

