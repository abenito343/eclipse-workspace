//============================================================================
// Name        : Ejerc3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a;
	cout <<"Ingrese 1 numero:"<< endl;
    cin >> a ;

    cout <<"La division real por 5 es: " << (double) a/5 << endl;
    cout <<"El resto de la division entera es: " << a%5 << endl;
    cout <<"La septima parte de la quinta parte es: " << (double) a/5/7 << endl;

	return 0;
}
