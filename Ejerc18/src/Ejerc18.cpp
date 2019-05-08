//============================================================================
// Name        : Ejerc18.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int valor, pos = 0, neg = 0, pares = 0, cont = 1, suma = 0;

   cout << "Ingrese el valor: " <<endl;
   cin >> valor;

   while ( valor !=0 )
      {
         if( valor > 0)
         {
            pos++;
            suma += valor;
         }
         if( valor < 0)
            neg++;
         if( valor % 2 == 0 )
            pares++;

         cout << "Ingrese el valor: " <<endl;
         cin >> valor;
         if( valor != 0)
            cont++;
      }

   cout << "La cantidad de numeros positivos es " << pos << endl;
   cout << "La cantidad de numeros negativos es " << neg << endl;
   cout << "El porcentaje de numeros pares es " << (pares*100)/cont << "%" << endl;
   cout << "El promedio de positivos es " << suma/pos << endl;
   cout << "El porcentaje de numeros negativos es es " << (neg*100)/cont << "%" << endl;


	return 0;
}
