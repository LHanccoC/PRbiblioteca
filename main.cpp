#include<bits/stdc++.h>
#include "publicacion.h"
//#include "libro.h"
//#include "revistas.h"
#include "bibliotecario.h"
#include "prestamo.h"
const int MAX=100;
using namespace std;
int main() {
    Bibliotecario biblio[MAX];
    Prestamo presta[MAX];
    Publicacion *pP;
    int tbiblio=0, tpresta=0;
    fstream archivo;
    int op,op1;
    do{
        cout<<"\nBIENVENIDOS AL SISTEMA\n\n";
        cout<<"1. Gestionar Bibliotecario"<<endl;
        cout<<"2. Gestionar Prestamo"<<endl;
        cout<<"3. Gestionar ..."<<endl;
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
                }while(op1!=4);
                break;
        }
    }while(op!=4);




    return 0; 
}
