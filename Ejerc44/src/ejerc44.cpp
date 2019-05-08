//============================================================================
// Name        : ejerc44.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
double fraccionessuma(double,double,double,double);
double fraccionesresta(double,double,double,double);
double fraccionesdivision(double,double,double,double);
double fraccionesmultiplicacion(double,double,double,double);


struct fracciones{

	double denominador;
	double numerador;

};

int main() {

	fracciones n1,n2;

cout<< "ingresa dos fracciones"<< endl;
cin >> n1.denominador >> n1.numerador >> n2.denominador >> n2.numerador;

if((n1.denominador && n2.denominador)!=0){
cout<< "suma:"<<fraccionessuma(n1.denominador,n1.numerador,n2.denominador,n2.numerador)<<endl;
cout<< "resta:"<<fraccionesresta(n1.denominador,n1.numerador,n2.denominador,n2.numerador)<<endl;
cout<< "division:"<<fraccionesdivision(n1.denominador,n1.numerador,n2.denominador,n2.numerador)<<endl;
cout<< "multiplicacion:"<<fraccionesmultiplicacion(n1.denominador,n1.numerador,n2.denominador,n2.numerador)<<endl;
}
else{
	cout<< "no se puede dividir por 0!!!";
}


	return 0;
}

double fraccionessuma(double d1,double n1,double d2, double n2){

double r;


	r = (d1/n1)+(d2/n2);

		return r;

}
double fraccionesresta(double d1,double n1,double d2, double n2){

	double r;


		r = (d1/n1)-(d2/n2);

			return r;
}
double fraccionesdivision(double d1,double n1,double d2, double n2){
	double r;


		r = (d1/n1)/(d2/n2);

			return r;
}
double fraccionesmultiplicacion(double d1,double n1,double d2, double n2){


	double r;


		r = (d1/n1)*(d2/n2);

			return r;
}
