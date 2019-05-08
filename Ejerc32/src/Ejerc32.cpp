//============================================================================
// Name        : Ejerc32.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int sueldo, suma, b100, b50, b20, b10, b5, b2, b1;

   cout << "Ingrese el sueldo: " << endl;
   cin >> sueldo;          // sueldo ejemplo = 1562

    suma = sueldo;         // suma = 1562
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

    cout << "Para pagar el sueldo de " << sueldo << "$ se necesitan:" << endl << endl;
    cout << b100 << " billetes de $100" << endl;
    cout << b50 << " billetes de $50" << endl;
    cout << b20 << " billetes de $20" << endl;
    cout << b10 << " billetes de $10" << endl;
    cout << b5 << " billetes de $5" << endl;
    cout << b2 << " billetes de $2" << endl;
    cout << b1 << " billetes de $1" << endl;

	return 0;
}
