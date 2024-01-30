#ifndef PRESTAMO_H
#define PRESTAMO_H

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
        void calcularMulta();
        void ingresarPrestamo(Bibliotecario *pB);
        void ingresarDevolucion(Bibliotecario *pB);
        void verPrestamo(Bibliotecario *pB);
        void separafecha(string fech,int &d,int &m,int &y);
        void registrarPrestamo(int& tpresta, Prestamo presta[],Bibliotecario *,Publicacion *);
        void imprimirPrestamo(int& tpresta, Prestamo presta[],Bibliotecario *, Publicacion *);

};

#include "prestamo.cpp"
#endif