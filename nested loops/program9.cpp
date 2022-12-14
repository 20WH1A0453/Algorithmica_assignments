#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j;
	for(j=i+1;j<=10;j++) cout<<"\t"<<j<<" ";
		cout<<"\n";
	for(i=1;i<=10;i++){
		cout<<i;
		for(j=1;j<=10;j++) cout<<"\t"<<i*j;
		cout<<"\n";
	}
}


