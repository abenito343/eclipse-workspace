#include <iostream>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/tads/Coll.hpp"
using namespace std;

int main()
{
   // coleccion de enteros
   Coll<int> c1 = collCreate<int>();
   collAdd<int>(c1,1,intToString);
   collAdd<int>(c1,2,intToString);
   collAdd<int>(c1,3,intToString);
   while( collHasNext<int>(c1) )
   {
      int i = collNext<int>(c1,stringToInt);
      cout<<i<<endl; // salida: 1, 2, 3
   }

   collReset<int>(c1);
   while( collHasNext<int>(c1) )
   {
      int i = collNext<int>(c1,stringToInt);
      cout<<i<<endl; // salida: 1, 2, 3
   }

}
