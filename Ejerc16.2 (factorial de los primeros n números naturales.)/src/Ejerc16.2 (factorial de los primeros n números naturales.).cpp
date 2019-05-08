//============================================================================
// Name        : ).cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int n, num = 1, i = 2, f = 1;
      cout << "Ingrese el numero " << endl;
      cin >> n;

      for (int cont = 1 ; cont <= n ; cont++)
      {

         while( num >= i)
               {
                  f = f * i ;
                  i++;
               }
         cout << f << endl;
         num++;
      }

	return 0;
}
