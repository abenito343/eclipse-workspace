//============================================================================
// Name        : Ejerc1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int a,b;
	cout <<"Ingrese 2 numeros:"<< endl;
   cin >> a >> b;

   cout <<"La suma es: " << a+b << endl;
   cout <<"La resta es: " << a-b << endl;
   cout <<"El productos es: " << a*b << endl;
   cout <<"La division entera es: " << a/b << endl;
   cout <<"La division real es: " << (double) a/b << endl;           //Casteo

	return 0;
}
