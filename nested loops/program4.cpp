#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int row=1;row<=n;row++){
		for(int col=1;col<=row-1;col++)cout<<"  ";
		for(int col=row;col<=n;col++)cout<<" *";
		cout<<"\n";
	}
}
