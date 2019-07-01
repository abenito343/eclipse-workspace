#include <iostream>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/tads/Coll.hpp"
using namespace std;

struct Elemento2
{
   int divPor;
   Coll<int> c;
};

string elemento2ToString(Elemento2 e)
{
   return intToString(e.divPor)+"*"+e.c.s;
}

Elemento2 elemento2FromString(string s)
{
   Elemento2 e;
   e.divPor = stringToInt(getTokenAt(s,'*',0));
   e.c.s = getTokenAt(s,'*',1);
   e.c.sep = ',';

   return e;
}

int cmpElemento2Int(Elemento2 e,int divPor)
{
   return e.divPor-divPor;
}

void mostrarResultados(Coll<Elemento2> cp)
{
   collReset<Elemento2>(cp);
   while( collHasNext<Elemento2>(cp) )
   {
      Elemento2 e = collNext<Elemento2>(cp,elemento2FromString);
      cout << "Divisibles por: " << e.divPor << endl;

      // itero la subcoleccion
      Coll<int> x = e.c;
      collReset<int>(x);
      while( collHasNext<int>(x) )
      {
         int v = collNext<int>(x,stringToInt);
         cout << v << endl;
      }
   }
}


int main()
{
   // coleccion para guardar los valores que se ingresan
   Coll<Elemento2> cp = collCreate<Elemento2>('|');

   int v;

   // leo el primer valaor
   cin >> v;
   while( v>0 )
   {
      // veo por que numeros es divisible este valor
      for(int i=2; i<=9; i++)
      {
         if( v%i==0 )
         {
            // busco en la coleccion principal para ver si existe un elemento
            // que represente a los divisibles por i
            int p = collFind<Elemento2,int>(cp,i,cmpElemento2Int,elemento2FromString);

            // NO EXISTE !!
            if( p<0 )
            {
               // creo un Elemento2
               Elemento2 e;
               e.divPor = i;
               e.c = collCreate<int>(',');

               p = collAdd<Elemento2>(cp,e,elemento2ToString);
            }

            Elemento2 x = collGetAt<Elemento2>(cp,p,elemento2FromString);
            collAdd<int>(x.c,v,intToString);

            collSetAt<Elemento2>(cp,x,p,elemento2ToString);

         }

      }

      // leo el siguiente valor
      cin >> v;
   }

   // ordeno la coleccion por el campo diviPor
 // collSort<Elemento>(c,cmpElemento,elementoFromString,elementoToString);

   // muestro los resultados
   mostrarResultados(cp);

   return 0;
}
