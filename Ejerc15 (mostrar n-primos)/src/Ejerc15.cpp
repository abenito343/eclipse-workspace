//============================================================================
// Name        : Ejerc15.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int num, primos_a_mostrar, esPrimo, div;

   cout << "Ingrese la cantidad de numeros primos a mostrar:" << endl;
   cin >> primos_a_mostrar;

   num = 1;                         // el primer primo es 1
   while ( primos_a_mostrar > 0)    //cantidad de primos a mostrar
   {
      esPrimo = 1;                  // si es primo , marco = 1

      for (div = 2; div < num; div++)  // como el 1 ya esta, el 2 ya tiene 2 divisores p/ej {1,2} y asi los demas primos a partir de 2
      {
         if (num % div == 0)        // controlo que sea primo o no
            esPrimo = 0;
      }

      if ( esPrimo == 1)         // si el num es primo muestro en caso contrario , voy a num++
      {
         cout << num << endl;
         primos_a_mostrar--;     // como ya mostre el primo , decremento la cantidad a mostrar
      }

      num++;                     // incremento el numero que evaluo en cada bucle
   }

   return 0;
}
