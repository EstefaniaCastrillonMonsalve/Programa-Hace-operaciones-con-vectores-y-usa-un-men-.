/**************************

calcula la cantidad de meses que hay entre 2 a�os( a�o 1 y a�o2).

***************************/
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int ano1,ano2;
    int cantidad_de_meses;
    cout << "ingrese ano1----->";
    cin >> ano1;
    cout << "ano2------>";
    cin >> ano2;
   
   cantidad_de_meses=((ano2 - ano1) *12);
   cout << "la cantidad de meses entre a�o1 y a�o2 es------>" <<cantidad_de_meses;
    
    

    return 0;
}
