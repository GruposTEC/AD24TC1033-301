#include <iostream>
#include "dado.h"
#include "jugador.h"
#include "casilla.h"
#include "tablero.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    /*Dado d;
    d.set_caras(6);

    for(int i = 0; i < 5 ; i++)
    {
        int numero = d.tirar();
        cout << numero << endl;
    }

    Jugador j1;
    j1.set_nombre("Juanito");
    j1.set_posicion(d.tirar());
    j1.set_posicion(d.tirar());
    cout << j1.toString() << endl;
    */

    /*Casilla c1(30,0);
    Casilla c2(40,10);
    Casilla c3(50,-15);

    cout << c1.toString() << endl;
    cout << c2.toString() << endl;
    cout << c3.toString() << endl;*/

    Tablero tablerito(10);
    tablerito.impresion_tablero();


    return 0;
}