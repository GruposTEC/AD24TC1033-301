#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>

using std::string;

class Jugador
{
       private:
        string nombre;
        int posicion = 0;
    public:
        string get_nombre();
        int get_posicion();
        void set_nombre(string s);
        void set_posicion(int n);
        string toString();
};

#endif