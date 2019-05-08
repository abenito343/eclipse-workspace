//============================================================================
// Name        : Ejerc8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int f ;             // 2019-04-13 (aaaammdd)

   cout <<"Ingrese 1 fecha en formato aaaammdd:"<< endl;
   cin >> f ;

   int a = f/10000;
   int mes = (f/100)%100;
   int dia = f%100;

   cout << "A�o: " << a << endl;
   cout << "Mes: " << mes << endl;
   cout << "Dia: " << dia << endl;

	return 0;
}
