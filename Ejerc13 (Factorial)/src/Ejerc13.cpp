//============================================================================
// Name        : Ejerc13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Factorial
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int n, i = 2, f = 1;
	cout << "Ingrese el numero que desea calcular el factorial: " << endl;
	cin >> n;

	while( n >= i)
	{
	   f = f * i ;
	   i++;
	}

	cout << "El resultado es:" << f << endl;

	return 0;
}
