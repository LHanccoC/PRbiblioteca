#ifndef ADMIN_H
#define ADMIN_H

#include "biblio.h"
#include "lector.h"
#include "revistas.h"
class Admin{
    private:
        Bibliotecario bibliotecarios[100];
        int nBiblio = 0;
        int nAdministrador = 0;
        int nPublicaciones = 0;
        int nLector = 0;
        int nPrestamos = 0;
        Administrador administradores[100];
        Lector lectores[100];
        Publicacion *publicaciones[100];
        Prestamo prestamos[100];
    public:
        Admin();
        bool registrarBiblibliotecario(string,string,int,bool);
        void mostraBibliotecario(int);
        bool iniciarSesionBiblioteciario(string, string);
        void registrarAdministrador(string,string,bool);
        bool iniciarSesionAdministrador(string,string);
        void registrarLibros(string a, int b, string c, string d, int e,string f, string g, bool h,bool);
        void registrarRevistas(string a, int b, string c, string d, int e,string f, string g, bool h,bool);
        bool registrarLector(string, string ,int, bool);  
        void mostrarPublicaciones();
        bool realizarPrestamo(string, int, int, int, bool);
        bool devolverPrestamo(int,string,bool);
        void generarReporte();
};

#include "admin.cpp"
#endif