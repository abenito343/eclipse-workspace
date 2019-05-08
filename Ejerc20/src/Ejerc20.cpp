//============================================================================
// Name        : Ejerc20.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int n, a = 5, b = 3, aux = 0, cont;
      cout << "Ingrese el numero n: " << endl;
      cin >> n ;

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
