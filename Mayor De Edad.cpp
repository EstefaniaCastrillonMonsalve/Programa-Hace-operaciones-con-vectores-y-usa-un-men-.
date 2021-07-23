/******************************************************************************

               Programa para determinar si eres mayor de edad o no.
               Copilado en online GDB.
               Autora: Estefania Castrillon Monsalve.
               Fecha: Marzo/27/2021.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int an,aa,resta;
    cout << "ingresa an : ";
    cin >> an;
    cout << "ingresa aa : ";
    cin >> aa;
    resta = aa - an;
    if (resta >= 18){
        cout << "Es mayor de edad : " <<resta;
    }else {
        cout << "Es menor de edad : " <<resta;
    }
    return 0;
}


