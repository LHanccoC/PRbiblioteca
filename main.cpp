#include<bits/stdc++.h>
#include "Ordenacion.h"
#include "Busqueda.h"
#include "publicacion.h"
//#include "revistas.h"
#include "bibliotecario.h"
#include "prestamo.h"
#include "Administrador.h"
#include "lector.h"
#include "Reporte.h"
#include "libro.h"

const int MAX=100;
using namespace std;
int main() {
    Bibliotecario biblio[MAX];
    Prestamo presta[MAX];
    Publicacion *pP;
    int tbiblio=0, tpresta=0;
    fstream archivo;
    int op,op1;
    Administrador *admin[MAX];
    int nAdmin;
    Lector lectores[MAX];
    Publicacion *publicaciones[MAX];

    publicaciones[0]  = new Libro("La comedia humana",20399,"Honoré de Balzac","1999",253);
    publicaciones[1]  = new Libro("El Buscon",20397,"Francisco de Quevedo","1997",96);
    publicaciones[2]  = new Libro("Dracula",20359,"Bram Stroker","1979",210);
    publicaciones[3]  = new Libro("Fausto",20434,"Goethe","1983",237);
    publicaciones[4]  = new Libro("100 años de soledad",20430,"Gabriel García Márquez","1989",185);


    do{
        cout<<"\nBIENVENIDOS AL SISTEMA\n\n";
        cout<<"1. Gestionar Bibliotecario"<<endl;
        cout<<"2. Gestionar Prestamo"<<endl;
        cout<<"3. Gestionar Administrador"<<endl;
        cout<<"4. Gestionar ..."<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Ingrese opcion: ";cin>>op;
        switch(op){
            case 1:
                do{
                    cout<<"\nGESTIONAR BIBLIOTECARIO\n";
                    cout<<"1. Ingresar bibliotecario"<<endl;
                    cout<<"2. Ver lista de bibliotecario"<<endl;
                    cout<<"3. Modificar bibliotecario"<<endl;
                    cout<<"4. Volver al menu principal"<<endl;
                    cout<<"Ingrese opcion: ";cin>>op1;
                    switch(op1){
                        case 1:
                            registrarBibliotecario(tbiblio,biblio);
                            break;
                        case 2:
                            imprimirB(tbiblio,biblio);
                            break;
                        case 3:
                            modificarBibliotecario(tbiblio,biblio);
                            break;
                        case 4:
                            break;
                        default:
                            cout<<"Opción invalida"<<endl;
                    }

                }while(op1!=5);
                break;
            case 2:
                 do{
                    cout<<"\nGESTIONAR PRESTAMO\n";
                    cout<<"1. Ingresar prestamo"<<endl;
                    cout<<"2. Ver lista de prestamos"<<endl;
                    cout<<"3. Calcula multa"<<endl;
                    cout<<"4. Volver al menu principal"<<endl;
                    cout<<"Ingrese opcion: ";cin>>op1;
                    switch(op1){
                        case 1:
                            registrarPrestamo(tpresta,presta,biblio,pP);
                            break;
                        case 2:
                            imprimirPrestamo(tpresta,presta,biblio,pP);
                            break;
                        case 3:
                            presta[MAX].calcularMulta();
                            break;
                        case 4:
                            break;
                        default:
                             cout<<"OpciOn invalida"<<endl;
                    }
                }while(op1!=5);
                break;
            case 3:
                do{
                    cout<<"\nGESTIONAR ADMINISTRADOR\n";
                    cout<<"1. Registrar Administrador"<<endl;
                    cout<<"2. Mostrar Reportes"<<endl;
                    cout<<"3. Generar Reportes"<<endl;
                    cout<<"4. Volver al menu principal"<<endl;
                    cin>>op1;
                    switch (op1)
                    {
                        case 1:{
                            string n, id; 
                            cout<<"Ingrese el nombre: "; cin>>n;
                            cout<<"Ingrese el id: "; cin>>id;
                            admin[nAdmin] = new Administrador(id,n,0);
                            break;
                            }
                        case 2:
                            admin[nAdmin]->MostrarReportes();
                            break;
                        case 3:
                            admin[nAdmin]->GenerarReportes();
                            break;
                        
                        default:
                        break;
                    }
                }while(op1!=4);
            
        }
    }while(op!=4);




    return 0; 
}