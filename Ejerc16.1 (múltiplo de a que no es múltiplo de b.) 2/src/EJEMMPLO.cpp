//============================================================================
// Name        : EJEMMPLO.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int n, a, b, aux = 0, cont;
   cout << "Ingrese los 3 numeros: " << endl;
   cin >> n >> a >> b ;

    for ( cont = 1; cont <= n; cont++)
    {
       aux += a;           // tabla del 5 en sumas sucesivas de a 5 , si a=5 p/ejm

       if ( aux % b != 0) // si la division entre aux y b no es exacta -> puedo decir que a no es divisible por b
       {
          cout << aux ;   // muestro los multiplos de manera adicional (para ver que hace)
          cout << endl;
       }
       else
          cont--;       // evito que solo me muestre 6 multiplos de 5 que no son de 3 , si n = 10
    }

    cout << "El " << n << "-ésimo múltiplo de "  << a << " que no es múltiplo de " << b << " es " << aux << endl;

   return 0;
}
