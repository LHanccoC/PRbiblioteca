#include "lector.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>

Lector :: Lector(string n,string d,int i){
    nombre = n;
    DNI = d;
    IDlector = i;
}

void Lector :: RealizarPrestamo(){
	ofstream archivo2;
	string rp,dni,tipo,tl;
	int n;
    archivo2.open("HPrestamos.txt",ios :: out);
    if(!archivo2){
        cout<<"No se pudo abrir el archivo "<<endl;
    }
    else{
        cout<<"Acceso correcto\n";
        cout<< "Desea realizar un prestamo ? : "<<endl;
	    cout<<"SI/NO:";
	    cin>>rp;
	    cin.ignore();
	    if(rp == "SI"){
       
	   do{
	   	cout<<"\nIntroduzca su nombre :"; cin>>n;
         archivo2 << n << endl;

         cout<<"\nIntroduzca su DNI :"; cin>>dni;
         archivo2 << dni << endl;

	     cout<<"\nTipo de publicacion prestada : "; cin>>tipo;
         archivo2 << tipo <<endl;

         cout<<"\nTitulo de la publicacion prestada : "; cin>>tl;
         archivo2 << tl <<endl;
         
         cout<< "Desea volver a realizar un prestamo ? : "<<endl;
	     cout<<"SI/NO:";
	     cin>>rp;
	   	
	     }while(rp == "SI");
		
	   }	
    
       archivo2.close();
    }

}


void Lector :: verHistorial(){
    ifstream archivo3;
    string nombrearchivo3;
    string lineatexto;
    int cl=0;
    cout<<"Indique nombre de archivo a acceder para lectura: ";
    cin>>nombrearchivo3;
    archivo3.open(nombrearchivo3.c_str(), ios::in);
    if(!archivo3.is_open()){
        cout<<"Error, archivo imposible de abrir\n";
    }
    else{
          
        while(!archivo3.eof()){
            archivo3 >> lineatexto;
            cl++;
            if( lineatexto.empty() ){
		        cout<<"\nNo hay prestamos "<<endl;
	           }
	       else{
		     cout<<cl<<":\t"<<lineatexto<<endl;
	       }  
         }
        archivo3.close();

    }

}
