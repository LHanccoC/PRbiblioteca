#ifndef REGISTRO_H
#define REGISTRO_H

#include "admin.h"
class Registro{
    private:
        Admin *admin;   
        ifstream archivo;
    public:
        Registro(Admin *);
        Registro();
};
#include "registro.cpp"
#endif