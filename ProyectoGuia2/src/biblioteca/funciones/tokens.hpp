#ifndef _TTOKENS_T_
#define _TTOKENS_T_

#include <iostream>
#include <stdio.h>
#include "strings.hpp"
using namespace std;

// --[Funciones Token]--

int tokenCount(string s,char sep)
{
   return s==""?0:charCount(s,sep)+1;
}
string getTokenAt(string s,char sep,int i)
{
   i++;
   string sub;
   int cant=tokenCount(s,sep);
   if(i==1)
      sub=substring(s,0,indexOf(s,sep));
   else
      {
         if(i==cant)
            sub=substring(s,indexOfN(s,sep,cant+1)+1);
         else
         {
          sub=substring(s,indexOfN(s,sep,i-1)+1,indexOfN(s,sep,i));
         }
      }
   return sub;
}
void addToken(string& s, char sep, string t)
{
   int cant=tokenCount(s,sep);
   cant==0?s=t:s=s+sep+t;
}
string removeTokenAt(string &s,char sep, int i)
{
   //i++;
   int cant=tokenCount(s,sep);
   string sub="";
   for(int j=0;j<cant;j++)
   {
      if(j!=i)
         addToken(sub,sep,getTokenAt(s,sep,j));
   }
   return sub;
}

void setTokenAt(string &s,char sep,string t,int i)
{
   int cant=tokenCount(s,sep);
   string sub="";
   for(int j=0;j<cant;j++)
   {
      if(j!=i)
         addToken(sub,sep,getTokenAt(s,sep,j));
      else
         addToken(sub,sep,t);
   }
   s=sub;
}
int findToken(string s,char sep,string t)
{
   int cant=tokenCount(s,sep);
   for(int i=0;i<cant;i++ )
   {
      if(getTokenAt(s,sep,i)==t)
      {
         return i;
      }
   }
   return -1;
}
// --[/Funciones Token]--

#endif
