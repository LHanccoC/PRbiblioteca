#ifndef BIBLIOTECARIO_H
#define BIBLIOTECARIO_H
#include<iostream>

class Bibliotecario{
    private:
        int id;
        char nombre[50];
    public:
        void ingresarDatos();
        void verBibliotecario();
        void registrarBibliotecario(int& tbiblio,Bibliotecario biblio[]);
        void imprimirB(int tbiblio,Bibliotecario biblio[]);
        void modificarBibliotecario(int& tbiblio,Bibliotecario biblio[]);
        int getid();
        char getnomb();
};

#include "bibliotecario.cpp"
#endif
