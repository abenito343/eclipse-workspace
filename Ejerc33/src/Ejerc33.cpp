//============================================================================
// Name        : Ejerc33.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int sueldo, sueldo_total = 0, suma = 0, b100, b50, b20, b10, b5, b2, b1;

   cout << "Ingrese el sueldo de cada una de las personas(0 para terminar): " << endl;
   cin >> sueldo;
   sueldo_total += sueldo;

      while ( sueldo != 0)
      {
         cin >> sueldo;
         sueldo_total += sueldo;
      }
         suma = sueldo_total;
         b100 = suma / 100;     // b100 = 15
         suma -= b100 * 100;    // suma = 1562 - (15*100) = 62
         b50 = suma / 50;       // b50 = 1
         suma -= b50 * 50;      // suma = 62 - (1*50) = 12
         b20 = suma / 20;       // b20 = 0
         suma -= b20 * 20;      // suma = 12 - (0*20) 12
         b10 = suma / 10;
         suma -= b10 * 10;      //.
         b5 = suma / 5;         //.
         suma -= b5 * 5;        //.
         b2 = suma / 2;
         suma -= b2 * 2;
         b1 = suma;



   }


       cout << "Para pagar el sueldo total de " << sueldo_total << "$ se necesitan:" << endl << endl;
       cout << b100 << " billetes de $100" << endl;
       cout << b50 << " billetes de $50" << endl;
       cout << b20 << " billetes de $20" << endl;
       cout << b10 << " billetes de $10" << endl;
       cout << b5 << " billetes de $5" << endl;
       cout << b2 << " billetes de $2" << endl;
       cout << b1 << " billetes de $1" << endl;

	return 0;
}
