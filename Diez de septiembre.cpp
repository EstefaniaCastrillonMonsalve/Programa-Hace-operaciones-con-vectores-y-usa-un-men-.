/**
ARCHIVOS, NOTAS, NOMBRE
AUTOR: Todos
FECHA: 10 de septiembre

**/




#include <fstream>
#include <iostream>
#include <stdio.h>
#define TAM_MAX 45

using namespace std;
int crearArchivo();
int leerArchivo(string vNom[], float matNot[][5]);
void mostrarDatos(string vNom[], float matNot[][5], int n);
void calculo_Def(int n, float matNot[][5]);
int guardarDef(string vNom[] , float matNot[][5], int n);


//-------programa----pincipal

int main()
{
	int re;
	int n, i;
	string vNom[TAM_MAX];
	float matNot[TAM_MAX][5];
	re = crearArchivo();
	if(re==-1)
	{
		cout<< "\nlo siento no se pudo crear el archivo"<<endl;
	}
	n=leerArchivo(vNom,matNot);
	if(n==-1){
		cout<<"\nLo siento, no se pudo crear el archivo"<<endl;
	}
	else{
		calculo_Def(n, matNot);
		mostrarDatos(vNom,matNot,n);
	    re = guardarDef(vNom, matNot, n);

	     if( re == -1){
	     	cout << "Lo siento, no se pudo guardar el archivo :" << endl;
		 }

	}
	return 0;
}

int crearArchivo()
{
	string vNom;
	float matNot[4];
	char seguir;
	fstream archi;
	int i;
	archi.open("estudNota.txt", ios::in|ios::out|ios::app);
	if(archi.fail())
	{
		cout<<"\nError para abrir archivo";
		return -1;
	}
	seguir= 's';
	do
	{
		cout<< "\ningrese nombre estudiante ===>"<< " ";
		fflush(stdin);
		getline(cin, vNom);
		archi<<vNom<<"  ";
		for( i=0; i < 4;i++)
		{

		do
		{
		cout<<"Ingrese Nota"<<" "<<i+1<<" ";
		cin >>matNot[i];
		}while(matNot[i]< 0.0 or matNot[i]>5.0);
		archi<<matNot[i]<< "  ";


		}
		archi<<"\n";
		cout<< "seguir entrando datos?";
		cin>> seguir;

		}while(seguir =='s');
		archi.close();
		return 1;


}
int leerArchivo(string vNom[], float matNot[][5]){
	int n, i, j;
	ifstream archi;
	archi.open("estudNota.txt");
	if(archi.fail()){
		cout<< "\nError al abrir el archivo :";
		return -1;
	}
	else{
		cout<<"\nSe abrio correctamente el archivo :";
		i=0;
		while(!archi.eof()){
			archi>>vNom[i]>>matNot[i][0]>>matNot[i][1]>>matNot[i][2]>>matNot[i][3];
			i++;
		}
		archi.close();
		return i-1;
	}
}
void mostrarDatos(string vNom[], float matNot[][5], int n){
	int i;
	cout<<"\nNombre\tNota 1\tNota 2\tNota 3\tNota 4\tDefinitiva"<<endl;
	cout<<"\t---------------------------------------------"<<endl;
	for (i=0;i<n;i++){
		cout<<vNom[i];
		printf("\t%4.2f\t%4.2f\t%4.2f\t%4.2f\t%4.2f\n",matNot[i][0],matNot[i][1],matNot[i][2],matNot[i][3],matNot[i][4]);
	}
	cout<<"---------------------------------------------";
}
void calculo_Def(int n, float matNot[][5]){
	int i, j;
	float suma;
	for(i=0; i < n; i++){
		suma= 0.0;
		for(j=0; j< 4;j++){
			suma=suma+matNot[i][j];
		}
		matNot[i][4]=suma/4;
	}
}

int guardarDef(string vNom[] , float matNot[][5], int n){

	fstream archiSal;

	archiSal.open("estudNotaDef.txt", ios :: out | ios :: app);

	if(archiSal.fail()){
		cout << "------------- ERROR PARA ABRIR ARCHIVO : --------";
		return -1;
	}

	for (int i = 0; i < n; i++){
		archiSal << vNom[i] << "  " << matNot[i][4] << "\n";
	}
	archiSal.close();
	return 1;
}
