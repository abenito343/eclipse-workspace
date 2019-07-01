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
   while(s[i]!='\0')
   i++;

   return i;
}

// Retorna la cantidad de veces que la cadena s contiene a c
int charCount(string s, char c)
{
   int i,h;
   i = h = 0;
   while(s[i]!='\0')
   {
      if(s[i]==c)
         h++;

      i++;
   }
   return h;
}

// Retorna la subcadena de s comprendida entre d (inclusive) y h (no inclusive)
string substring(string s,int d, int h)//d inclusive - h noinclusive
{
   string sub;
   for(int i=d;i<h;i++)
      sub+=s[i];

   return sub;
}

// Retorna la subcadena de s que va desde d (inclusive) hasta el final
string substring(string s, int d)//Retorna la subcadena comprendida entre d y el final
{
   string sub = substring(s,d,length(s));
   return sub;
}

// Retorna la posicion de la primer ocurrencia
// de c dentro s, o -1 si s no contiene a c
int indexOf(string s, char c)
{
   int i=0;
   while(s[i]!='\0')
   {
      if(s[i]==c)
         return i;
      i++;
   }
   return -1;
}

// Retorna la posicion de la primer ocurrencia de c dentro de s
// considerando la subcadena de s que va desde offset hasta el final.
// Ejemplo: indexOf("ALGORITMOS",'O',7) retorna: 1
int indexOf(string s,char c, int offSet)
{
   string sub = substring(s,offSet);
   int index = indexOf(sub,c);
   return index;
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
   int acu=0;
   for(int i=0;i<n;i++)
      acu+=indexOf(s,c,acu)+1;

   return acu-1;
}
int pow(int x, int y)
{
   int z=1;
   for(int i=0;i<y;i++)
      z=z*x;
   return z;
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

// Retorna el valor numerico de ch.
// Ejemplo: charToInt('4') retorna: 4.
int charToInt(char c)
{
 /*  if('A' <= c && c <= 'Z')//Esto es para cuando es stringToInt quier usar un hexa
      return c-'7';
      else
         return c-'0';
   */
   return ('A' <= c && c <= 'Z')?c-'7':c-'0';
}

// Retorna el valor char de i.
// Ejemplo: intToChar(4) retorna: '4'.
char intToChar(int i)
{
   return i+'0';
}

// retorna el i-esimo digito de n contando desde la derecha
int getDigit(int n, int i)
{
   int aux = n/(pow(10,i));
   aux=aux%10;
   return aux;
}


int digitCount(int i)
{
   int cont=0;
   while(i!=0)
   {
      i=i/10;
      cont++;
   }
   return cont;
}
string intToString(int i)
{
   bool b;
   string s="";
   //Funciona para enteros negativos
   i<0?b=true,i=abs(i):b=false;
   int h=digitCount(i);
   int aux;
   for(int g=0;g<h;g++)
   {
      aux=getDigit(i,g);
      s=intToChar(aux)+s;
   }
   return b?"-"+s:s;
}
int stringToInt(string s,int b)
{//Se puede pasar un numero en Hexa y la base 16 y lo resuelve gracias al charToInt
 //Ademas de que tambien calcula enteros negativos en el string
   int a,nro;
   bool f;
   a=nro=0;
   if(s[0]=='-')
      f=false;
   else
      f=true;

   if(f)
   {
	   for(int i=0;i<length(s);i++)
      {
         nro+=(charToInt(s[i])* pow(b,(length(s)-1)-i));
      }
   }
   else
   {
      for(int i=1;i<length(s);i++)
      {
         nro+=(charToInt(s[i])* pow(b,(length(s)-1)-i));
      }
      nro*=-1;
   }

   return nro;
}
int stringToInt(string s)
{
   return stringToInt(s,10);
}
string charToString(char c)
{
   string s="_";
   s[0]=c;
   return s;
}

char stringToChar(string s)
{
   char c=s[0];
   return c;
}

string doubleToString(double d)
{//Utilizo presicion de dos decimales
   int parteEntera = (int)d;
   int parteDecimal = (d-parteEntera)*100;
   if(digitCount(parteDecimal)==1)
      return intToString(parteEntera)+".0"+intToString(parteDecimal);
   else
   return intToString(parteEntera)+"."+intToString(parteDecimal);
}
double stringToDouble(string s)
{//Devuelve un double de presicion 2
   bool b=true;
   string s1,s2;
   s1=s2="";
   int cont=0;
   for(int j=0;j<length(s);j++)
   {
      if(s[j]=='.')
      {
         b=false;
      }
      if(b)
         s1+=s[j];
      else
      {
         if(cont<2)
            s2+=s[j+1];
         cont++;
      }
   }
   int pEnt = stringToInt(s1);
   int pFrac = stringToInt(s2);
   double d=pEnt+(pFrac*0.01);
   return d;
}


bool isEmpty(string s)
{
   return length(s)==0?true:false;
}
bool contains(string s,char c)
{
      return indexOf(s,c)==-1?false:true;
}
string replace(string s, char oldChar, char newChar)
{
   int i=0;
   while(s[i]!='\0')
   {
      if(s[i]==oldChar)
         s[i]=newChar;
      i++;
   }
   return s;
}
string insertAt(string s, int pos, char c)
{
   return substring(s,0,pos)+c+substring(s,pos);
}
string removeAt(string s,int pos)
{
   return substring(s,0,pos)+substring(s,pos+1);
}
string ltrim(string s)
{
   string sub;
   int i=0;
   bool b=true;
   while(b)
   {
      if(s[i]!='_')//Para probar si funciona utilizo de caracter vacio el '_' e ingrese una palabra como "__hola" y me devolvio "hola"
        {sub=substring(s,i);
           b=false;
        }
      i++;
   }
   return sub;
}
string rtrim(string s)
{
   string sub;
   int i=length(s)-1;
   bool b=true;
   while(b)
   {
      if(s[i]!='_')//Para probar si funciona utilizo de caracter vacio el '_' e ingrese una palabra como "hola__" y me devolvio "hola"
        {sub=substring(s,0,i+1);
           b=false;
        }
      i--;
   }
   return sub;
}
string trim(string s)
{
   return rtrim(ltrim(s));
}
string replicate(int n,char c)
{
   string s="";
   for(int i=0;i<n;i++)
      s+=c;
   return s;
}
string spaces(int n)
{
   return replicate(n,'_');
}
string lpad(string s,int n,char c)
{  //Retorna una cadena identica a s pero de longitud n complementando
   //de ser necesario con caracteres c a la izquierda.
   return replicate(n-length(s),c)+s;
}
string rpad(string s,int n,char c)
{//return n>length(s)?(s+replicate(n-length(s),c)):s;
   return s+replicate(n-length(s),c);
}
string cpad(string s,int n,char c)
{
   int lon = length(s);//lo guardo en una variable para
   //que no haga reitereadas llamas a la funcion length.
   return lpad(rpad(s,((n-lon)/2)+lon,c),n,c);
}
bool isDigit(char c)
{
   return c>=48&&c<=57?true:false;
}
bool isLetter(char c)
{
   return (c>=65&&c<=90)||(c>=97&&c<=122)?true:false;
}
bool isUpperCase(char c)
{
   return (c>=65&&c<=90)?true:false;
}
bool isLowerCase(char c)
{
   return (c>=97&&c<=122)?true:false;
}
char toUpperCase(char c)
{
   return c-32;
}
char toLowerCase(char c)
{
   return c+32;
}

#endif
