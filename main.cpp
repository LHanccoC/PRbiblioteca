#include<bits/stdc++.h>
//#include "Ordenacion.h"
//#include "Busqueda.h"
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
    int tbiblio=0, tpresta=0;
    fstream archivo;
    int op,op1;
    Administrador *admin[MAX];
    int nAdmin;
    Lector *lectores[MAX];
    int nLectores;

    // Publicacion *publicaciones[MAX];
    // publicaciones[0] = new Publicacion("asd",32,"asssa","aad",232);




    do{
        cout<<"\nBIENVENIDOS AL SISTEMA\n\n";
        cout<<"1. Gestionar Bibliotecario"<<endl;
        cout<<"2. Gestionar Prestamo"<<endl;
        cout<<"3. Gestionar Administrador"<<endl;
        cout<<"4. Gestionar Lectores"<<endl;
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

                }while(op1!=4);
                break;
            case 2:
                 do{
                    cout<<"\nGESTIONAR PRESTAMO\n";
                    cout<<"1. Ingresar prestamo"<<endl;
                    cout<<"2. Ver lista de prestamos"<<endl;
                    cout<<"3. Volver al menu principal"<<endl;
                    cout<<"Ingrese opcion: ";cin>>op1;
                    switch(op1){
                        case 1:
                            registrarPrestamo(tpresta,presta,biblio,tbiblio);
                            break;
                        case 2:
                            imprimirPrestamo(tpresta,presta,biblio);
                            break;
                        case 3:
                            break;
                        default:
                             cout<<"OpciOn invalida"<<endl;
                    }
                }while(op1!=3);
                break;
            case 3:
                do{
                    cout<<"\nGESTIONAR ADMINISTRADOR\n";
                    cout<<"1. Registrar Administrador"<<endl;
                    cout<<"2. Mostrar Reportes"<<endl;
                    cout<<"3. Generar Reportes"<<endl;
                    cout<<"4. Volver al menu principal"<<endl;
                    cin>>op1;
                    switch (op1){
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
                        case 4:
                            break;
                        default:
                            cout<<"Opncion invalida"<<endl;
                        break;
                    }
                }while(op1!=4);
            case 4:
                do{
                    cout<<"\nGESTIONAR LECTORES\n";
                    cout<<"1. Registrar LECTORES"<<endl;
                    cout<<"2. Realizar prestamo "<<endl;
                    cout<<"3. Mostrar historial"<<endl;
                    cout<<"4. Volver al menu principal"<<endl;
                    cin>>op1;
                    switch (op1)
                    {
                        case 1:{
                            string n,dni; 
                            int id;
                            cout<<"Ingrese el nombre: "; cin>>n;
                            cout<<"Ingrese el dni: "; cin>>dni;
                            cout<<"Ingrese el id: "; cin>> id;
                            lectores[nLectores] = new Lector(n,dni,id);
                            break;
                            }
                        case 2:
                            lectores[nLectores]->RealizarPrestamo();
                            break;
                        case 3:
                            lectores[nLectores]->verHistorial();
                            break;
                        case 4:
                            break;
                        default:
                            cout<<"Opcion invalida"<<endl;
                        break;
                    }
                }while(op1!=4);
        }
    }while(op!=5);




    return 0; 
}
