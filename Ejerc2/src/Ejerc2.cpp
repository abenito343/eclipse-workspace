//============================================================================
// Name        : Ejerc2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	 int a,b;
	 cout <<"Ingrese 2 numeros:"<< endl;
     cin >> a >> b;

     if(b==0){
	   cout <<"NO SE PUEDE DIVIDIR POR 0" <<  endl;
     }else{
	   cout <<"La division real es: " << (double) a/b << endl;
     }
	   //Casteo

		return 0;

}
