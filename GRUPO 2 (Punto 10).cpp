/******************************************************************************

PROGRAMA: lOS TRABAJADORES DESEAN SABER EL TOTAL DE DINERO QUE TENDRAN DEPOSITADO EN SU CUENTA CADA MES, Y EL PAGO MENSUAL.
NOMBRES: JUAN ANDRÉS GIL VARGAS , ESTEFANIA CASTRILLON MONSALVE , NICOLÁS CANO BOTERO
DESRROLLADO: EMBARCADERO DEV - C++

*******************************************************************************/
/*El gobierno ha establecido el programa SAR (Sistema de Ahorro para el Retiro) que
consiste en que los dueños de la empresa deben obligatoriamente depositar en una
cuenta bancaria un porcentaje del salario de los trabajadores; adicionalmente los
trabajadores pueden solicitar a la empresa que deposite directamente una cuota fija o
un porcentaje de su salario en la cuenta del SAR, la cual le será descontada de su
pago. Los trabajadores que han decidido aportar a su cuenta del SAR una cantidad x,
desea saber la cantidad total de dinero que tendrá depositado a esa cuenta cada mes,
y el pago mensual que recibirá*/


#include <iostream>
using namespace std;

int main (){
	char nombre;
	float salario;
	float sar , porcentaje;
	int x;
	
	cout << "Ingresa tu salario --->";
	cin >> salario;
	
	cout << "Ingresa una opcion: 1 = cuota fija , 2 = porcentaje --->";
	cin >> x;
	
	if (x==1){
		cout << "Ingresar la cuota fija para el SAR --->";
		cin >> sar;	
		} 
		if(x==2){
			cout << "Ingresar un porcentaje para SAR --->";
			cin >> porcentaje;
			
			sar = (salario*porcentaje) / 100;
		} else {
			cout << "Ingresar una opción correcta";
		} 
		
		 cout << " La cantidad de dinero que deposita cada mes para SAR es: $" << sar;
	     cout << " \nTu pago mensual es: $" << salario - sar;
	
	return 0;  
}
