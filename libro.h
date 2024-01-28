#ifndef LIBRO.H 
#define LIBRO.H
#include <bits/stc++.h>

class Libro {
    private:
        string ISBN;
        string editorial;
    public:
        Libro(string, int, string, string, int, string, string);
        void getinfolibro();
}
#include "libro.cpp"
#endif 