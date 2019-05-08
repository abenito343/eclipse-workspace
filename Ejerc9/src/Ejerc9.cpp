//============================================================================
// Name        : Ejerc9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
   int anio;
   int mes;
   int dia;


	cout << "Ingrese anio mes y dia: " << endl;
	cin >> anio >> mes >> dia;


   //20190410

   int fecha = (anio*10000) + mes*100 + dia ;

   cout << fecha << endl;

	return 0;
}
