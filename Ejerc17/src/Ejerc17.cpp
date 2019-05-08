//============================================================================
// Name        : Ejerc17.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int valor, c1 = 0, c2 = 0, c3 = 0, c4 = 0;

   cout << "Ingrese el valor: " <<endl;
   cin >> valor;

   while (valor >=0 )
   {
      if ( valor > 0 && valor <= 12 )
         c1++;
      if ( valor > 12 && valor <= 24 )
         c2++;
      if ( valor > 24 && valor <= 32 )
         c3++;
      if ( valor == 0 )
         c4++;

      cout << "Ingrese el valor: " <<endl;
      cin >> valor;
   }

   cout << "La cantidad de numeros entre 1 y 12 son: " << c1 << endl;
   cout << "La cantidad de numeros entre 13 y 24 son: " << c2 << endl;
   cout << "La cantidad de numeros entre 25 y 32 son: " << c3 << endl;
   cout << "La cantidad de numeros 0 son: " << c4 << endl;

	return 0;
}
