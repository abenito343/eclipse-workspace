//============================================================================
// Name        : Ejerc29.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int dni = 1, fecha, pago, control = 1, personas_pagando = 0, cantpagos = 0, cantotal = 0, sumapagos = 0, dnimayor = 0, impmayor = -1, total = 0;
   bool b = true;

   cout << "Ingrese el dni de la persona (0 para terminar) , fecha de pago e importe " << endl;
   cin >> dni;
   if( dni != 0)
      cin >> fecha >> pago;

   control = dni ;

	while( dni != 0)
	{
	   while ( dni == control)
	   {
	      cantpagos++;
	      cantotal += pago;

	      if( pago != 0 && b == true)
	      {
	         personas_pagando++;
	         sumapagos += pago;
	         b = false;
	      }

	      if (impmayor < cantotal)
	      {
	         impmayor = cantotal;
	         dnimayor = dni;
	      }

	      cout << "Ingrese el dni de la persona (0 para terminar) , fecha de pago e importe " << endl;
	      cin >> dni;
	      if( dni != 0)
	         cin >> fecha >> pago;
	   }

	   if( dni != control )
	   {
	      cout << "La persona de dni " << control << " llevo a cabo un total de " << cantpagos << " pagos" << endl;
	      cout << "Su importe promedio de pagos fue de: " << cantotal/cantpagos << "$" << endl;
	      cout << "La cantidad total de importes pagados fue de " << cantotal << "$" << endl << endl;
	   }

	   control = dni;
	   cantpagos = 0;
	   cantotal = 0;
	   b = true;

	}

	cout << "La cantidad de personas que hicieron al menos 1 pago es: " << personas_pagando << endl;
   cout << "El promedio de todos los pagos es: " << (double) sumapagos/personas_pagando << "$" << endl;
   cout << "El dni de la persona que pago mas es: " << dnimayor << endl;

	return 0;
}
