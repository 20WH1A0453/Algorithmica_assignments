#include<bits/stdc++.h>
using namespace std;
double approximatePI(int n){
	double s=0,i,sign=1;
	int d;
	for(i=1,d=2;i<=n;i++,d+=2){
		s+=1.0/(d*(d+1)*(d+2))*sign;
		sign*=-1;
	}
	return (s*4)+3;
}
int main(){
		int n;
		cin>>n;
		cout<<approximatePI(n);
	}
	

