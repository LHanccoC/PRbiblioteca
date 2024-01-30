#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include "bibliotecario.h"
#include "prestamo.h"

void Prestamo::ingresarPrestamo(Bibliotecario *pB){
    cout<<"ID prestamo: ";cin>>idpresta;
    cin.ignore();
    cout<<"Fecha del prestamo (DD/MM/AAAA): ";cin>>fech_presta;
    cout<<"\nINGRESAR DATOS DEL BIBLIOTECARIO"<<endl;
    pB->ingresarDatos();
}


void Prestamo::verPrestamo(Bibliotecario *pB){
    cout<<"ID prestamo: "<<idpresta<<endl;
    cout<<"Fecha del prestamo: "<<fech_presta<<endl;
    pB->verBibliotecario();
}

void registrarPrestamo(int& tpresta, Prestamo presta[],Bibliotecario *pB){
    ofstream archivo;
    cout << "\nREGISTRAR PRESTAMO" << endl;
    char op;
    int idb,idp;
    tpresta=0;
    archivo.open("prestamo.dat", ios::app | ios::binary);
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo." << endl;
    } else {
        do{
            presta[tpresta].ingresarPrestamo(pB);
            archivo.write((char*)&presta[tpresta], sizeof(Prestamo));
            cout<<"Desea ingresar otro prestamo ? (S/N):";
            cin>>op;
            tpresta++; 
        }while(op=='S'||op=='s');
        archivo.close();
        
    }
}

void imprimirPrestamo(int& tpresta, Prestamo presta[],Bibliotecario *pB){
    cout << "\nLISTA DE PRESTAMOS\n";
    ifstream archivo;
    archivo.open("prestamo.dat", ios::in | ios::binary);
    if (!archivo.is_open()) {
        cout << "No se puedo abrir el archivo." << endl;
    } else {
            archivo.seekg(0, ios::end); 
            tpresta = archivo.tellg() / sizeof(Prestamo); 
            archivo.seekg(0, ios::beg); 
            for (int i = 0; i < tpresta; i++) {
                archivo.read((char*)&presta[i], sizeof(Prestamo));
                presta[i].verPrestamo(pB);
            }
            archivo.close();
        
    }
}
