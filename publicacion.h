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
        bool disponible = true;
    public:
        Publicacion(string, int, string, string, int,bool);
        Publicacion();
        virtual void getInfo() = 0;
        string getTitulo();
        int getId();
        string getAutor();
        string getFecha();
        int getnPagina();
        bool getDisponible();
        void setDisponible(bool b);
}; 
#include "publicacion.cpp"
#endif