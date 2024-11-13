#include <iostream>
#include "casilla.h"

using std::to_string;
using std::cout;
using std::endl;

Casilla::Casilla()
{

}

Casilla::Casilla(int p, int d)
{
    ncasilla = p;
    desplazamiento = d;
}

int Casilla::get_numcasilla()
{
    return ncasilla;
}

int Casilla::get_desplazamiento()
{
    return desplazamiento;
}

string Casilla::toString()
{
    return "CAsila número " + to_string(ncasilla) + " con desplazamiento " + to_string(desplazamiento);
}

int Casilla::mover()
{
    return ncasilla + desplazamiento;
}
