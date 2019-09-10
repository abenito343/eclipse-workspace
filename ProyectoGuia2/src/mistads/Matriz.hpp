
#ifndef _TADMATRIZ_
#define _TADMATRIZ_

#include <iostream>
#include "../biblioteca/funciones/strings.hpp"
using namespace std;

struct Matriz
{
   string s;
};

Matriz matrizCreate(string s)
{
   Matriz m;
   m.s = s;
   return m;
}


#endif
