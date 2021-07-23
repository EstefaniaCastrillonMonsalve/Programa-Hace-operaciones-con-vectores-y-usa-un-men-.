/******************************************************************************

PROGRAMA: EL GOBIERNO DESEA SABER EL N�MERO DE �RBOLES DE CADA ESPECIE QUE TENDR� QUE SEMBRAR EN EL BOSQUE
NOMBRES: JUAN ANDR�S GIL VARGAS , ESTEFANIA CASTRILLON MONSALVE , NICOL�S CANO BOTERO
DESRROLLADO: EMBARCADERO DEV - C++

*******************************************************************************/
/*El gobierno del departamento de Santander quiere reforestar el Ca��n del
Chicamocha en un determinado n�mero de hect�reas. Si la superficie del terreno
excede a 1 mill�n de metros cuadrados, entonces decidir� sembrar de la siguiente
manera: �rboles de �el barrig�n�, dejando dos metros a la redonda. Si la superficie del
terreno es menor o igual a un mill�n de metros cuadrados, entonces decidir� sembrar
�cacao indio� en la mitad del terreno y �cabeza de negro� y �ajicillo� en la otra mitad en
partes iguales con una distancia de un metro a la redonda. El gobierno desea saber el
n�mero de �rboles de cada especie que tendr� que sembrar en el bosque*/


#include <iostream>
using namespace std;

int main (){
	int numHectareas;
	int barrigon , cacaoIndio , cabezaNegro , ajicillo , hectarea , arbolesHectarea , supArbol , prMitad , sgMitad;
	int numBarrigon , numCacaoindio , numCabezanegro , numAjicillo;
	
	cout << "Ingrese el numero de hectareas ---> ";
	cin >> numHectareas;
	
	if (numHectareas > 1000000){
		
		supArbol = (2*2);
		arbolesHectarea = 10000 / supArbol;
		numBarrigon = (numHectareas / arbolesHectarea) * 10000;
		
		cout << "El numero de barrigon es de ---> " << numBarrigon;
		
	} 
	
	 if (numHectareas <= 1000000){
		prMitad = numHectareas / 2;
		supArbol = (1*1);
		arbolesHectarea = 10000 / supArbol;
		numCacaoindio = (arbolesHectarea * prMitad) / 10000;
		
		cout << "El numero de Cacaoindio es de: " << numCacaoindio;
		
		sgMitad = (numHectareas - prMitad) / 2;
		supArbol = (1*1);
		arbolesHectarea = 10000 / supArbol;
		numCabezanegro = (arbolesHectarea * sgMitad) / 10000;
		numAjicillo = (arbolesHectarea * sgMitad) / 10000;
		
		cout << "\nEl numero de Cabeza de Negro es de: " << numCabezanegro << " \nEL numero de Ajicillos es:  " << numAjicillo ;
		
	  }
	  
	  return 0;
		
	}
