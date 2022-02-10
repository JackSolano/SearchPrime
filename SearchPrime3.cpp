#include<iostream>
#include<ctime> 
#include<stdlib.h>
#include<math.h>
#include <iomanip>

using namespace std;

int main(){
	long const m = 70;
	long const primo = 7;
	int div = 0;
	long p = 0;
	int P[10000];
	int cP = 1;
	P[0]=2;
	unsigned t0, t1;
 
	for(long i = primo; i < m; i++)
	{	//cout<<"i = "<<i<<endl;
		div = 0;//cout<<" div = 0"<<endl;
		cP++;
		for(long j = 0; j < p; j++)
		{	//cout<<"	j = "<<j<<endl;
			if( i%P[j]==0 )
			{		
				j = p;
			}
			else
			{
				div++;//cout<<" 	div = "<<div<<endl;
			}
		}
		if(div == p){
			P[p]=i;cout<<" 	P["<<p<<"] = "<<i<<endl;
			p++;cout<<" p = "<<p<<endl;
			cout<<"	cP = "<<cP<<endl;
			cP = 1;
		}
	}
 
	
}
