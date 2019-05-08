//============================================================================
// Name        : Ejerc7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int a,b,c;
   cout << "Ingrese la longuitud de los 3 lados del triangulo: " << endl;
   cin >> a >> b >> c;

   if( a==b && a==c)
      cout << "Triangulo equilatero" << endl;
   else if( (a==b || a==c || b==c) && (a!=c || a!=b) )
      cout << "Triangulo isosceles" << endl;
   else
      cout << "Triangulo escaleno" << endl;
 	return 0;
}
