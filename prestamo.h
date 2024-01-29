#ifndef PRESTAMO_H
#define PRESTAMO_H
#include<iostream>
#include<string>
#include "bibliotecario.h"
//#include "lector.h"
#include "publicacion.h"


class Prestamo{
    private:
        int idpresta;
        string fech_presta, fech_devol;
        Bibliotecario *pBiblio;
       // Lector *pLector;
        Publicacion *pPubli;
    public:
        void ingresarPrestamo();
        void ingresarDevolucion();
        void verPrestamo();
        void verDevolucion();
        int separafecha(string fech, int d,int m,int y);
        void calcularMulta(string fech_presta,string fech_devol);
        /*void registrarPrestamo(int& tpresta, Prestamo presta[],Bibliotecario *,Lector *, Publicacion *);
        void registarDevolucion(int& tpresta, Prestamo presta[],Bibliotecario *,Lector *, Publicacion *);
        void imprimirPrestamo(int& tpresta, Prestamo presta[],Bibliotecario *,Lector *, Publicacion *);
        void imprimirDevolucion(int& tpresta, Prestamo presta[],Bibliotecario *,Lector *, Publicacion *);*/

};

#include "prestamo.cpp"
#endif