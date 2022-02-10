#include<iostream>
#include<math.h>

using namespace std;

int main(){
	const long n = 1000;
	long P[n];
	int k = 0;
	int div;
	
	cout<<"****Bienvenido al Calculator Primes****";
	
	for(int i = 2; i < n; i++){
		div = 0;
		for(int j = 1; j < i; j++){
			
			if( i%j == 0){
				cout<<"*********************************"<<endl;
				cout<<"	i = "<<i<<endl;
				cout<<"	|	j = "<<j<<endl;
				cout<<"	|	|	"<<i<<" mod "<<j<<" = "<<i%j<<" == "<<0<<endl;
				div++;
			}
		}
		if(div == 0){
				cout<<"	| **** "<<i<<"es primo ****";
		}
	}
}
