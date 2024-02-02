#ifndef LECTOR_H
#define LECTOR_H

using namespace std;
class Prestamo;
class Lector {
    private:
        string nombre;
        string dni;
        int id;
        Prestamo *prestamo;
        bool prestado;
    public:
        Lector(string,string,int);
        Lector();
        void setPrestamo(Prestamo *p);
        void setPrestado(bool);
};
#include "prestamo.h"

#include "lector.cpp"

#endif