#include "revistas.h"

Revista::Revista(string a, int b, string c, string d, int e,string f, string g) : Publicacion(a,b,c,d,e){
    ISNN = f;
    volumen = g;
}

void Revista :: getinforev(){
    getInfo();
    cout << "ISNN de la revista: " <<ISNN<<endl;
    cout << "Volumen de la revista: " <<volumen<<endl;
}

string Revista :: getISNN(){
    return ISNN;
}

string Revista :: getvolumen(){
    return volumen;
}