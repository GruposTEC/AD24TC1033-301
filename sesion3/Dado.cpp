#include <cstdlib>
#include <iostream>
#include "dado.h"
using std::cout;
using std::endl;

int Dado::tirar()
{
    return rand() % num_caras +1;
}
 
void Dado::set_caras(int n)
{
    num_caras = n;
}

Dado::Dado(int n)
{
    num_caras = n;
}

Dado::Dado()
{
    num_caras = 6;
}

Dado::~Dado()
{
    cout << "Dentro del desttructor de dado" << endl;
}