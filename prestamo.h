#ifndef PRESTAMO_H
#define PRESTAMO_H
#include "bibliotecario.h"



class Prestamo{
    private:
        int idpresta;
        string fech_presta, fech_devol;
        Bibliotecario *B;
    public:
        void ingresarPrestamo();
        void verPrestamo();
        void registrarPrestamo(int& tpresta, Prestamo presta[], Bibliotecario *B,int&);
        void imprimirPrestamo(int& tpresta, Prestamo presta[],Bibliotecario *B);
};

#include "prestamo.cpp"
#endif