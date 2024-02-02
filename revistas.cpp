#include "revistas.h"

Revista::Revista(string a, int b, string c, string d, int e,string f, string g, bool h) : Publicacion(a,b,c,d,e,h){
    ISNN = f;
    volumen = g;
}

void Revista::getInfo(){
    cout << "El titulo es: " <<titulo<<endl;
    cout << "El id es: " <<id<<endl;
    cout << "El autor es: " <<autor<<endl;
    cout << "La fecha es: " <<fecha<<endl;
    cout << "Numero de paginas: " <<nPagina<<endl;   
    cout << "ISNN de la revista: " <<ISNN<<endl;
    cout << "Volumen de la revista: " <<volumen<<endl;
}

string Revista :: getISNN(){
    return ISNN;
}

string Revista :: getvolumen(){
    return volumen;
}