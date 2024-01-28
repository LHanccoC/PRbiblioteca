#ifndef PUBLICACION_H 
#define PUBLICACION_H
#include <bits/stdc++.h>

using namespace std;
class Publicacion {
    protected:
        string titulo;
        int id;
        string autor;
        string fecha;
        int npagina;
    public:
        Publicacion(string, int, string, string, int);
        void getInfo();      
}; 
#include "publicacion.cpp"
#endif
