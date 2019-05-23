#ifndef _TSTRINGS_T_
#define _TSTRINGS_T_

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

// --[ Funciones Basicas ]--

// Descripcion: Retorna la longitud de la cadena s
// Paramerto:
//    s - La cadena cuya longitud se desea conocer
// Retorna: la longitud de la cadena s
// Ejemplo: l
int length(string s)
{
	int i=0;
	while (s[i]!='\0'){
			i++;}

   return i;
}
int powX(int a,int b)
{
	int x = a;
	for (int i = 1; i<b; i++)
	{
		x = x*a;
	}
	return x;
}

// Retorna la cantidad de veces que la cadena s contiene a c
int charCount(string s,char c)
{
   // PROGRAMAR AQUI...
	int i=0;
	int u=0;
	while (s[i]!='\0'){
		i++;
		if(s[i]==c)
			u++;
	}
   return u;
}

// Retorna la subcadena de s comprendida entre d (inclusive) y h (no inclusive)
string substring(string s,int d,int h)
{
   // PROGRAMAR AQUI...
   return "";
}

// Retorna la subcadena de s que va desde d (inclusive) hasta el final
string substring(string s,int d) // ok
{
   // PROGRAMAR AQUI...
   return "";
}

// Retorna la posicion de la primer ocurrencia
// de c dentro s, o -1 si s no contiene a c
int indexOf(string s,char c) // ok
{
   // PROGRAMAR AQUI...
   return 0;
}

// Retorna la posicion de la primer ocurrencia de c dentro de s
// considerando la subcadena de s que va desde offset hasta el final.
// Ejemplo: indexOf("ALGORITMOS",'O',7) retorna: 1
int indexOf(string s,char c,int offSet) // ok
{
   // PROGRAMAR AQUI...
   return 0;
}

// Retorna la posicion de la ultima ocurrencia de c dentro de s
// o -1 si s no contiene a c
int lastIndexOf(string s,char c)
{
   // PROGRAMAR AQUI...
   return 0;
}

// Retorna la posicion de la n-esima ocurrencia de c dentro de s.
// Por ejemplo: indexOfN("pedro|pablo|juan|rolo",'|',2) retorna 11.
int indexOfN(string s,char c,int n)
{
   // PROGRAMAR AQUI...
   return 0;
}

// Retorna el valor numerico de ch.
// Ejemplo: charToInt('4') retorna: 4.
int charToInt(char ch)
{
   // PROGRAMAR AQUI...
   return 0;
}

// Retorna el valor char de i.
// Ejemplo: intToChar(4) retorna: '4'.
char intToChar(int i)
{
   // PROGRAMAR AQUI...
   return 'x';
}

// retorna el i-esimo digito de n contando desde la derecha
int getDigit(int n,int i) // ok
{
	if ( n < 0 )
			n *= -1;
	 	int dig;
		if ( i == 0)
			dig = (n%10);
		else{
			int a = pow( 10, i + 1);
			int b = pow( 10, i);		// tira error de "tipos operandos"
			dig = (n % a)/b;			// si hago todo en una linea
		}
		return dig;
   return 0;
}

int digitCount(int n) // ok
{

	if( n < 0)
		n *= -1; // no me da el valor absoluto , marca error ????? -> pongo n*(-1)
	// n = abs(n)???;
	int c = 1;
	int dig = (n/10);
	if (n <= 9)
		return c;
	else
	{
		while( dig > 0 ){
			dig /= 10;
			c++;
		}
		return c;
	}
   return 0;
}

string intToString(int num) // ok
{
   // PROGRAMAR AQUI...
   return "";
}

int stringToInt(string s,int b) // ok
{



   return 0;
}

int stringToInt(string s) // ok
{
   // PROGRAMAR AQUI...
   return 0;
}

string charToString(char c)
{
   // PROGRAMAR AQUI...
   return "";
}

char stringToChar(string s)
{
   // PROGRAMAR AQUI...
   return 'X';
}

string doubleToString(double d)
{
   // PROGRAMAR AQUI...
   return "";
}

double stringToDouble(string s)
{
   // PROGRAMAR AQUI...
   return 0;
}


bool isEmpty(string s)
{
   // PROGRAMAR AQUI...
   return true;
}

bool contains(string s, char c)
{
   // PROGRAMAR AQUI...
   return true;
}

string replace(string s, char oldChar, char newChar)
{
   // PROGRAMAR AQUI...
   return "";
}

string insertAt(string s,int pos,char c)
{
   // PROGRAMAR AQUI...
   return "";
}

string removeAt(string s,int pos)
{
   // PROGRAMAR AQUI...
   return "";
}

string ltrim(string s)
{
   // PROGRAMAR AQUI...
   return "";
}

string rtrim(string s)
{
   // PROGRAMAR AQUI...
   return "";
}

string trim(string s)
{
   // PROGRAMAR AQUI...
   return "";
}

string replicate(char c,int n)
{
   // PROGRAMAR AQUI...
   return "";
}

string spaces(int n)
{
	string s;
	for (int i =0; i <n; i++)

			s+=32;

   return s;
}

string lpad(string s,int n,char c)
{
   // PROGRAMAR AQUI...
   return "";
}

string rpad(string s,int n,char c)
{
   // PROGRAMAR AQUI...
   return "";
}

string cpad(string s,int n,char c)
{
   // PROGRAMAR AQUI...
   return "";
}

bool isDigit(char c)
{
   // PROGRAMAR AQUI...
   return true;
}

bool isLetter(char c)
{
   // PROGRAMAR AQUI...
   return true;
}

bool isUpperCase(char c)
{
   // PROGRAMAR AQUI...
   return true;
}

bool isLowerCase(char c)
{
   // PROGRAMAR AQUI...
   return true;
}

char toUpperCase(char c)
{
   // PROGRAMAR AQUI...
   return 'X';
}

char toLowerCase(char c)
{
   // PROGRAMAR AQUI...
   return 'X';
}








#endif
