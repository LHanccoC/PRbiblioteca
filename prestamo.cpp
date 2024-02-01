#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include "bibliotecario.h"
#include "prestamo.h"

void Prestamo::ingresarPrestamo(){
    cout<<"\nID prestamo: ";cin>>idpresta;
    cin.ignore();
    cout<<"Fecha del prestamo (DD/MM/AAAA): ";getline(cin,fech_presta);
}


void Prestamo::verPrestamo(){
    cout<<"ID prestamo: "<<idpresta<<endl;
    cout<<"Fecha del prestamo: "<<fech_presta<<endl;
}

void Prestamo::registrarPrestamo(int& tpresta, Prestamo presta[],Bibliotecario *B,int &tbiblio){
    ofstream archivo;
    cout << "\nREGISTRAR PRESTAMO" << endl;
    char op;
    int b;
    bool idValido=false;
    archivo.open("prestamo.dat", ios::app | ios::binary);
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo." << endl;
    } else {
        do{
            presta[tpresta].ingresarPrestamo();
            imprimirB(tbiblio,B);
            do{
                cout<<"Ingrese el id del bibliotecario:";cin>>b;
                cout<<b<<endl;
                int i=0;
                while (B[i].getid()!=0){
                    if (b == B[i].getid()) {
                        idValido = true;
                        break;
                    }
                    i++;
                }
                if (idValido==false) {
                    cerr << "No existe ese id de usuario" << endl;
                }
            } while (idValido==false);
            
            archivo.write((char*)&presta[tpresta], sizeof(Prestamo));
            cout<<"Desea ingresar otro prestamo ? (S/N):";
            cin>>op;
            tpresta++; 
        }while(op=='S'||op=='s');
        archivo.close();
        
    }
}

void imprimirPrestamo(int &tpresta, Prestamo presta[],Bibliotecario *pB){
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
                presta[i].verPrestamo();
            }
            archivo.close();
        
    }
}
