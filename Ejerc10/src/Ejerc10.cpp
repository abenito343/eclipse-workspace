//============================================================================
// Name        : Ejerc10.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   //int fecha = 20190410;
   int fecha1, fecha2 ;
   cout << "Ingrese las fechas en formato aaaammdd: " << endl;
   cin >> fecha1 >> fecha2 ;

   if (fecha1 > fecha2)
      cout << "La fecha mas reciente es: " << fecha1 << endl;
   else
    cout << "La fecha mas reciente es: " << fecha2 << endl;

//anio biciesto chupamela
	return 0;
}
