#ifndef CASILLA_H
#define CASILLA_H

#include <string>
using std::string;

class Casilla
{
    private:
        int ncasilla;
        int desplazamiento = 0;
    public :
        Casilla();
        Casilla(int p, int d);
        int get_numcasilla();    
        int get_desplazamiento();
        string toString();
        int mover();


};


#endif