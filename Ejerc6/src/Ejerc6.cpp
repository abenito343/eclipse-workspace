//============================================================================
// Name        : Ejerc6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int a,b,c;
      cout << "Ingrese 3 numeros diferentes entre si: " << endl;
      cin >> a >> b >> c;

      if( a > b && a > c )
      {
         cout << "El mayor es: " << a << endl;
         if ( b > c )
         {
            cout << "El que esta en el medio es: " << b << endl;
            cout << "El menor es: " << c << endl;
         }
         else
         {
            cout << "El que esta en el medio es: " << c << endl;
            cout << "El menor es: " << b << endl;
         }
      }
      else if( b > c && b > a )
      {
         cout << "El mayor es: " << b << endl;
         if ( a > c )
         {
            cout << "El que esta en el medio es: " << a << endl;
            cout << "El menor es: " << c << endl;
         }
         else
         {
            cout << "El que esta en el medio es: " << c << endl;
            cout << "El menor es: " << a << endl;
         }
      }
      else
      {
         cout << "El mayor es: " << c << endl;
         if ( a > b )
         {
            cout << "El que esta en el medio es: " << a << endl;
            cout << "El menor es: " << b << endl;
         }
         else
         {
            cout << "El que esta en el medio es: " << b << endl;
            cout << "El menor es: " << a << endl;
         }
      }

	return 0;
}
