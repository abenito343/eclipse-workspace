//============================================================================
// Name        : Ejerc11.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int mes, anio, dias;
   cout << "Ingresar anio: ";
   cin >> anio;
   cout << "Ingresar mes: ";
   cin >> mes;

   switch (mes)
   {
       case 1:
       case 3:
       case 5:
       case 7:
       case 8:
       case 10:
       case 12:
          dias = 31;
          break;
       case 4:
       case 6:
       case 9:
       case 11:
          dias = 30;
          break;
       case 2:
    if (anio % 4 == 0)
       dias = 29;
    else
       dias = 28;
       break;
    }

    cout << "El mes tiene " << dias << " dias" << endl;

	return 0;
}
