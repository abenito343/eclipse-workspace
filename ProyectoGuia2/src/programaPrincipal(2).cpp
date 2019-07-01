//#include <iostream>
//#include "biblioteca/funciones/strings.hpp"
//#include "biblioteca/funciones/tokens.hpp"
//#include "biblioteca/tads/Coll.hpp"
//using namespace std;
//
//struct Elemento
//{
//   int divPor;
//   int valor;
//};
//
//string elementoToString(Elemento e)
//{
//   return intToString(e.divPor)+","+intToString(e.valor);
//}
//
//Elemento elementoFromString(string s)
//{
//   Elemento e;
//   e.divPor = stringToInt(getTokenAt(s,',',0));
//   e.valor = stringToInt(getTokenAt(s,',',1));
//   return e;
//}
//
//int cmpElemento(Elemento a,Elemento b)
//{
//   return a.divPor-b.divPor;
//}
//
//
//void mostrarResultados(Coll<Elemento> c)
//{
//
//   int i=0;
//   Elemento e = collGetAt<Elemento>(c,i,elementoFromString);
//   while( i<collSize<Elemento>(c) )
//   {
//      int divPor = e.divPor;
//      cout << "Divisibles por: " << divPor << endl;
//      while( e.divPor == divPor )
//      {
//         cout << e.valor << endl;
//
//         i++;
//         e = collGetAt<Elemento>(c,i,elementoFromString);
//      }
//   }
//}
//
//
//int main()
//{
//   // coleccion para guardar los valores que se ingresan
//   Coll<Elemento> c = collCreate<Elemento>();
//
//   int v;
//
//   // leo el primer valaor
//   cin >> v;
//   while( v>0 )
//   {
//      // veo por que numeros es divisible este valor
//      for(int i=2; i<=9; i++)
//      {
//         if( v%i==0 )
//         {
//            // v es divisible por i
//            Elemento e;
//            e.divPor = i;
//            e.valor = v;
//
//            // lo meto en la coleccion
//            collAdd<Elemento>(c,e,elementoToString);
//         }
//      }
//
//      // leo el siguiente valor
//      cin >> v;
//   }
//
//   // ordeno la coleccion por el campo diviPor
//   collSort<Elemento>(c,cmpElemento,elementoFromString,elementoToString);
//
//   // muestro los resultados
//   mostrarResultados(c);
//
//   return 0;
//}
