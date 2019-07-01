#include <iostream>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/tads/Coll.hpp"
using namespace std;


struct Elemento
{
   int divPor;
   int valor;
};

string elementoToString(Elemento e)
{
   return intToString(e.divPor)+","+intToString(e.valor);
}

Elemento elementoFromString(string s)
{
   Elemento e;
   e.divPor = stringToInt(getTokenAt(s,',',0));
   e.valor = stringToInt(getTokenAt(s,',',1));
   return e;
}

int cmpElemento(Elemento a,Elemento b)
{
   return a.divPor-b.divPor;
}

void imprimir(Coll<Elemento> c)
{
   int i=0;
   Elemento e = collGetAt<Elemento>(c,i,elementoFromString);
   while( i<collSize<Elemento>(c) )
   {
      cout << e.divPor << ":";

      int divAnt = e.divPor;
      while( e.divPor==divAnt )
      {
         cout << e.valor <<",";

         i++;
         e = collGetAt<Elemento>(c,i,elementoFromString);
      }

      cout << endl;
   }
}


int main()
{
   // coleccion que guarda divisor y valor
   Coll<Elemento> c = collCreate<Elemento>();

   // el usuario ingresa datos
   int v;
   cin >> v;
   while( v>0 )
   {
      // pruebo dividir al valor ingresado por cada uno de los
      // divisores que me piden en el enunciado
      for(int i=2; i<=9; i++)
      {
         // si el valor ingresado ES divisible por i => a la coleccion
         if(v%i==0)
         {
            Elemento e;
            e.divPor = i;
            e.valor = v;
            collAdd<Elemento>(c,e,elementoToString);
         }
      }

      cin >> v;
   }

   // ordeno e imprimo
   collSort<Elemento>(c,cmpElemento,elementoFromString,elementoToString);
   imprimir(c);

   return 0;
}
