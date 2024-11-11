#include <iostream>
#include "dado.h"
#include "jugador.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    Dado d;
    d.set_caras(6);

    for(int i = 0; i < 5 ; i++)
    {
        int numero = d.tirar();
        cout << numero << endl;
    }

    Jugador j1;
    j1.set_nombre("Juanito");
    j1.set_posicion(5);
    j1.set_posicion(3);
    cout << j1.toString() << endl;

    return 0;
}