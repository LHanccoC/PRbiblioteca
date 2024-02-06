#include <bits/stdc++.h>
#include <windows.h> 

#include "biblio.h"
#include "publicacion.h"
#include "libro.h"
#include "revistas.h"
#include "lector.h"
#include "prestamo.h"

#include "administrador.h"
#include "admin.h"
#include "registro.h"
using namespace std;

int main(){
    int op;
    int op1;
    Admin admin;
    Registro registro(&admin);
    system("cls");
    cout<<"BIENVENIDO AL SISTEMA DE GESTION DE BIBLIOTECA";
    system("pause>nul");
    do{
        system("cls");
        cout<<"ELIGA UNA OPCION: "<<endl;
        cout<<"1. Ingresar como administrador"<<endl;
        cout<<"2. Ingresar como bibliotecario"<<endl;
        cout<<"3. Salir"<<endl;
        cin>>op;
        switch(op){
            case 1:{
                system("cls");
                string n, p;
                cout<<"Ingrese el usuario: ";cin>>n;
                cout<<"Ingrese el passwd: ";cin>>p;
            
                if(admin.iniciarSesionAdministrador(n,p)){
                    cout<<"Se inicio sesion ";
                    system("pause>nul");
                    //Menu de adminstrador
                    system("cls");
                    cout<<"BIENVENIDO AL MENU DE ADMINISTRADOR";
                    system("pause>nul");
                    system("cls");
                    do{
                    system("cls");
                    cout<<"ELIGA UNA OPCION: "<<endl;
                    cout<<"1. Registrar un nuevo administrador"<<endl;
                    cout<<"2. Registra un nuevo bibiliotecario"<<endl;
                    cout<<"3. Generar un reporte"<<endl;
                    cout<<"4. Volver al menu principal"<<endl;
                    cin>>op1;
                    
                        switch (op1){
                            case 1: {
                                system("cls");
                                string n;
                                string p;
                                cout<<"Ingrese el nombre del nuevo administrador: ";
                                cin>>n;
                                cout<<"Ingrese el passwd del nuevo administrador: ";
                                cin>>p;
                                admin.registrarAdministrador(n,p,true);
                                break;
                            }
                            case 2: {
                                system("cls");
                                string n;
                                string p;
                                int id;
                                cout<<"Ingrese el nombre del nuevo bibliotecario: ";
                                cin>>n;
                                cout<<"Ingrese el passwd del nuevo bibliotecario: ";
                                cin>>p;
                                cout<<"Ingrese el id del nuevo biblioteacario: ";
                                cin>>id;
                                if(admin.registrarBiblibliotecario(n,p,id,true)){
                                    cout<<"Se ha registrado el bibliotecario correctamente ";
                                }
                                else{
                                    cout<<"Ese id ya ha sido ocupado ";
                                }
                                break;
                            }
                            case 3: {
                                system("cls");
                                admin.generarReporte();
                                system("pause>nul");
                            }
                            default:
                                break;
                        }
                    }while(op1 != 4);
                }

                else{
                    cout<<"Passwd o usuario incorrecto ";
                    system("pause>nul");
                }
                
                break;
            }

            case 2: {
                system("cls");
                string n, p;
                cout<<"Ingrese el usuario: ";cin>>n;
                cout<<"Ingrese el passwd: ";cin>>p;
                if(admin.iniciarSesionBiblioteciario(n,p)){
                    system("cls");
                    cout<<"Se ha iniciado sesion";
                    system("pause>nul");

                    system("cls");
                    cout<<"BIENVENIDO AL MENU DE BIBLIOTECARIO";
                    system("pause>nul");
                    system("cls");
                    //menu del bibliotecario
                    do{
                        system("cls");
                        cout<<"ELIGA UNA OPCION: "<<endl;
                        cout<<"1. Registrar una nueva publicacion"<<endl;
                        cout<<"2. Registrar un lector"<<endl;
                        cout<<"3. Mostrar las publicaciones disponibles"<<endl;
                        cout<<"4. Realizar un prestamo"<<endl;
                        cout<<"5. Devolver un prestamo"<<endl;
                        cout<<"6. Mostrar lectores"<<endl;
                        cout<<"7. Volver al menu principal"<<endl;
                        cin>>op1;
                        switch(op1){
                            case 1:{
                                system("cls");
                                int op2;
                                cout<<"Elija el tipo de publicacion: "<<endl;
                                cout<<"1. Libro"<<endl;
                                cout<<"2. Revista"<<endl;
                                cout<<"3. Salir"<<endl;
                                string a, c, d, f, g;
                                int b ,e;
                                cin>>op2;
                                switch (op2){
                                    case 1:
                                        cout<<"Ingrese el titulo: ";
                                        cin>>a;
                                        cout<<"Ingrese el id: ";
                                        cin>>b;
                                        cout<<"Ingrese el autor: ";
                                        cin>>c;
                                        cout<<"Ingrese el fecha: ";
                                        cin>>d;
                                        cout<<"Ingresa nPagina: ";
                                        cin>>e;
                                        cout<<"Ingrese el ISBN: ";
                                        cin>>f;
                                        cout<<"Ingrese el editorial: ";
                                        cin>>g;
                                        admin.registrarLibros(a,b,c,d,e,f,g,true,true);                               
                                        break;
                                    case 2:
                                        cout<<"Ingrese el titulo: ";
                                        cin>>a;
                                        cout<<"Ingrese el id: ";
                                        cin>>b;
                                        cout<<"Ingrese el autor: ";
                                        cin>>c;
                                        cout<<"Ingrese el fecha: ";
                                        cin>>d;
                                        cout<<"Ingresa nPagina: ";
                                        cin>>e;
                                        cout<<"Ingrese el ISNN: ";
                                        cin>>f;
                                        cout<<"Ingrese el volumen: ";
                                        cin>>g;
                                        admin.registrarRevistas(a,b,c,d,e,f,g,true,true);     
                                        break;
                                    default:
                                        break;
                                }
                                break;
                            }

                            case 2: {
                                string n,dni;
                                int id;   
                                cout<<"Ingrese el nombre del nuevo lector: ";
                                cin>>n;
                                cout<<"Ingrese el dni del nuevo lector: ";
                                cin>>dni;
                                cout<<"Ingrese el id del nuevo lector:  ";
                                cin>>id;
                                if(admin.registrarLector(n,dni,id,true)){
                                    system("cls");
                                    cout<<"Se ha registrado el lector correctamente ";
                                    system("pause>nul");

                                }
                                else{
                                    system("cls");
                                    cout<<"Ese id ya ha sido ocupado ";                                
                                    system("pause>nul");
                                }
                                break;
                            }
                            case 3: {
                                system("cls");
                                admin.mostrarPublicaciones();
                                system("pause>nul");
                                break;
                            }
                            case 4: {
                                int i,b,c;
                                string fech;
                                cout<<"Ingrese el id del prestamo: ";
                                cin>>i;
                                cout<<"Ingrese la fecha del prestamo: ";
                                cin>>fech;
                                cout<<"Ingrese el id del lector: ";
                                cin>>b;
                                cout<<"Ingrese el id de la publicacion: ";
                                cin>>c;
                                if(admin.realizarPrestamo(fech,c,b,i,true)){
                                    system("cls");
                                    cout<<"Se ha realizado el prestamo con exito ";
                                    system("pause>nul");
                                }
                                else{
                                    system("cls");
                                    cout<<"No se ha podido realizar el prestamo ";
                                    system("pause>nul");
                                }
                                break;
                            }
                            case 5: {
                                int i;
                                string fech;
                                cout<<"Ingrese el id del prestamo a devolver: ";
                                cin>>i;
                                cout<<"Ingrese la fecha de la devolucion: ";
                                cin>>fech;
                                if(admin.devolverPrestamo(i,fech,true)){
                                    system("cls");
                                    cout<<"Se devolvio correctamente";
                                    system("pause>nul");
                                }
                                else{
                                    system("cls");
                                    cout<<"Ingreso mal el id o este prestamo ya fue devuelto";
                                    system("pause>nul");
                                }
                            }
                            case 6: {
                                system("cls");
                                admin.mostrarLectores();
                                system("pause>nul");
                            }
                        }
                        
                    }while(op1 != 7);
                }
                else{
                    cout<<"Passwd o usuario incorrecto ";
                    system("pause>nul");
                }
                break;
            }
                
        }
    }while(op != 3);
}