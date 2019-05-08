//============================================================================
// Name        : Ejerc4.cpp
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
	cout << "Ingrese 2 numeros distintos entre si: " << endl;
	cin >> a >> b;
	if( a > b )
	   cout << "El mayor es: " << a << endl;
	else
	   cout  <<"El mayor es: " << b << endl;

	return 0;
}
