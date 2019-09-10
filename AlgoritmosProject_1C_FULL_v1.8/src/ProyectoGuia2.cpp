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
   int i=0;
   Elemento e = collGetAt<Elemento>(c,i,elementoFromString);

   while( i<collSize<Elemento>(c) )
   {
	 cout << e.valor;
	 i++;
	 e = collGetAt<Elemento>(c,i,elementoFromString);

	 cout << endl;
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











/*

struct Elemento
{
   int valor;
   int aparicion;
};


string elementoToString(Elemento e)
{
	 return intToString(e.valor)+","+intToString(e.aparicion);
}
Elemento elementoFromString(string s)
{
   Elemento e;
   e.valor = stringToInt(getTokenAt(s,',',0));
   e.aparicion = stringToInt(getTokenAt(s,',',1));

   return e;
}

int cmpElemento(Elemento a,Elemento b)
{
   return b.aparicion-a.aparicion;
}
int cmpElemento2(Elemento a,int valor)
{
   return a.valor-valor;
}

void imprimir(Coll<Elemento> c)
{
   int i=0;
   Elemento e = collGetAt<Elemento>(c,i,elementoFromString);

   while( i<collSize<Elemento>(c) )
   {
	 cout << e.valor<<':'<<e.aparicion;
	 i++;
	 e = collGetAt<Elemento>(c,i,elementoFromString);

	 cout << endl;
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

		 if(collFind<Elemento>(c,v,cmpElemento2,elementoFromString)==-1)
		 {
			 e.aparicion=1;
			 collAdd<Elemento>(c,e,elementoToString);
		 }
		 else
		 {
			 e.aparicion= e.aparicion + 1;
			 collSetAt<Elemento>(c,e,collFind<Elemento>(c,v,cmpElemento2,elementoFromString),elementoToString);
		 }
		  cin >> v;
	     }

	   collSort<Elemento>(c,cmpElemento,elementoFromString,elementoToString);
	   imprimir(c);

	   return 0;
}


/*
struct Elemento
{
   int valor;
   int sub;
};


string elementoToString(Elemento e)
{
	 return intToString(e.valor)+","+intToString(e.sub);
}
Elemento elementoFromString(string s)
{
   Elemento e;
   e.valor = stringToInt(getTokenAt(s,',',0));
   e.sub = stringToInt(getTokenAt(s,',',1));

   return e;
}

int cmpElemento(Elemento a,Elemento b)
{
   return b.valor-a.valor;
}
int cmpElemento2(Elemento a,int valor)
{
   return a.valor-valor;
}

void imprimir(Coll<Elemento> c)
{
   int i=0;
   Elemento e = collGetAt<Elemento>(c,i,elementoFromString);

   while( i<collSize<Elemento>(c) )
   {
	 cout << e.valor<<','<<e.sub;
	 i++;
	 e = collGetAt<Elemento>(c,i,elementoFromString);

	 cout << endl;
   }
}

int main()
{
	 Coll<Elemento> c = collCreate<Elemento>();

	   int v,j=0,k=0,l=0;

	   cin >> v;
	   while( v < 10)
	   {
		   if(v==0){

			   j++;
			   k=0;
			   l=0;

			   cout << 4444;
			   cout << endl;
			   cin >> v;

		   }else{

				 Elemento e;
				 e.valor = v;
				 if(j==0){
					 e.sub=0 + 1;
				 }else{
					 e.sub=j + 1;
				 }

				 if(k==0){
					 collAdd<Elemento>(c,e,elementoToString);

				 }else{

					 l=e.valor+l;
					 e.valor=l/k;



					 collSetAt<Elemento>(c,e,j,elementoToString);

				 }
				 k++;
				 cout << 3333;
				 cout << endl;
				 cin >> v;
			 }

	   }
	   collSort<Elemento>(c,cmpElemento,elementoFromString,elementoToString);
	   imprimir(c);
	   cout << 5555;
	   cout << endl;

	   return 0;
}


*/
