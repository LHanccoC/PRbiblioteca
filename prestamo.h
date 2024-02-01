#ifndef PRESTAMO_H
#define PRESTAMO_H
#include "bibliotecario.h"



class Prestamo{
    private:
        int idpresta;
        string fech_presta, fech_devol;
        Bibliotecario *B;
        int b,x;
    public:
        void ingresarPrestamo();
        void verPrestamo(Bibliotecario *B);
        void setBibliotecario(int);
        void registrarPrestamo(int& tpresta, Prestamo presta[], Bibliotecario *B,int&);
        void imprimirPrestamo(int& tpresta, Prestamo presta[],Bibliotecario *B);
};

#include "prestamo.cpp"
#endif