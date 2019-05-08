//============================================================================
// Name        : Ejerc22.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int fecha, fecha_mayor, fecha_menor;
   string nombre, nombremay, nombremen;

   cout << "Ingrese el nombre de la persona: " << endl;
   cin >> nombre;

   cout << "Ingrese una fecha de nacimiento sin espacios para esa persona (0 para terminar): " << endl;
   cin >> fecha;

   fecha_mayor = fecha;
   fecha_menor = fecha;
   nombremay = nombre;
   nombremen = nombre;

   while (fecha != 0)
   {
      if( fecha > fecha_menor)
      {
         fecha_menor = fecha;
         nombremen = nombre;
      }

      if( fecha < fecha_mayor )
      {
         fecha_mayor = fecha;
         nombremay = nombre;
      }
      cout << "Ingrese el nombre de la persona: " << endl;
      cin >> nombre;

      cout << "Ingrese una fecha de nacimiento sin espacios para esa persona (0 para terminar): " << endl;
      cin >> fecha;
   }

   cout << "La persona mas joven es: " << nombremen << endl;
   cout << "La persona mas vieja es: " << nombremay << endl;

	return 0;
}
