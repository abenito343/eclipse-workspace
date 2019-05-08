//============================================================================
// Name        : Ejerc43.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int toMin(int&);

int main() {
	int t,m;

	cout << "Ingrese hora formato hhmm: " << endl;
	cin >> t;

	m =toMin(t);

	cout << "Minutos totales: " << m << endl;
	return 0;
}
int toMin(int &t){
	int min;

	min=(t/100)*60 +t %100;

	return min;
}
