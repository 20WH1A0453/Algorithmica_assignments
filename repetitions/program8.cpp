#include<bits/stdc++.h>
using namespace std;
int main(){
	int j;
	cout<<"degrees Celsius"<<"  "<<"degrees Fahrenheit"<<"\n";
	for(int i=1;i<=100;i++){
		if(i%10==0)cout<<i<<"\t"<<"\t"<<(j=(9*i)/5+32)<<"\n";
	}	
}
