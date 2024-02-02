#ifndef REVISTAS_H 
#define REVISTAS_H
#include <bits/stdc++.h>

using namespace std;
class Revista : public Publicacion{
    private:
        string ISNN;
        string volumen;
    public:
        Revista(string, int, string, string, int, string, string,bool);
        void getInfo();
        string getISNN();
        string getvolumen();
};
#include "publicacion.h"
#include "revistas.cpp"
#endif 