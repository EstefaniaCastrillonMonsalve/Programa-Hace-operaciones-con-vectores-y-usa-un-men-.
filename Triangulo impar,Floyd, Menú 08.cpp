**********/
autor: todos
fecha: mayo 8 2021

1 
2 3 
4 5 6
7 8 9 10
***************************/
#include <iostream>
using namespace std;


void triangulo_imp (int n );
void triangulo_floyd (int n);
int menu();

int main()
{ int n, opcion;

do {
    cout<< "Ingrese Número ------>"; cin>> n;
    }while(n < 1 or n > 24);

    opcion= menu();
    while(opcion !=0) {
        switch (opcion) {
            case 1: 
            cout<< "**** Triangulo impar \n"; triangulo_imp(n) ;
            break ;
             case 2: 
            cout<< "**** Triangulo de Floyd \n";triangulo_floyd(n);
           
            break ;
            case 0 : cout << "fin*****";
            break;
            default : cout << "Error de opcion";
        }
        opcion=menu();
    }
  return 0;
}
void triangulo_imp (int n){
    int i, j;
    int fila;
    i= 1 ;
    fila = 1;
    while( i <= n){
        j= 1 ;
        while (j <= fila) {
            cout<< i<< "  ";
            j++ ;
        }
        i= i + 2;
         fila++;
        cout << endl;
    }
}
void triangulo_floyd(int n){
    
  int i, j;
    int fila, numero;
    i= 1 ;
    fila = 1;
    numero = 1;
    while( i <= n){
        
        j= 1;
        
        while (j <= fila) {
          
            cout<< numero<< "  ";
            
            j++ ;
            numero ++;
        }
        
        i++;
         fila++;
        cout << endl;  
    }
    
   
}
int menu(){
    int opcion;
    
    cout<<"   ***** menu de opciones ******\n";
    cout<< " 1. traingulo de impares"<<endl;
    cout<< " 2. triangulo de floyd " << endl;
    cout<< " 0. terminar "<< endl;
    do{
        cout<< " Ingrese opcion ---------->"; cin>>opcion;
    } while (opcion< 0 or opcion > 2);
    return opcion;
}
