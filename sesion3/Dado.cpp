#include <cstdlib>
#include "dado.h"


int Dado::tirar()
{
    return rand() % num_caras +1;
}
 
void Dado::set_caras(int n)
{
    num_caras = n;
}