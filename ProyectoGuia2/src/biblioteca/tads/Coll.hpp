#ifndef _TCOLL_T_
#define _TCOLL_T_

#include <iostream>
#include "../funciones/strings.hpp"

using namespace std;

template<typename T>
struct Coll
{
   string s;
   char sep;
};

template<typename T>
Coll<T> collCreate(char sep='|')
{//Se hardcodea el separador en caso de que no me pase cual es al caracter '|'
   Coll<T> ret;
   ret.s="";
   ret.sep=sep;
   return ret;
}

template<typename T>
int collSize(Coll<T> c)
{
   return tokenCount(c.s,c.sep);
}

template<typename T>
void collRemoveAll(Coll<T> &c)
{//Uso el create asi me crea uno vacio y con un sep hardcodeado
   c=collCreate<T>();
}

template<typename T>
void collRemoveAt(Coll<T> &c,int p)
{
   c.s=removeTokenAt(c.s,c.sep,p);
}

template<typename T>
void collAddString(Coll<T>& coll, string s)
{
   addToken(coll.s,coll.sep,s);
}

template<typename T>
void collSetStringAt(Coll<T> &c,string s,int p)
{
   setTokenAt(c.s,c.sep,s,p);
}

template<typename T>
string collGetStringAt(Coll<T>c, int p)
{
   return getTokenAt(c.s,c.sep,p);
}

template<typename T>
int collFindString(Coll<T> c,string s)
{
   return findToken(c.s,c.sep,s);
}

template<typename T>
void collAddInt(Coll<T>& c,int i)
{
   addToken(c.s,c.sep,intToString(i));
}

template<typename T>
void collSetIntAt(Coll<T>& c,int i, int p)
{
   setTokenAt(c.s,c.sep,intToString(i),p);
}

template<typename T>
int collGetIntAt(Coll<T> c,int p)
{
   return stringToInt(collGetStringAt(c,p));
}

template<typename T>
int collFindInt(Coll<T> c,int i)
{
   return findToken(c.s,c.sep,intToString(i));
}
//*****
template<typename T>
void collAddDouble(Coll<T>& c,double d)
{
   addToken(c.s,c.sep,doubleToString(d));
}

template<typename T>
void collSetDoubleAt(Coll<T>& c,double d, int p)
{
   setTokenAt(c.s,c.sep,doubleToString(d),p);
}

template<typename T>
double collGetDoubleAt(Coll<T> c,int p)
{
   return stringToDouble(collGetStringAt(c,p));
}

template<typename T>
void collAddChar(Coll<T>& c,char ch)
{
   addToken(c.s,c.sep,charToString(ch));
}

template<typename T>
void collSetCharAt(Coll<T>& c,char ch, int p)
{
   setTokenAt(c.s,c.sep,charToString(ch),p);
}

template<typename T>
char collGetCharAt(Coll<T> c,int p)
{
   return stringToChar(collGetStringAt(c,p));
}

template<typename T>
int collFindChar(Coll<T> c,char ch)
{
   return findToken(c.s,c.sep,charToString(ch));
}

template<typename T>
void collAdd(Coll<T>& c, T t,string toString(T))//recibe una funcion toString que es la que pasa a string el dato t.
{
   addToken(c.s,c.sep,toString(t));
}

template<typename T>
void collSetAt(Coll<T>& c,T t, int p, string tToString(T))
{
   setTokenAt(c.s,c.sep,tToString(t),p);
}

template<typename T>
T collGetAt(Coll<T> c, int p, T stringToT(string))
{
   return stringToT(collGetStringAt(c,p));
}

template<typename T,typename K>
int collFind(Coll<T> c, K k, int compare(T,K),T stringToT(string))
{
   bool b=true;
   int i=0;
   T t;
   int lon=collSize(c);
   while(b)
   {
      t=collGetAt(c,i,stringToT);
      if(compare(t,k)==0)
      {
         return i;
         b=false;
      }

      if(i>lon)
         b=false;
      i++;
   }
   return -1;
}

template <typename T>
void collSort(Coll<T> &c,int compare(T,T),T stringToT(string),string tToString(T))
{
   /* Descripcion: "Ordena la coleccion c segun el criterio
    * de comparacion que establece la funcion compare"
    * No me quedaba claro la descripcion
    * de lo que debia hacer esta funcion
    * pero yo hice que ordene siempre de menor a mayor
    * comparando con la funcion compare que me envien.
    * */
   string s="";
   T t1;
   T t2;
   int cSize=collSize(c);
   int cantidadCambios=0;
   bool ordenado=false;
   while(!ordenado)
   {
      for(int i=0;i<cSize-1;i++)
      {
         t1=collGetAt(c,i,stringToT);
         t2=collGetAt(c,i+1,stringToT);
         if(compare(t1,t2)>0)
         {
            collSetAt(c,t2,i,tToString);
            collSetAt(c,t1,i+1,tToString);
            cantidadCambios++;
         }
      }
      if(cantidadCambios==0)
         ordenado=true;
      cantidadCambios=0;
   }
}

#endif
