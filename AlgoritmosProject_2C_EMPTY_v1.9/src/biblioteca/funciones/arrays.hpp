#ifndef _TARRAYS_T_
#define _TARRAYS_T_

#include <iostream>

template <typename T> int add(T arr[], int& len, T v)
{
   return 0;
}

template <typename T, typename K>
int find(T arr[], int len, K v, int cmpTK(T,K))
{
   return 0;
}

template <typename T>
void remove(T arr[], int& len, int pos)
{
   return;
}

template <typename T>
void insert(T arr[], int& len, T v, int pos)
{
   return;
}

template <typename T>
int orderedInsert(T arr[], int& len, T v, int cmpTT(T,T))
{
   return 0;
}

template <typename T>
int searchAndInsert(T arr[], int& len, T v, bool& enc, int cmpTT(T,T))
{
   return 0;
}

template <typename T>
void sort(T arr[], int len, int cmpTT(T,T))
{
   return;
}

template<typename T, typename K>
int binarySearch(T a[], int len, K v, int cmpTK(T,K), bool& enc)
{
   return 0;
}

#endif
