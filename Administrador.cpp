#include "Administrador.h"
#include "Reporte.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>

using namespace std;
Administrador :: Administrador(string id,string n,int na){
	IDadmin=id;
	nombre=n;
	nivelAcceso=na;
	numeroR=0;
}
void Administrador :: MostrarReportes(){
    ifstream archivo1;
    string nombrearchivo;
    string lineatexto;
    int cl=0;
    cout<<"Indique nombre de archivo a acceder para lectura: ";
    cin>>nombrearchivo;
    archivo1.open(nombrearchivo.c_str(), ios::in);
    if(!archivo1.is_open()){
        cout<<"Error, archivo imposible de abrir\n";
    }
    else{
          cout<<"Yo "<<nombre<<" "<<"de ID : "<<IDadmin<<endl;
	      cout<<"Nivel de acceso : "<<nivelAcceso<<endl;

        while(!archivo1.eof()){
            archivo1 >>lineatexto;
            cl++;
            if( numeroR == 0){
		        cout<<"\nNo hay reportes "<<endl;
	           }
	       else{
		     cout<<"\nTengo "<<" "<<numeroR<<"reportes : "<<endl;
		      for(int i=0;i<numeroR;i++){
			   cout<<"\t "; 
			   reportes[i] ->MostrarReporte();
		      }
	       }  
            cout<<cl<<":\t"<<lineatexto<<endl;
         }
        archivo1.close();

    }

}
	
	
void Administrador :: GenerarReportes(){
    ofstream archivo;
	string cadena;
	string rp,tipo;
	int id;

    archivo.open("reportes.txt",ios :: out);
    if(!archivo){
        cout<<"No se pudo abrir el archivo "<<endl;
    }
    else{
        cout<<"Acceso correcto\n";
        cout<< "Desea hacer un reporte ? : "<<endl;
	    cout<<"SI/NO";
	    cin>>rp;
	    cin.ignore();
	    if(rp == "SI"){
       
		cout << "Ingrese cantidad de reportes :"; cin>>numeroR;
	    for(int i=0;i<numeroR;i++){

	     cout<<"\nReporte N° :"; 
         cin>>id;
         archivo << id << endl;

	     cout<<"\nTipo de reporte : "; 
         cin.ignore();
         getline(cin,tipo);
         archivo << tipo <<endl;

	     cout<<"\nTitulo: "; cin>>cadena;
         archivo << cadena << endl;
	   
		 reportes[i] = new Reporte(id,tipo,cadena);
	   }	
     }
       archivo.close();

    }

	
}
