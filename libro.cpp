#include "libro.h"

Libro :: Libro(string a, int b, string c, string d, int e,string f, string g, bool h) : Publicacion(a,b,c,d,e,h){
    ISBN = f;
    editorial = g;
}

void Libro::getInfo(){
    cout << "El titulo es: " <<titulo<<endl;
    cout << "El id es: " <<id<<endl;
    cout << "El autor es: " <<autor<<endl;
    cout << "La fecha es: " <<fecha<<endl;
    cout << "Numero de paginas: " <<nPagina<<endl;
    cout << "ISBN del libro: " <<ISBN<<endl;
    cout << "Editorial del libro: " <<editorial<<endl;
}

string Libro :: getISBN(){
    return ISBN;
}

string Libro :: geteditorial(){
    return editorial;
}