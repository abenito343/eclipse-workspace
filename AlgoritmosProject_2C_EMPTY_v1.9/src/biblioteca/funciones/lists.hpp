#ifndef _TLIST_T_
#define _TLIST_T_

#include <iostream>
#include <stdio.h>

template <typename T> struct Node
{
   T info;       // valor que contiene el nodo
   Node<T>* sig; // puntero al siguiente nodo
};

template <typename T> Node<T>* add(Node<T>*& p, T x)
{
   return NULL;
}

template <typename T> void free(Node<T>*& p)
{
   return;
}

template <typename T, typename K>
Node<T>* find(Node<T>* p, K v, int cmpTK(T,K) )
{
   return NULL;
}

template <typename T, typename K>
void remove(Node<T>*& p, K v, int cmpTK(T,K))
{
   return;
}

template <typename T>
T removeFirst(Node<T>*& p)
{
   T t;
   return t;
}

template <typename T>
void insertFirst(Node<T>*& p, T v)
{
   return;
}

template <typename T>
Node<T>* orderedInsert(Node<T>*& p, T v, int cmpTT(T,T) )
{
   return NULL;
}

template <typename T>
void sort(Node<T>*& p, int cmpTT(T,T))
{
   return;
}

template <typename T>
Node<T>* searchAndInsert(Node<T>*& p,T v,bool& enc,int cmpTT(T,T))
{
   return NULL;
}

template <typename T> bool isEmpty(Node<T>* p)
{
   return true;
}


template <typename T> void push(Node<T>*& p, T v)
{
   return;
}

template <typename T> T pop(Node<T>*& p)
{
   T t;
   return t;
}

template <typename T>
void enqueue(Node<T>*& p, Node<T>*& q, T v)
{
   return;
}

template <typename T>
T dequeue(Node<T>*& p, Node<T>*& q)
{
   T t;
   return t;
}

#endif
