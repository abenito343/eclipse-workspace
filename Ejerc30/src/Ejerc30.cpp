//============================================================================
// Name        : Ejerc30.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int num, aux, cont = 0, cant_elem = 1,aux2=0,aux3;

   cin >> num ;
   aux = num;

   while ( num != 0 )
   {
      if( num == aux + 1)
      {
         cant_elem++;
      }
      else
      {
         if ( cant_elem > 1)
            cont++;
         if ( cant_elem >aux2)
         {
            aux2=cant_elem;
            aux3=cont;
         }


         cout << "La cantidad de elementos fue: " << cant_elem << endl;
         cant_elem = 0;
      }
      aux = num;

      cin >> num;

   }

   cout << "La cantidad de seguidillas fue: " << cont << endl;
   cout << "La seguidilla mas larga fue la: " << aux3 << endl;
   cout << "y la cantidad de elementos fue: " << aux2 << endl;
	return 0;
}
