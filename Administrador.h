#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

class Administrador{
    private:
        string nombre;
        string passwd;
    public:
        Administrador();
        Administrador(string,string);
        void setNombre(string);
        void setPasswd(string);
        string getNombre();
        string getPasswd();
};

#include "administrador.cpp"
#endif