#ifndef PRESTAMO_H
#define PRESTAMO_H

#include "publicacion.h"
class Lector;
class Prestamo{
    private:
        Publicacion *publicacion;
        int idPrestamo;
        Lector *lector;
        string fechaPrestamo;
        string fechaDevolucion = "-";
        

    public:
        Prestamo();
        void setFechaPrest(string);
        void setFechaDevolucion(string);
        void setPublicacion(Publicacion *);
        void setId(int);    
 
        void setLector(Lector *);
        void getInfo();
        bool operator>(Prestamo);
        int getId();
        string getFechaDevolucion();
};
#include "lector.h"
#include "prestamo.cpp "

#endif