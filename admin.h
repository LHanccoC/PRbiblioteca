#ifndef ADMIN_H
#define ADMIN_H

#include "biblio.h"
#include "lector.h"
#include "registro.h"
#include "revistas.h"
class Admin{
    private:
        Bibliotecario bibliotecarios[100];
        int nBiblio = 0;
        int nAdministrador = 0;
        int nPublicaciones = 0;
        Administrador administradores[100];
        Lector lectores[100];
        Publicacion *publicaciones[100];
        Registro registro;
    public:
        Admin();
        bool registrarBiblibliotecario(string,string,int);
        void mostraBibliotecario(int);
        bool iniciarSesionBiblioteciario(string, string);
        void registrarAdministrador(string,string);
        bool iniciarSesionAdministrador(string,string);
        void registrarLibros(string a, int b, string c, string d, int e,string f, string g);
        void registrarRevistas(string a, int b, string c, string d, int e,string f, string g);
};

#include "admin.cpp"
#endif