//============================================================================
// Name        : Ejerc27.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int n, m, num, sum = 0, pos = 0, neg = 0, mayor = -9999999, minimo = 999999, promedio = 0;

   cout << "Ingrese los n conjuntos: " << endl;
   cin >> n;

   for ( int cont = 1 ; cont <= n ; cont++)
   {
      cout << "Ingrese los m valores para el conjunto " << cont << " :" << endl;
      cin >> m;

      for( int cont2 = 0 ; cont2 < m ; cont2++)
      {
         cout << "Ingrese los valores: " << endl;
         cin >> num;

         sum += num;
         if( num > mayor)
            mayor = num;
         if( num > 0)
            pos++;
         if( num < 0 )
            neg++;
         if( num < minimo)
            minimo = num;
      }

      promedio += sum;

      cout << "El valor promedio del conjunto " << cont << " es: " << sum/m << endl;
      cout << "El maximo valor del conjunto " << cont << " es: " << mayor << endl;
      cout << "El porcentaje de valores postivos del conjunto " << cont << " es: " << (pos*100)/m << "%" << endl;

      sum = 0;
      mayor = -9999999;
      pos = 0;
   }

   cout << endl;

   cout << "El promedio de los valores de todos los conjuntos es: " << promedio/(m*n) << endl;
   cout << "El porcentaje de negativos es: " << (neg*100)/(m*n) << "%" << endl;
   cout << "El numero mas chico de todos es: " << minimo << endl;

	return 0;
}
