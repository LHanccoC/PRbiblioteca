#include "admin.h"

Admin::Admin(){
}

bool Admin::registrarBiblibliotecario(string n,string p, int id, bool in){
    //Luego implementar un metedo de ordenacion y busqueda
    for(int i = 0; i < nBiblio; i++){
        if(bibliotecarios[i].getId() == id){
            return false;
        }
    }
    //
    bibliotecarios[nBiblio].setNombre(n);
    bibliotecarios[nBiblio].setId(id);
    bibliotecarios[nBiblio].setPasswd(p);
    nBiblio++;
    if(in){
        ofstream archivo;
        archivo.open("./Registros/bibliotecarios.txt",ios::app);
        archivo<<id<<" "<<n<<" "<<p<<endl;
        archivo.close();
    }
    return true;
}

bool Admin::iniciarSesionAdministrador(string nombre, string passwd){
    for(int i = 0; i < nAdministrador; i++){
        if(administradores[i].getNombre() == nombre && administradores[i].getPasswd() == passwd){
            return true;
        }
    }
    return false;
}

void Admin::mostrarLectores(){
    for(int i = 0; i < nLector; i++){
        lectores->getInfo();
        cout<<endl;
        cout<<"--------------------------------------------------";
        cout<<endl;

    }
}
void Admin::registrarAdministrador(string nombre, string passwd, bool in){
    administradores[nAdministrador].setNombre(nombre);
    administradores[nAdministrador].setPasswd(passwd);
    nAdministrador++;
    if(in){
        ofstream archivo;
        archivo.open("./Registros/administradores.txt",ios::app);
        archivo<<nombre<<" "<<passwd<<endl;
        archivo.close();
    }
}
bool Admin::iniciarSesionBiblioteciario(string nombre, string passwd){
    for(int i = 0; i < nBiblio; i++){
        if(bibliotecarios[i].getNombre() == nombre && bibliotecarios[i].getPasswd() == passwd){
            return true;
        }
    }
    return false;
}

void Admin::registrarLibros(string a, int b, string c, string d, int e,string f, string g,bool h, bool in){
    publicaciones[nPublicaciones] = new Libro(a,b,c,d,e,f,g,h);
    nPublicaciones++;
    if(in){
        ofstream archivo;
        archivo.open("./Registros/publicaciones.txt",ios::app);
        archivo<<"l "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<endl;
        archivo.close();
    }
}

void Admin::registrarRevistas(string a, int b, string c, string d, int e,string f, string g,bool h, bool in){
    publicaciones[nPublicaciones] = new Revista(a,b,c,d,e,f,g,h);
    nPublicaciones++;
    if(in){
        ofstream archivo;
        archivo.open("./Registros/publicaciones.txt",ios::app);
        archivo<<"r "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<endl;
        archivo.close();
    }
}

bool Admin::registrarLector(string n, string dni, int id, bool in){
    for(int i = 0; i < nLector; i++){
        if(lectores[nLector].getId() == id){
            return false;
        }
    }
    lectores[nLector].setNombre(n);
    lectores[nLector].setDni(dni);
    lectores[nLector].setId(id);
    nLector++;
    if(in){
        ofstream archivo;
        archivo.open("./Registros/lectores.txt",ios::app);
        archivo<<id<<" "<<n<<" "<<dni;
        archivo.close();
    }
    return true;
}

void Admin::mostrarPublicaciones(){
    for(int i = 0; i < nPublicaciones; i++){
        if(publicaciones[i]->getDisponible()){
            publicaciones[i]->getInfo();
            cout<<endl;
            cout<<"--------------------------------------------------";
            cout<<endl;
        }
    }
}

bool Admin::devolverPrestamo(int id,string fech, bool in){
    int indice = -1;
    for(int i = 0; i < nPrestamos; i++){
        if(prestamos[i].getId() == id){
            indice = i;
            break;
        }
    }
    
    if(indice == -1){
        return false;
    }
    else{
        if(prestamos[indice].getFechaDevolucion() != "-"){
            return false;
        }
        else{
            prestamos[indice].setFechaDevolucion(fech);
            if(in){
                ofstream archivo;
                archivo.open("./Registros/devueltos.txt",ios::app);
                archivo<<id<<" "<<fech<<" "<<endl;
                archivo.close();
            }
            return true;
        }
    }
}

bool Admin::realizarPrestamo(string n, int idPub, int idLec, int idPre,bool in){
    //aplicar ordenacion y busqueda;
    
    for(int i = 0; i < nPrestamos; i++){
        if(prestamos[i].getId() == idPre){
            return false;
        }
    }   
    int indice = -1;
    for(int i = 0; i < nLector; i++){
        if(lectores[i].getId() == idLec){
            indice = i;
            break;
        }
    }

    if(indice != -1){
        
        int indice1 = -1;   
        for(int i = 0; i < nPublicaciones; i++){
            if(publicaciones[i]->getId() == idPub){
                    indice1 = i;
            }
        }
        
        if(indice1 != -1 && publicaciones[indice1]->getDisponible()){
            
            prestamos[nPrestamos].setId(idPre);
            prestamos[nPrestamos].setLector(&lectores[indice]);
            prestamos[nPrestamos].setPublicacion(publicaciones[indice1]);
            prestamos[nPrestamos].setFechaPrest(n);
            nPrestamos++;
            if(in){
                ofstream archivo;
                archivo.open("./Registros/prestamos.txt",ios::app);
                archivo<<idPre<<" "<<n<<" "<<idLec<<" "<<idPub<<endl;
                archivo.close();
            }
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

void Admin::generarReporte(){
    for(int i = 0; i < nPrestamos; i++){
        prestamos[i].getInfo();
        cout<<endl;
        cout<<"--------------------------------------------------";
        cout<<endl;
    }
}