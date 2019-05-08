//============================================================================
// Name        : Ejerc36.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
   int tInf, valor = 0, pagoTotal_L = 0, pagoTotal_M = 0, pagoTotal_G = 0, clausurarFabrica = 0, menor = 0;
   char motivo[30], motivoMen[30];
   char gravedad;

   while( tInf != 0)
   {
      cout << " Ingrese el tipo de infraccion: " << endl;
      cin >> tInf;
      cout << " Escriba el motivo de infraccion: " << endl;
      cin >> motivo;
      cout << " Indique el valor de la multa: " << endl;
      cin >> valor;
      cout << " Indique la gravedad: " << endl;
      cin >> gravedad;

      if ( gravedad == 'L' || gravedad == 'l')
         pagoTotal_L += valor;
      if ( gravedad == 'M' || gravedad == 'm')
         pagoTotal_M += valor;
      if( gravedad == 'G' || gravedad == 'g')
         pagoTotal_M += valor;
      if( (gravedad == 'G' || gravedad == 'g') && (tInf == 3 || tInf == 4) )
         clausurarFabrica++;
      if( valor < menor)
      {
         menor = valor;
         strcpy( motivoMen, motivo);
      }
   }

   cout << "El total a pagar con infraccion tipo 'L' es de:" << pagoTotal_L << "$" <<endl;
   cout << "El total a pagar con infraccion tipo 'M' es de:" << pagoTotal_M << "$" <<endl;
   cout << "El total a pagar con infraccion tipo 'G' es de:" << pagoTotal_G << "$" <<endl;
   if( clausurarFabrica > 3 )
      cout << "Se debe clausurar la fabrica" << endl;
   cout << "El motivo de la infraccion de menor valor es el siguiente:" << endl;
   cout << motivoMen << endl;

	return 0;
}
