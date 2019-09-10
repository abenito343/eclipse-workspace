#ifndef _TLIST_TAD_
#define _TLIST_TAD_

#include <iostream>
#include "../funciones/lists.hpp"

using namespace std;

template<typename T>
struct List
{
};

template<typename T>
List<T> listCreate()
{
   List<T> lst;
   return lst;
}

template<typename T>
T* listAdd(List<T>& lst,T v)
{
   return NULL;
}

template<typename T,typename K>
void listRemove(List<T>& lst,K k, int cmpTK(T,K))
{
   return;
}

template<typename T,typename K>
T* listFind(List<T> lst,K k, int cmpTK(T,K))
{
   return NULL;
}

template<typename T>
T* listOrderedInsert(List<T>& lst,T t,int cmpTT(T,T))
{
   return NULL;
}

template<typename T>
void listSort(List<T>& lst,int cmpTT(T,T))
{
   return;
}

template<typename T>
bool listHasNext(List<T>& lst)
{
   return true;
}

template<typename T>
T* listNext(List<T>& lst)
{
   return NULL;
}

template<typename T>
void listReset(List<T>& lst)
{
   return;
}

template<typename T>
void listFree(List<T>& lst)
{
   return;
}

#endif
