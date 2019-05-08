//============================================================================
// Name        : Ejerc31.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int a = 0, e = 0, i = 0, o = 0, u = 0, cant_pal = 1, mayor = 0, cant_letras = 0, cont = 0;
   char letra;
   bool b = false;

   cout << "Ingrese letra por letra la oracion ('.' para terminar, '_' para espacio): " << endl;
   cin >> letra;

   while ( letra != '.')
   {
      if( cont < cant_letras && cont != 0)
         b = true;
      if (letra != '_')
         cant_letras++;
      if ( letra == 'a')
         a++;
      if ( letra == 'e')
         e++;
      if ( letra == 'i')
         i++;
      if ( letra == 'o')
         o++;
      if ( letra == 'u')
         u++;
      if ( letra == '_')
      {
         cant_pal++;
         cont = cant_letras;
         cant_letras = 0;
      }
      if ( mayor < cant_letras)
         mayor = cant_letras;
      cin >> letra;
   }

   cout << "La cantidad de veces que aparecio la 'a' fueron: " << a << " veces" << endl;
   cout << "La cantidad de veces que aparecio la 'e' fueron: " << e << " veces" << endl;
   cout << "La cantidad de veces que aparecio la 'i' fueron: " << i << " veces" << endl;
   cout << "La cantidad de veces que aparecio la 'o' fueron: " << o << " veces" << endl;
   cout << "La cantidad de veces que aparecio la 'u' fueron: " << u << " veces" << endl;
   cout << "La cantidad de palabras de la oracion es de: " << cant_pal << endl;
   cout << "La cantidad de letras que posee la palabra más larga es de: " << mayor << endl;
   if ( b == true)
      cout << "Es creciente" << endl;
   else
      cout << "No es creciente" << endl;

	return 0;
}
