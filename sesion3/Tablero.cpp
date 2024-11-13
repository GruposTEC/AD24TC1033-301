#include <iostream>
#include "tablero.h"

using std::cout;
using std::endl;

Tablero::Tablero()
{
    ncasillas = 100;
    creacion_tablero();
}

Tablero::Tablero(int n)
{
    ncasillas = n;
    creacion_tablero();
}

void Tablero::creacion_tablero(){
    for(int i = 0 ; i < ncasillas ; i++)
    {
        Casilla c(i,0);
        casillas.push_back(c);
    }
}

void Tablero::impresion_tablero()
{
    for(int i = 0 ; i < ncasillas ; i++)
    {
        cout << casillas[i].toString() << endl;
    }
}