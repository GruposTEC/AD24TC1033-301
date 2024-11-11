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
        int get_numcasilla();
        void set_numcasilla(int n);
        int get_desplazamiento();
        void set_desplazamiento(int n);
        string toString();


};


#endif