//============================================================================
// Name        : Ejerc42.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void fechaDividir(int,int &,int &, int&);

int main() {
   int f,a,m,d;

   cout << "Ingrese fecha formato aaaammdd: " << endl;
   cin >> f;

   fechaDividir(f,a,m,d);

   cout << "A�o: " << a << endl;
   cout << "Mes: " << m << endl;
   cout << "Dia: " << d << endl;

	return 0;
}
void fechaDividir(int f,int &a,int&m,int&d){
	 a = f/10000;
	 m = (f/100)%100;
	 d = f%100;
}
