//============================================================================
// Name        : Ejerc19.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int valor, mayores = 0, suma = 0, suma_m = 0 ;

     for ( int i = 0 ; i < 50 ; i++)
     {
        cout << "Ingrese el valor: " <<endl;
        cin >> valor;

        if ( valor <= -10)
           suma += valor;
        if( valor >= 100)
           mayores++;
           suma_m += valor;
     }

     cout << "La suma de los numeros menores a -10 es: " << suma << endl;
     cout << "El promedio de los numeros mayores a 100 es " << (suma_m)/mayores  << endl;


	return 0;
}
