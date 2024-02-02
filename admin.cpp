#include "admin.h"

Admin::Admin(){
}

bool Admin::registrarBiblibliotecario(string n,string p, int id){
    //Luego implementar un metedo de ordenacion y busqueda
    for(int i = 0; i < nBiblio; i++){
        if(bibliotecarios[i].getId() == id){
            return false;
        }
    }
    //
    bibliotecarios[nBiblio].setNombre(n);
    bibliotecarios[nBiblio].setId(id);
    bibliotecarios[nBiblio].setPasswd(p);
    nBiblio++;
    return true;
}

bool Admin::iniciarSesionAdministrador(string nombre, string passwd){
    for(int i = 0; i < nAdministrador; i++){
        if(administradores[i].getNombre() == nombre && administradores[i].getPasswd() == passwd){
            return true;
        }
    }
    return false;
}

void Admin::registrarAdministrador(string nombre, string passwd){
    administradores[nAdministrador].setNombre(nombre);
    administradores[nAdministrador].setPasswd(passwd);
    nAdministrador++;
}
bool Admin::iniciarSesionBiblioteciario(string nombre, string passwd){
    for(int i = 0; i < nBiblio; i++){
        if(bibliotecarios[i].getNombre() == nombre && bibliotecarios[i].getPasswd() == passwd){
            return true;
        }
    }
    return false;
}

void Admin::registrarLibros(string a, int b, string c, string d, int e,string f, string g){
    publicaciones[nPublicaciones] = new Libro(a,b,c,d,e,f,g);
}

void Admin::registrarRevistas(string a, int b, string c, string d, int e,string f, string g){
    publicaciones[nPublicaciones] = new Revista(a,b,c,d,e,f,g);
}