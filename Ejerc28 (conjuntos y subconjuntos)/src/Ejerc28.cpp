//============================================================================
// Name        : Ejerc28.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int valor, suma = 0, c = 0, valormax = 0, valormin = 0;
   int c1 = 1, conjmax, posmax;
   bool b = false;

      cout << "Ingrese los valores positivos, 0 para un nuevo conjunto o un valor negativo para finaliza la carga: " << endl;
      cin >> valor;

      while (valor >= 0)
      {
          while (valor != 0)
          {
             suma += valor;
             c++;             // contador de la posicion donde ingreso el nro

             if (valor > valormax)
             {
                valormax = valor;
                conjmax = c1 + 1;  // me guardo el nro de conjunto de valormax
                posmax = c;        // me guardo la posicion donde esta valormax con c
             }

             if ( b == false)             // me guardo el primer valor ingresado como valormin
             {
                valormin = valor;
                b = true;
             }
             if (valor < valormin && b == true)   // ahora pasa siempre por este if si es que el valor < valormin
                valormin = valor;

             cin >> valor;          // sigo ingresando valores hasta que no me ingrese 0 (para salir del conjunto)
          }

          if (c == 0)               // si directamente se ingresa 0 ...
          {
             cout << "El subconjunto no tiene ningun valor ingresado" << endl;
             cin >> valor;
          }
          else
          {
             cout << "El promedio del subconjunto " << c1 << " es " << suma/c << endl;
             cout << "El valor minimo del subconjunto " << c1 << " es " << valormin << endl;

             c1++;         // cantidad de subconjuntos
             suma = 0;
             c = 0;        // re-inicializo las variables
             b = false;

             cin >> valor;
          }
      }

      if (c1 == 0)                     // si el usuario directamente ingresa un nro negativo (no existen subconjuntos)
         cout << "No hay subconjuntos" << endl;
      else
      {
         cout << "El total de subconjuntos procesados es " << c1 - 1 << endl;
         cout << "El valor maximo del conjunto es " << valormax << " el cual se encuentra en el subconjunto " << conjmax - 1  << " en la posicion " << posmax << endl;
      }

      return 0;
}
