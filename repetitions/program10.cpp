#include <iostream>
using namespace std;
int main(){
	int q,r[10],i=0;
	cin>>q;
	while(q>0){
		r[i]=q%2;
		i++;
		q=q/2;
	}
	for(i=i-1;i>=0;i--){
		cout<<r[i];
	}
}

