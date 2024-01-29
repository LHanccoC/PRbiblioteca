#include<bits/stdc++.h>
#include "publicacion.h"
#include "libro.h"
#include "revistas.h"
#include "bibliotecario.h"
#include "prestamo.h"

using namespace std;
int main() {
    Bibliotecario biblio[100];
    Prestamo presta[100];
    int tbiblio=0, tpresta=0;
    fstream archivo;
    int op,op1;
    do{
        cout<<"\nBIENVENIDOS AL SISTEMA\n\n";
        cout<<"1. Gestionar Bibliotecario"<<endl;
        cout<<"2. Gestionar Prestamo"<<endl;
        cout<<"3. Gestionar Publicidad"<<endl;
        cout<<"4. Salir"<<endl;
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
                        case 5:
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
                    cout<<"2. Ingresar devolucion"<<endl;
                    cout<<"3. Ver lista de prestamos"<<endl;
                    cout<<"4. Ver lista de devoluciones"<<endl;
                    cout<<"5. Volver al menu principal"<<endl;
                    cout<<"Ingrese opcion: ";cin>>op1;
                    switch(op1){
                        case 1:
                            //registrarPrestamo(tpresta,presta);
                            break;
                        case 2:
                           // imprimirPrestamo(tpresta,presta);
                            break;
                        case 3:
                           // registarDevolucion(tpresta,presta);
                            break;
                        case 4:
                           // imprimirDevolucion(tpresta,presta);
                            break;
                        case 5:
                            break;
                        default:
                             cout<<"Opción invalida"<<endl;
                    }
                }while(op1!=5);
                break;
        }
    }while(op!=4);




    return 0; 
}
