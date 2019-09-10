#include <iostream>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/tads/Coll.hpp"
using namespace std;

//se ingresa un conjunto de numeros que termina con con 0
//se  pide el listado de numeros que son superiores al promedio de numeros ingresados


struct Elemento{
	int valor;
};

string elementoToString(Elemento e)
{
	 return intToString(e.valor);
}
Elemento elementoFromString(string s)
{
   Elemento e;
   e.valor = stringToInt(getTokenAt(s,',',0));

   return e;
}

int cmpElemento(Elemento a,Elemento b)
{
	 return a.valor-b.valor;
}

void imprimir(Coll<Elemento> c)
{
   int i=0,l=0;

   Elemento e = collGetAt<Elemento>(c,i,elementoFromString);

   while( i<collSize<Elemento>(c) )
   {

	l=(e.valor+l);
	i++;

	e = collGetAt<Elemento>(c,i,elementoFromString);

   }
   l=l/i;
   i=0;

   while( i<collSize<Elemento>(c) )
      {

		 if(e.valor>l){
			cout << "el promedio es:"<<l;
			cout << endl;

			cout << e.valor;
			cout << endl;
		 }

		i++;
		e = collGetAt<Elemento>(c,i,elementoFromString);


      }
}
int main()
{
	 Coll<Elemento> c = collCreate<Elemento>();

	   int v;

	   cin >> v;

	   while( v>0 )
	     {
          Elemento e;
		  e.valor = v;

		  collAdd<Elemento>(c,e,elementoToString);

		  cin >> v;
	     }

	   collSort<Elemento>(c,cmpElemento,elementoFromString,elementoToString);
	   imprimir(c);

	   return 0;
}

