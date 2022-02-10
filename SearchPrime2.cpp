#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	const int L = 1043;
	int k = 0;
	cout<<"Horizontales"<<endl;
	for(int i = 0; i <= 10; i++){
		cout<<endl;
		for(int j = 0; j < 4; j++){
			cout<<"drawLine("<<i*100+k<<" , 0 ,"<<i*100+k<<" , "<<L<<");"<<endl;
			k++;
		}
	}
	cout<<endl<<"Verticales"<<endl;
 	k = 0;
	for(int i = 0; i <= 10; i++){
		cout<<endl;
		for(int j = 0; j < 4; j++){
			cout<<"drawLine("<<"0 , "<<i*100+k<<" , "<<L<<" , "<<i*100+k<<");"<<endl;
			k++;
		}
	}

	
}
