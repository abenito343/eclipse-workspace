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
   e.divPor=stringToInt(getTokenAt(s,'*',0));
   e.c.s=getTokenAt(s,'*',1);
   e.c.sep=',';
   return e;
}

int cmpElemento2DivPor(Elemento2 e,int divPor)
{
   return e.divPor-divPor;
}

int cmpElemento2(Elemento2 a,Elemento2 b)
{
   return a.divPor-b.divPor;
}

void imprimir(Coll<Elemento2> cp)
{
   collSort<Elemento2>(cp,cmpElemento2,elemento2FromString,elemento2ToString);

   collReset<Elemento2>(cp);
   while( collHasNext<Elemento2>(cp) )
   {
      Elemento2 e = collNext<Elemento2>(cp,elemento2FromString);
      cout << e.divPor << ":";

      collReset<int>(e.c);
      while( collHasNext<int>(e.c) )
      {
         int v = collNext<int>(e.c,stringToInt);
         cout << v << ",";
      }

      cout << endl;
   }
}


int main()
{
   Coll<Elemento2> cp = collCreate<Elemento2>('|');

   int v;

   // el usuario ingresa un valor
   cin >> v;
   while( v>0 )
   {
      // pruebo dividirlo por todos entre 2 y 9
      for(int i=2; i<=9; i++)
      {
         // SI es divisible
         if( v%i==0 )
         {
            int p = collFind<Elemento2,int>(cp,i,cmpElemento2DivPor,elemento2FromString);

            // si no encontre lo que buscaba
            // (el Elemento2 que representa la lista de los
            // divisibles x i
            if( p<0 )
            {
               // creo un Elemento2 y lo agrego a cp
               Elemento2 e2;
               e2.divPor = i;
               e2.c = collCreate<int>(',');
               p = collAdd<Elemento2>(cp,e2,elemento2ToString);
            }

            Elemento2 x = collGetAt<Elemento2>(cp,p,elemento2FromString);
            collAdd<int>(x.c,v,intToString);
            collSetAt<Elemento2>(cp,x,p,elemento2ToString);
         }
      }

      // ingresa el siguiente valor
      cin >> v;
   }


   // imprimo el listado
   imprimir(cp);

   return 0;
}
