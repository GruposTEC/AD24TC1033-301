#include<iostream>
#include<cmath>

//using namespace std;
using std::cout;
using std::cin;
using std::endl;


int main()
{   
    int numero = 10;

    //std::cout << "HolaMundo" << std::endl;
    cout << "HolaMundo" << endl;
    //cin >> numero;
    cout << "El numero es : " << numero << endl;

    cout << " La raiz cuadrdaa de 10 es  " << sqrt(numero) << endl;

    if(numero > 10)
    {
        cout << " El numero es mayor a 10 " << endl;
    }
    else
    {
        cout << "El numero es menor o igual a 10" << endl;
    }

    switch(numero)
    {
        case 10 :
            cout << "Dentro del switch numero igual a 10" << endl;
            break;
    }

    for(int i = 0 ; i < 5 ; i = i+2)
    {
        cout << "Dentro del for "<< i << endl;
    }

    int i = 0; //start del while
    while(i < 5) //stop del while
    {
        cout << " Dentro del while " << i << endl;
        i++;  //step del while
    }

    i = 0; //start del dowhile
    do 
    {
        cout << "Dentro del do while " << i << endl;
        i++ ; // step del dowhile
    }
    while(i< 5); //stop del dowhile
}