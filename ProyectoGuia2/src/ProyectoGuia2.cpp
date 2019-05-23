
#include <iostream>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/tads/Coll.hpp"
using namespace std;

int main(){


	/*string r=spaces(5);
	cout<<"["<<r<<"]";*/























//DOUBLE TO STRING
	double d=1234.54;
	string s;

	cout<< "digitos:"<<digitCount(int(d))<<endl;
	cout<< "numero entera:"<<int(d)<<endl;
	cout<< "parte decimal:"<<d-int(d)<<endl;

		for (int i = digitCount(int(d)) - 1 ; i >= 0; i--){

			cout << getDigit( int(d),i)<<endl;
			s+=(getDigit( int(d),i)+48);
		}
		s+=46;
		double resto=d - int(d) ;

		while(resto<0.99){

			resto= resto*10;
			s+=int(resto)+48;

			resto= resto - int(resto);
			cout<<"rest:"<<resto<<endl;
		}

	cout << "s:"<<s;


























//	cout<<length(s)<<endl;
//	cout<<charCount(s,'c')<<endl;

	   /*int sum = 0;
	   int n = length(s);

	   for(int i = 0; i >= 0;i--){
		   char c = s[i];
		   int d;

		   if(c >= '0' && c <= '9'){
			   d = c - '0';
		   }
		   else{
			   d = c - 'A' + 10;
		   }
		   int e = n - i - 1;
		   sum = sum + d*pow(b,e);
	   }
	   cout << sum ;*/

	return 0;
}
