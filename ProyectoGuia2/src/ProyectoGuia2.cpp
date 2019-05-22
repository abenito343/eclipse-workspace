
#include <iostream>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/tads/Coll.hpp"
using namespace std;

int main(){
	//int base;


	double d=1234.534;
	string s="aaaaaaaaaa";
	for (int i =0; i <10; i++)
			s[i]=32;


	cout<< "digitos:"<<digitCount(int(d))<<endl;
	cout<< "numero entera:"<<int(d)<<endl;
	cout<< "parte decimal:"<<d-int(d)<<endl;
	int f=0;
		for (int i = digitCount(int(d)) - 1 ; i >= 0; i--){

			cout << getDigit( int(d),i)<<endl;
			s[f]=(getDigit( int(d),i)+48);
			f++;
		}
		s[f]=46;
		f++;
		cout<<f<<endl;
		cout<<"d:"<<((d - int(d))*100)<<endl;
		double resto=d - int(d) ;

		int h=0;
		while(resto>0.0000000001){
			resto= resto*10;
			cout<<"rest:"<<int(resto)<<endl;
			s[h+f]=int(resto)+48;

			resto= resto - int(resto);
			h++;
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
