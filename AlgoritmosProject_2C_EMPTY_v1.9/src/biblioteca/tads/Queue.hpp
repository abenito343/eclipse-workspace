#ifndef _TQUEUE_TAD_
#define _TQUEUE_TAD_

#include <iostream>
#include "../funciones/lists.hpp"

using namespace std;

template<typename T>
struct Queue
{
};

template<typename T>
Queue<T> queueCreate()
{
   Queue<T> q;
   return q;
}

template<typename T>
void queueEnqueue(Queue<T>& q,T v)
{
   return;
}

template<typename T>
T queueDequeue(Queue<T>& q)
{
   T t;
   return t;
}

template<typename T>
bool queueIsEmpty(Queue<T> q)
{
   return true;
}

template<typename T>
void queueUndequeue(Queue<T> q)
{
   return;
}

#endif
