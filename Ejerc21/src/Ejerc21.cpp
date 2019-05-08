//============================================================================
// Name        : Ejerc21.cpp
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

      cout << "Los primeros " << n << " múltiplos de "  << a << " que no son múltiplo de " << b << " son: " << endl;

      for ( cont = 1; cont <= n; cont++)
       {
          aux += a;

          if ( aux % b != 0)
          {
             cout << aux ;
             cout << endl;
          }
          else
             cont--;
       }

	return 0;
}
