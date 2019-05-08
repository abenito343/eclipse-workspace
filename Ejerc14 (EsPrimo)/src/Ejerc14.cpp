//============================================================================
// Name        : Ejerc14.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int num, div = 1, esPrimo = 0;
   cout << "Ingrese un numero: " << endl;
   cin >> num;

   while( div <= num)    // la cantidad de divisores de num
   {
      if( num % div == 0)  // si es divisor
         esPrimo++;          // para que sea nro primo , primo == 2 ...
      div++;               // paso al sig divisor
   }

	if( esPrimo == 2 )        // si la cant de divisores es 2 entonces es primo , por def.
	   cout << "PRIMO" << endl;
	else
	   cout << "NO PRIMO" << endl;
	return 0;
}
