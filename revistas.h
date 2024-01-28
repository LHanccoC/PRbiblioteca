#ifndef REVISTAS.H 
#define REVISTAS.H
#include <bits/stc++.h>

class Revista : public Publicacion{
    private:
        string ISNN;
        string volumen;
    public:
        Revista(string, int, string, string, int, string, string);
        void getinforev();    
}
#include "revistas.cpp"
#endif 