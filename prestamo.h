#ifndef PRESTAMO_H
#define PRESTAMO_H

#include "publicacion.h"
class Lector;
class Prestamo{
    private:
        Publicacion *publicacion;
        int idPrestamo;
        Lector *lector;
        string fechaPrestamo();
        string fechaDevolucion();

    public:
        Prestamo();
        void setFechaPrest();
        void setFechaDevolucion();
        void setPublicacion(Publicacion *);
        void setId();
        void setLector(Lector *);
};

#include "prestamo.cpp "

#endif