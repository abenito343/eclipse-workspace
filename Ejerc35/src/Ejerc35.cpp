//============================================================================
// Name        : Ejerc35.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int idCont, peso, idPuerto, pesoTotal = 0, mayor = 0, mayorId, c1 = 0, c2 = 0, c3 = 0;

   for ( int cont = 0; cont < 5; cont++)
   {
      cout << "Ingrese el nro de puerto: " << endl;
      cin >> idPuerto;
      cout << "Ingrese el id del contenedor del contenedor: " << endl;
      cin >> idCont;
      cout << "Ingrese peso del contenedor: " << endl;
      cin >> peso;

      pesoTotal += peso;
      if( peso > mayor)
      {
         mayor = peso;
         mayorId = idCont;
      }
      switch(idPuerto)
      {
         case 1:
            c1++;
            break;
         case 2:
            c2++;
            break;
         case 3:
            c3++;
            break;
      }
   }

   cout << "El peso total que el buque debe trasladar es de:" << pesoTotal << "kg" << endl;
   cout << "El contenedor de mayor peso es el: " << mayorId << "kg" << endl;
   cout << "Al puerto 1 se trasladan " << c1 << " contendores" << endl;
   cout << "Al puerto 2 se trasladan " << c2 << " contendores" << endl;
   cout << "Al puerto 3 se trasladan " << c3 << " contendores" << endl;

   return 0;
}
