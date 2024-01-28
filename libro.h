#ifndef LIBRO_H 
#define LIBRO_H
#include <bits/stdc++.h>

using namespace std;
class Libro : public Publicacion{
    private:
        string ISBN;
        string editorial;
    public:
        Libro(string, int, string, string, int, string, string);
        void getinfolibro();
};
#include "publicacion.h"
#include "libro.cpp"
#endif 
