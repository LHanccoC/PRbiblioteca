#include<iostream>
#include<fstream>
#include<iomanip>
#include<string.h>

using namespace std;

void Bibliotecario::ingresarDatos(){
    cout << "\nIngrese Id del bibliotecario: ";
    cin >> id; 
    cin.ignore();
    cout << "Ingrese el nombre: ";
    cin.getline(nombre, 50);
}

void Bibliotecario::verBibliotecario() {
    cout << "\nId Bibliotecario: " << id;
    cout << "\nNombres: " << nombre;
}
void registrarBibliotecario(int& tbiblio,Bibliotecario biblio[]){
    ofstream archivo;
    cout << "\nREGISTRAR BIBLIOTECARIO" << endl;
    char op;
    archivo.open("bibliotecario.dat", ios::app | ios::binary);
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo." << endl;
    } else {
        do{
            tbiblio=0;
            biblio[tbiblio].ingresarDatos();
            archivo.write((char*)&biblio[tbiblio], sizeof(Bibliotecario));
           // archivo.write((char*)&biblio[tbiblio-1], sizeof(Bibliotecario));
            cout<<"Desea ingresar otro? (S/N):";
            cin>>op;
            tbiblio++; 
        }while(op=='S'||op=='s');
        archivo.close();
        archivo.open("bibliotecario.dat", ios::in | ios::out | ios::binary);
        if (archivo.is_open()) {
            archivo.seekp(0, ios::beg);
            archivo.write((char*)&tbiblio, sizeof(int));
            archivo.close();
        } else {
            cout << "No se pudo abrir el archivo para actualizar el número de registros." << endl;
        }
    }
}

void imprimirB(int tbiblio, Bibliotecario biblio[]){
    cout << "\nLISTA DE BIBLIOTECARIOS\n";
    ifstream archivo;
    archivo.open("bibliotecario.dat", ios::in | ios::binary);
    //archivo.read((char*) &biblio, sizeof(Bibliotecario));
    if (!archivo.is_open()) {
        cout << "No se puedo abrir el archivo." << endl;
    } else {
            archivo.seekg(0, ios::end); 
            tbiblio = archivo.tellg() / sizeof(Bibliotecario); 
            archivo.seekg(0, ios::beg); 
            for (int i = 0; i < tbiblio; i++) {
                archivo.read((char*)&biblio[i], sizeof(Bibliotecario));
                biblio[i].verBibliotecario();
               // archivo.read((char*) &biblio[i], sizeof(Bibliotecario));
            }
            archivo.close();
        
    }
    
}

void modificarBibliotecario(int& tbiblio,Bibliotecario biblio[]){
    int numB;
    cout << "\nMODIFICANDO UN REGISTRO\n\n";
    fstream archivo;
    
        cout << "Lista actual de empleados:\n";
        archivo.open("bibliotecario.dat", ios::in | ios::binary);
        archivo.seekg(0, ios::end); 
        tbiblio = archivo.tellg() / sizeof(Bibliotecario); 
        archivo.seekg(0, ios::beg); 
        for (int i = 0; i < tbiblio; i++) {
            archivo.read((char*)&biblio[i], sizeof(Bibliotecario));
            biblio[i].verBibliotecario();
        }
        archivo.close();
        cout << "\n\nDigite num del bibliotecario a modificar: ";
        cin >> numB;
        numB--;
        archivo.open("bibliotecario.dat",ios::in|ios::out|ios::binary);
        if (numB >= 0 && numB < tbiblio) {
            archivo.seekp(numB * sizeof(Bibliotecario), ios::beg);
            biblio[numB].ingresarDatos();
            archivo.write((char*)&biblio[numB], sizeof(Bibliotecario));
            cout<<"Modificado con exito"<<endl;
        } else {
            cout<<"Numero no valido"; 
        }
}