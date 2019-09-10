#ifndef _TARR_TAD_
#define _TARR_TAD_

#include <iostream>
#include <stdlib.h>
#include "../funciones/arrays.hpp"

using namespace std;

template<typename T>
struct Arr
{
};

template<typename T>
Arr<T> arrCreate(int size)
{
   Arr<T> a;
   return a;
}

template<typename T>
int arrLength(Arr<T> arr)
{
   return 0;
}

template<typename T>
int arrSize(Arr<T> arr)
{
   return 0;
}

template<typename T>
bool arrIsFull(Arr<T> arr)
{
   return true;
}

template<typename T>
void _arrResize(Arr<T>& arr,int size)
{
   return;
}

template<typename T>
int arrAdd(Arr<T>& arr,T v)
{
   return 0;
}

template<typename T>
T* arrGet(Arr<T> arr,int p)
{
   return NULL;
}

template<typename T>
void arrInsert(Arr<T>& arr,T v,int p)
{
   return;
}

template<typename T>
void arrRemove(Arr<T>& arr,int p)
{
   return;
}

template<typename T,typename K>
int arrFind(Arr<T>& arr,K k, int cmpTK(T,K))
{
   return 0;
}

template<typename T>
void arrSet(Arr<T>& arr,T v,int p)
{
   return;
}

template<typename T>
void arrSort(Arr<T>& arr,int cmpTT(T,T))
{
   return;
}

#endif
