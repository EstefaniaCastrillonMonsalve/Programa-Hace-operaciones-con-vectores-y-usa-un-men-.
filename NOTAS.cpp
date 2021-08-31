/***
Objetivo: manupulacion de arreglos
author: todo
agosto 6 del 2021
****/
#include <iostream>
#define TAM_MAX 45

using namespace std;

//--------------------------prototipos-------------------//
void mostrar_vector(float notas[], int n);
int leer_vector(float notas []);

int main ()
{
	int n;
	float notas[TAM_MAX];
	n= leer_vector(notas);
	mostrar_vector(notas,n);
	
	
	
	return 0;
}

//-----------------------------------
int leer_vector (float notas [])
{

  int n;
  int i;
  
  do
  {

cout<< "ingrese total delementos del vector(1,45)====>";
cin >> n;
}
while(n< 1 or n> TAM_MAX);

for(i = 0; i < n; i++)
{
  	cout<<" \nIngrese elemento "<<i <<":  ";
  	cin >> notas [i];
  	while(notas[i] < 0.0 or notas [i] > 5.0)
  	{
  		cout << "\nIngrese nota valida"<< i <<":  ";
  		cin>> notas [i];
	  }
	  
}  
 return n;
}

//----------------------------------
void mostrar_vector(float notas[], int n)
{
	int i;
	
	system("cls");
	cout << "\t\t NOTAS DE LOS ESTUDIANTES"<<endl;
	cout << " la direccion del primer elemento del arreglo es ====>"<< notas << endl;
	
	for(i= 0; i < n; i++)
	{
		cout << notas[i] << endl; 
		
	}
	
}
	























