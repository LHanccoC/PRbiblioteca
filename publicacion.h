#ifndef PUBLICACION.H 
#define PUBLICACION.H
#include <bits/stc++.h>

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
} 
#include "publicacion.cpp"
#endif