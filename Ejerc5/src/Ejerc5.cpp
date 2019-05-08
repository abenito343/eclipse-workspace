//============================================================================
// Name        : Ejerc5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int a,b;
      cout << "Ingrese 2 numeros: " << endl;
      cin >> a >> b;

      if( a > b )
      {
         cout << "El mayor es: " << a << endl;
         cout << "El menor es: " << b << endl;
      }
      else if ( a < b )
      {
         cout << "El mayor es: " << b << endl;
         cout << "El menor es: " << a << endl;
      }
      else
         cout  << "Los valores ingresados son iguales" << endl;

	return 0;
}
