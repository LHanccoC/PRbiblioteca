#include "registro.h"

Registro::Registro(){
}

Registro::Registro(Admin *a){
    admin = a;
    archivo.open("./Registros/bibliotecarios.txt", ios::in);
    int id;
    string nombre,passwd;
    if(archivo.good()){
        while(!archivo.eof()){
            archivo>>id>>nombre>>passwd;
            admin->registrarBiblibliotecario(nombre,passwd,id,false);
        }
    }
    else{
        system("cls");
        cout<<"El archivo bibliotecarios no se pudo abrir correctamente";
        system("pause>nul");
    }
    archivo.close();

    archivo.open("./Registros/administradores.txt", ios::in);
    if(archivo.good()){
        while(!archivo.eof()){
            archivo>>nombre>>passwd;
            admin->registrarAdministrador(nombre,passwd,false);
        }
    }
    else{
        system("cls");
        cout<<"El archivo administradores no se pudo abrir correctamente";
        system("pause>nul");
    }
    archivo.close();

    archivo.open("./Registros/lectores.txt");
    if(archivo.good()){
        while(!archivo.eof()){
            archivo>>id>>nombre>>passwd;
            admin->registrarLector(nombre,passwd,id,false);
        }
    }
    else{
        system("cls");
        cout<<"El archivo lectores no se pudo abrir correctamente";
        system("pause>nul");
    }
    archivo.close();

    archivo.open("./Registros/publicaciones.txt");
    string titulo, autor, fecha, is, vol;
    int nPagina;
    bool disponible;
    string aux;

    if(archivo.good()){
        while(!archivo.eof()){
            archivo>>aux>>titulo>>id>>autor>>fecha>>nPagina>>is>>vol>>disponible;
            if(aux == "l"){
                admin->registrarLibros(titulo,id,autor,fecha,nPagina,is,vol,disponible,false);
            }
            if(aux == "r"){
                admin->registrarRevistas(titulo,id,autor,fecha,nPagina,is,vol,disponible,false);
            }
        }
    }
    else{
        system("cls");
        cout<<"El archivo publicaciones no se pudo abrir correctamente";
        system("pause>nul");
    }
    archivo.close();

    archivo.open("./Registros/prestamos.txt");

    int pres,lec,pub;
    if(archivo.good()){
        while(!archivo.eof()){
            archivo>>pres>>fecha>>lec>>pub;
            admin->realizarPrestamo(fecha,pub,lec,pres,false);
        }  
    }
    else{
        system("cls");
        cout<<"El archivo prestamos no se pudo abrir correctamente";
        system("pause>nul");
    }
    archivo.close();
    archivo.clear();
    
    archivo.open("./Registros/devueltos.txt");
    string line;
    string fech;
    int idpres;
    if(archivo.good()){
        while(archivo){
            archivo>>idpres>>fech;
            admin->devolverPrestamo(idpres,fech,false);
        }
    }
    else{
        system("cls");
        cout<<"El archivo prestamos devueltos no se pudo abrir correctamente";
        system("pause>nul");
    }
    archivo.close();
}