#ifndef _TFILES_T_
#define _TFILES_T_

#include <iostream>
#include <stdio.h>

template<typename T> T read(FILE* f)
{
   T t;
   return t;
}

template<typename T> void write(FILE* f, T v)
{
   return;
}

template<typename T> void seek(FILE* f, int n)
{
   return;
}

template<typename T> long fileSize(FILE* f)
{
   return 0;
}

template<typename T> long filePos(FILE* f)
{
   return 0;
}

#endif
