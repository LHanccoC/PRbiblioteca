#ifndef PUBLIACION.H 
#define PUBLIACION.H
#include <bits/stc++.h>

class Publicacion {
    private:
        string titulo;
        int id;
        string autor;
        string fecha;
        int npagina;
    public:
        Publicacion(string, int, string, string, int);
        void getInfo();      
} 

#endif