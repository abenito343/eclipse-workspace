//============================================================================
// Name        : Ejerc16.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int n, x1 = 1, x2 = 1, x3 =  1, i = 0;
   cout << "Ingrese el n-ésimo término de la sucesión de Fibonacci: " << endl;
   cin >> n;

   while( i < (n-2))
   {
      x3 = x1 +x2;      // x3 seria 2 en primera instancia
      x1 = x2;
      x2 = x3;          // muevo de lugar la posicion inicial de x1 y x2
      i++;
   }

   cout << x3 << endl;

	return 0;
}
