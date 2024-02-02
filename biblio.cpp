#include "biblio.h"

Bibliotecario::Bibliotecario(){
}

void Bibliotecario::setNombre(string n){
    nombre = n;
}

void Bibliotecario::setId(int d){
    id = d;
}
void Bibliotecario::setPasswd(string d){
    passwd = d;
}

string Bibliotecario::getPasswd(){
    return passwd;
}
string Bibliotecario::getNombre(){
    return nombre;
}
int Bibliotecario::getId(){
    return id;
}