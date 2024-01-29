#include<iostream>
#include<string>
#include "bibliotecario.h"
//#include "Lector.h"
#include "publicacion.h"
#include "prestamo.h"

void Prestamo::ingresarPrestamo(){
    cout<<"\nREGISTRO DE PRESTAMO\n";
    cout<<"ID prestamo: "<<idpresta<<endl;
    cout<<"Fecha del prestamo (DD/MM/AAAA): "<<fech_presta<<endl;
}

void Prestamo::ingresarDevolucion(){
    cout<<"\nREGISTRO DE PRESTAMO\n";
    cout<<"ID prestamo: "<<idpresta<<endl;
    cout<<"Fecha del prestamo (DD/MM/AAAA): "<<fech_presta<<endl;
    cout<<"Fecha de la devolución (DD/MM/AAAA): "<<fech_devol<<endl;
}

void Prestamo::verPrestamo(){
    cout<<"\nPRESTAMOS\n";
    cout<<"ID prestamo: "<<idpresta<<endl;
    cout<<"Fecha del prestamo: "<<fech_presta<<endl;
    cout<<"Fecha de la devolucion"<<fech_devol<<endl;
}

void Prestamo::verDevolucion(){
    cout<<"\nDEVOLUCIONES\n";
    cout<<"ID prestamo: "<<idpresta<<endl;
    cout<<"Fecha del prestamo: "<<fech_presta<<endl;
    cout<<"Fecha de la devolucion"<<fech_devol<<endl;
}
int Prestamo::separafecha(string fech,int d,int m,int y){
    size_t pos=0;
    string dia,mes,anio;

    pos=fech_presta.find("/");
    dia=fech_presta.substr(0,pos);
    fech_presta.erase(0,pos+1);

    pos=fech_presta.find("/");
    mes=fech_presta.substr(0,pos);
    fech_presta.erase(0,pos+1);

    anio=fech_presta;
    d=stoi(dia),m=stoi(mes),y=stoi(anio);
    return d,m,y;
}

void Prestamo::calcularMulta(string fech_presta,string fech_devol){
    cout<<"\nCALCULO DE LA MULTA\n";
    size_t pos=0;
    int d,m,y;
    int d2,m2,y2;
    float dDias,multa;

    separafecha(fech_presta,d,m,y);
    separafecha(fech_devol,d2,m2,y2);

    dDias=(y*360+m*30+d)-(y2*360+m2*30+d2);
    if(dDias>3){
        multa=dDias*0.50;
        cout<<"El total de la multa es: "<<multa<<endl;
    }else{
        cout<<"No se aplica multa."<<endl;
    }
}
/*
void registrarPrestamo(int& tpresta, Prestamo presta[],Bibliotecario *pB,Lector *pL, Publicacion *pP){
    ofstream archivo;
    cout << "\nREGISTRAR PRESTAMO" << endl;
    char op;
    archivo.open("prestamo.dat", ios::app | ios::binary);
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo." << endl;
    } else {
        do{
            tpresta=0;
            presta[tpresta].ingresarPrestamo();
            archivo.write((char*)&presta[tpresta], sizeof(Prestamo));
            cout<<"Desea ingresar otro? (S/N):";
            cin>>op;
            tpresta++; 
        }while(op=='S'||op=='s');
        archivo.close();
        archivo.open("prestamo.dat", ios::in | ios::out | ios::binary);
        if (archivo.is_open()) {
            archivo.seekp(0, ios::beg);
            archivo.write((char*)&tpresta, sizeof(int));
            archivo.close();
        } else {
            cout << "No se pudo abrir el archivo para actualizar el nÃºmero de registros." << endl;
        }
    }
}

void registarDevolucion(int& tpresta, Prestamo presta[],Bibliotecario *pB,Lector *pL, Publicacion *pP){
    ofstream archivo;
    cout << "\nREGISTRAR DEVOLUCION" << endl;
    char op;
    archivo.open("devolucion.dat", ios::app | ios::binary);
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo." << endl;
    } else {
        do{
            tpresta=0;
            presta[tpresta].ingresarDevolucion();
            archivo.write((char*)&presta[tpresta], sizeof(Prestamo));
            cout<<"Desea ingresar otro? (S/N):";
            cin>>op;
            tpresta++; 
        }while(op=='S'||op=='s');
        archivo.close();
        archivo.open("devolucion.dat", ios::in | ios::out | ios::binary);
        if (archivo.is_open()) {
            archivo.seekp(0, ios::beg);
            archivo.write((char*)&tpresta, sizeof(int));
            archivo.close();
        } else {
            cout << "No se pudo abrir el archivo para actualizar el numero de registros." << endl;
        }
    }
}

void imprimirPrestamo(int& tpresta, Prestamo presta[],Bibliotecario *,Lector *, Publicacion *){
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

void imprimirDevolucion(int& tpresta, Prestamo presta[],Bibliotecario *,Lector *, Publicacion *){
    cout << "\nLISTA DE DEVOLUCIONES\n";
    ifstream archivo;
    archivo.open("devolucion.dat", ios::in | ios::binary);
    if (!archivo.is_open()) {
        cout << "No se puedo abrir el archivo." << endl;
    } else {
            archivo.seekg(0, ios::end); 
            tpresta = archivo.tellg() / sizeof(Prestamo); 
            archivo.seekg(0, ios::beg); 
            for (int i = 0; i < tpresta; i++) {
                archivo.read((char*)&presta[i], sizeof(Prestamo));
                presta[i].verDevolucion();
            }
            archivo.close();
        
    }
}*/