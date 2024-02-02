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
        int nPagina;
    public:
        Publicacion(string, int, string, string, int);
        Publicacion();
        void getInfo(); 
        string getTitulo();
        int getId();
        string getAutor();
        string getFecha();
        int getnPagina();     
}; 
#include "publicacion.cpp"
#endif