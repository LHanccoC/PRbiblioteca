#ifndef PRESTAMO_H
#define PRESTAMO_H
#include "bibliotecario.h"



class Prestamo{
    private:
        int idpresta;
        string fech_presta, fech_devol;
        Bibliotecario *pBiblio;
    public:
        void ingresarPrestamo(Bibliotecario *pB);
        void ingresarDevolucion(Bibliotecario *pB);
        void verPrestamo(Bibliotecario *pB);
        void separafecha(string fech,int &d,int &m,int &y);
        void registrarPrestamo(int& tpresta, Prestamo presta[],Bibliotecario *);
        void imprimirPrestamo(int& tpresta, Prestamo presta[],Bibliotecario *);

};

#include "prestamo.cpp"
#endif