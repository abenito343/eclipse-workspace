//============================================================================
// Name        : permutar.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void permutar(int &a,int&b);

int main() {
	int a,b;

	 cout << "Ingrese 2 valores: " << endl;
	 cin >> a >> b;

	 permutar(a,b);

	cout << "a vale:" << a  << endl;
	cout << "b vale:" << b  << endl;

	return 0;
}
void permutar(int &a,int&b){
	int aux;
	aux=a;
	a=b;
	b=aux;
}
