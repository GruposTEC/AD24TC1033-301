#ifndef TABLERO_H
#define TABLERO_H

#include <vector>
#include "casilla.h"

using std::vector;


class Tablero
{
    private:    
        vector<Casilla> casillas;
        int ncasillas;
        void creacion_tablero();
    public:
        Tablero();
        Tablero(int n);
        void impresion_tablero();

};


#endif 