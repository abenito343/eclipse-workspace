//============================================================================
// Name        : Ejerc12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int a , b, suma = 0, i = 0;
   cout << "Ingrese 2 valores:" << endl;
   cin >> a >> b;


   if(a==0 || b==0){

	   cout << "El resultado de la multiplicacion con sumas sucesivas es: 0"  << endl;
   }
   else{
		if( a > 0 )
		{
		  while(i < a)
			 {
				suma += b;
				i = i + 1;
			 }
		}

		else
		  while(i < b)
				   {
					  suma += a;
					  i = i + 1;
				   }

		cout << "El resultado de la multiplicacion con sumas sucesivas es: " << suma << endl;
   }

	return 0;
}
