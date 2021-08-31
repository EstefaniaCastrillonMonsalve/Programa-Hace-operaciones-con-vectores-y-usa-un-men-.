/*****************
Objetivo: organizador de tiempo para eventos y suma y contador de digitos
Autores: Maryem Aliria Ruiz, Estefania Castrillon, Juan Pablo Castaño
Fecha: Agosto 9 del 2021
*****************/



#include <iostream>

using namespace std;

void eventos (void);
short menu(void);
void suma_digitos(void);
int main ()
{   int opc;
    int suma;
    do{
    	
	opc= menu ();
   switch(opc)
   {
   	case 1: cout <<"==== TIEMPO PARA EVENTO\n";
   	        eventos ();
   	        cout<< endl;
            system("Pause");
            
			break;
	case 2: cout <<"====SUMA DE DIGITOS Y CONTADOR \n";
	
	        suma_digitos();
	        cout<< endl;
            system("Pause");
			break;

	case 0:	cout << "=== FINNNN \n";
	        cout<< endl;
            system("Pause");			
			break;	
   }
       } while (opc != 0);

	return 0;
}

short menu()

{
	
	short opcion;
	system("cls");
	system("Color 0E");
	cout << "\t\t MENU DE OPCIONES \n\n";
	
	cout << "1. TIEMPO PARA EVENTO "<<endl;
	cout << "2. SUMA DE DIGITOS"<<endl;
	cout << "0. TERMINAR"<<endl;
	cout << "INGRESE OPCION=========>";
	cin >> opcion;
	while( opcion <0 or opcion > 3)
	{
	     cout << "INGRESE OPCION VALIDA=========>";	
		cin>> opcion;
	 	
    }
	return opcion;
		
}
void suma_digitos( )
{
	int suma=0;
	long long n;
	int contador_digitos=0;
	cout<< "INTRODUCIR NUMERO ENTERO==========>";
	cin>>n;
	while (n< 0 or n> 999999999999999)
	{
		cout << "INGRESE NUMERO VALIDO=========>";	
		cin>> n;
	}
	
	while(n>0)
	{
		suma=suma + n%10;
		n=n/10;
		contador_digitos= contador_digitos+1;
	}
	
	cout<< "suma digitos====>"<<suma <<endl;
	cout<< "total digitos====>"<<contador_digitos<<endl;

}

void eventos (void)
{
	short int hora, minutos, segundos;
	char tiempo;
	short int segundos_eventos;
	short int hora_restante, minutos_restante , segundos_restante;
	cout<<" ingrese hora del evento====>";
	cin>> hora;
	while (hora< 0 or hora>24 )
	{
		cout<< "ingrese un valor valido";
		cin>> hora;
	}
	cout<<" ingrese minutos del evento======>";
	cin>> minutos;
		while (minutos< 0 or minutos>59 )
	{
		cout<< "ingrese un valor valido";
		cin>> minutos;
	}
	cout<<" ingrese segundos del evento======>";
	cin>> segundos;
		while (segundos< 0 or segundos >59 )
	{
		cout<< "ingrese un valor valido==>";
		cin>> segundos;
	}

	cout<<"ingrese tiempo (a o p)";
	cin>>tiempo;
	
	cout<<"ingrese en cuantos segundos se realizará el evento====>";
	cin>> segundos_eventos;
	
	
	segundos_restante= segundos + segundos_eventos;
	if (segundos_restante > 60 )
	{
		minutos_restante= minutos + 01;
		segundos_restante = segundos_restante - 60;
		
		if (minutos_restante > 60)
		{
			hora_restante= hora +01;
			minutos_restante= minutos_restante - 60;
			
		}
		
	}
	
	if (hora>12)
	{
		hora_restante= hora_restante - 12;
		
	}
	
	cout<< hora_restante<<" horas:";
	cout<< minutos_restante<< " minutos:";
	cout<< segundos_restante<<" segundos:";
	
	if(tiempo='a' and (hora_restante >= 12 or hora_restante == 0)  and minutos_restante >= 1 )
	{
		cout<<"  de la tarde";
	}
  else 
	{
		cout<<" de la mañana";
	} 
	
}
	
	

