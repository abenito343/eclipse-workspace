
#ifndef _TMAP_TAD_
#define _TMAP_TAD_

#include <iostream>
#include "Arr.hpp"

using namespace std;

template<typename K,typename T>
struct Map
{
};

template<typename K,typename T>
Map<K,T> mapCreate(int size)
{
   Map<K,T> m;
   return m;
}

template<typename K>
int cmpKK(K a,K b)
{
   return 0;
}

template<typename K,typename T>
bool mapContains(Map<K,T>& m,K k)
{
   return true;
}

template<typename K,typename T>
T* mapGet(Map<K,T>& m,K k)
{
   return NULL;
}

template<typename K,typename T>
T* mapPut(Map<K,T>& m,K k, T v)
{
   return NULL;
}

template<typename K,typename T>
void mapRemove(Map<K,T>& m,K k)
{
   return;
}

template<typename K,typename T> void mapReset(Map<K,T>& m)
{
   return;
}

template<typename K,typename T> bool mapHasNext(Map<K,T>& m)
{
   return true;
}

template<typename K,typename T> T* mapNextValue(Map<K,T>& m)
{
   return NULL;
}

template<typename K,typename T> K mapNextKey(Map<K,T>& m)
{
   K k;
   return k;
}

template<typename K,typename T> void mapSortByKeys(Map<K,T>& m,int cmpKK(K,K))
{
   return;
}

template<typename K,typename T> void mapSortByValues(Map<K,T>& m,int cmpTT(T,T))
{
   return;
}

#endif
