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
    public:
        Lector(string,string,int);
        Lector();
        void setPrestamo(Prestamo *p);
        void setNombre(string);
        void setDni(string);
        void setId(int);
        int getId();
        void getInfo();     
        bool operator>(Lector);
};
#include "prestamo.h"

#include "lector.cpp"

#endif