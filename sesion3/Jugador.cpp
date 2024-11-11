#include "jugador.h"

using std::to_string;

string Jugador::get_nombre()
{
    return nombre;
}

int Jugador::get_posicion()
{
    return posicion;
}

void Jugador::set_nombre(string s)
{
    nombre = s;
}

void Jugador::set_posicion(int n)
{
    posicion = posicion + n;
}

string Jugador::toString()
{
   return "Mi nombre es " + nombre + " y mi posicion es " + to_string(posicion);
}