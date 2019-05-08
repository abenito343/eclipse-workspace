//============================================================================
// Name        : Ejerc34.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int sueldo, cant_billetes, suma, b60, b40, b10;
   int i,cant_aux=0;
      cout << "Ingrese el sueldo: " << endl;
      cin >> sueldo;

      for(i=0;i<2;i++){
    	  cant_billetes = 0;
		  suma = 0;
		  b60=0;
		  b40=0;
		  b10=0;
		  suma = sueldo;

		  if(sueldo>=200)
		  {
			  suma-=80;
			  cant_billetes += 2;

		  }

		  if(i==0){

			   b60 = suma / 60;
			   cant_billetes += b60;

			   suma -= b60 * 60;
			   b40 = suma / 40;
			   cant_billetes += b40;
			   suma -= b40 * 40;
			   if(sueldo>=200)
			   		   b40 += 2;
			   //cout << "paso" << endl;
		  }else{

			   b40 = suma / 40;
			   cant_billetes += b40;
			   suma -= b40 * 40;
			   b60 = suma / 60;
			   cant_billetes += b60;
			   suma -= b60 * 60;
			   if(sueldo>=200)
			   		   b40 += 2;
			 // cout << "paso" << endl;
		  }

       b10 = suma / 10;
       cant_billetes += b10;


       if(i==0){
    	   cant_aux=cant_billetes;   }

       if(cant_aux>cant_billetes){
    	   cant_aux=cant_billetes;
      }else{
    	  cant_billetes = 0;
    	  suma = 0;
    	  b60=0;
    	  b40=0;
    	  b10=0;
    	 suma = sueldo;
    	 if(sueldo>=200)
    	 		  {
    	 			  suma-=80;
    	 			  cant_billetes += 2;
    	 		  }


		   b60 = suma / 60;
		   cant_billetes += b60;

		   suma -= b60 * 60;
		   b40 = suma / 40;
		   cant_billetes += b40;
		   suma -= b40 * 40;
		   b10 = suma / 10;
		   cant_billetes += b10;

		   if(sueldo>=200)
		   b40 += 2;
      }

      }


       cout << "Para pagar el sueldo de " << sueldo << "$ se necesitan:" << endl;
       cout << b60 << " billetes de $60" << endl;
       cout << b40 << " billetes de $40" << endl;
       cout << b10 << " billetes de $10" << endl;
       cout << "Cantidad de billetes usados: " << cant_aux << endl;

	return 0;
}
