#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include "bibliotecario.h"
//#include "Lector.h"
#include "publicacion.h"
#include "prestamo.h"

void Prestamo::ingresarPrestamo(Bibliotecario *pB){
    cout<<"ID prestamo: ";cin>>idpresta;
    cin.ignore();
    cout<<"Fecha del prestamo (DD/MM/AAAA): ";cin>>fech_presta;
    cout<<"\nINGRESAR DATOS DEL BIBLIOTECARIO"<<endl;
    pB->ingresarDatos();
}

void Prestamo::ingresarDevolucion(Bibliotecario *pB){
    ingresarPrestamo(pB);
    cout<<"Fecha de la devolución (DD/MM/AAAA): ";cin>>fech_devol;
}

void Prestamo::verPrestamo(Bibliotecario *pB){
    cout<<"ID prestamo: "<<idpresta<<endl;
    cout<<"Fecha del prestamo: "<<fech_presta<<endl;
    pB->verBibliotecario();
}

void Prestamo::separafecha(string fech, int& d,int& m,int& y){
    size_t pos=0;
    string dia,mes,anio;

    pos=fech.find("/");
    dia=fech.substr(0,pos);
    fech.erase(0,pos+1);

    pos=fech.find("/");
    mes=fech.substr(0,pos);
    fech.erase(0,pos+1);

    anio=fech;
    d=stoi(dia);
    m=stoi(mes);
    y=stoi(anio);
}

void Prestamo::calcularMulta(){
    cout<<"\nCALCULO DE LA MULTA\n";
    int d,m,y;
    int d2,m2,y2;
    float dDias,multa;

    cout<<"Ingresar fecha del prestamo (DD/MM/AAAA): ";cin>>fech_presta;
    cout<<"Ingresar fecha de la devolucion (DD/MM/AAAA): ";cin>>fech_devol;

    separafecha(fech_presta,d,m,y);
    separafecha(fech_devol,d2,m2,y2);

    dDias=(y2*360+m2*30+d2)-(y*360+m*30+d);
    if(dDias>3){
        multa=dDias*1.00;
        cout<<"El total de la multa es: "<<multa<<endl;
    }else{
        cout<<"No se aplica multa."<<endl;
    }
}

void registrarPrestamo(int& tpresta, Prestamo presta[],Bibliotecario *pB,Publicacion *pP){
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

void imprimirPrestamo(int& tpresta, Prestamo presta[],Bibliotecario *pB, Publicacion *){
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
