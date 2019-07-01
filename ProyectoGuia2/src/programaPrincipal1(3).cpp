#include <iostream>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/tads/Coll.hpp"
using namespace std;


void ingresarDatos(Coll<int>&  c)
{
   int v;

   cin >> v;
   while( v>0 )
   {
      collAdd<int>(c,v,intToString);
      cin >> v;
   }
}

void procesarEImprimir(int i,Coll<int> c)
{
   cout << i << ":";

   collReset<int>(c);
   while( collHasNext<int>(c) )
   {
      int v = collNext<int>(c,stringToInt);
      if( v%i==0 )
      {
         cout << v <<",";
      }
   }

   cout << endl;

}



int main()
{
   // declaro la coleccion que va a mantener los datos
   // ingresados en memoria
   Coll<int> c = collCreate<int>();

   // el usuario ingresa los datos y los cargo
   // en la coleccion
   ingresarDatos(c);

   for(int i=2; i<=9; i++)
   {
      procesarEImprimir(i,c);
   }

   return 0;
}
