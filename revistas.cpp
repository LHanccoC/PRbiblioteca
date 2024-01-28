#include "revistas.h"

Revista :: Revista(string f, string g) : Publicacion(string a, int b, string c, string d, int e){
    ISNN = f;
    volumen = g;
}

void Revista :: getinforev(){
    getInfo();
    cout << "ISNN de la revista: " <<ISNN<<endl;
    cout << "Volumen de la revista: " <<volumen<<endl;
}
