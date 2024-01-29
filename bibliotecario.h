#ifndef BIBLIOTECARIO_H
#define BIBLIOTECARIO_H
#include<iostream>


const int MAX=50;
class Bibliotecario{
    private:
        int id;
        char nombre[MAX], apellido[MAX];
    public:
        //Bibliotecario();
        void ingresarDatos();
        void verBibliotecario();
        void registrarBibliotecario(int& tbiblio,Bibliotecario biblio[]);
        void imprimirB(int tbiblio,Bibliotecario biblio[]);
        void modificarBibliotecario(int& tbiblio,Bibliotecario biblio[]);
        void eliminarB(int& tbiblio,Bibliotecario biblio[]);
        void imprimirB(int& tbiblio,Bibliotecario biblio[]);
};

#include "bibliotecario.cpp"
#endif
