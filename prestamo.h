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
        void verPrestamo(Bibliotecario *pB);
        void registrarPrestamo(int& tpresta, Prestamo presta[], Bibliotecario *,int);
        void imprimirPrestamo(int& tpresta, Prestamo presta[],Bibliotecario *);
        void buscarbibliotecario();
};

#include "prestamo.cpp"
#endif