#include "administrador.h"

Administrador::Administrador(){
}

Administrador::Administrador(string n,string d){
    nombre = n;
    passwd = d;
}

void Administrador::setNombre(string n){
    nombre = n;
}
void Administrador::setPasswd(string p){
    passwd = p;
}

string Administrador::getNombre(){
    return nombre;
}

string Administrador::getPasswd(){
    return passwd;
}