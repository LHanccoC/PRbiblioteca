#ifndef BIBLIOTECARIO_H
#define BIBLIOTECARIO_H

#include "prestamo.h"

class Bibliotecario{
    private:
        string nombre;
        string passwd;
        int id;
    public:
        Bibliotecario();
        void setNombre(string);
        void setPasswd(string);
        void setId(int);      
        string getPasswd();
        string getNombre();
        int getId();
        
        
};

#include "biblio.cpp"
#endif