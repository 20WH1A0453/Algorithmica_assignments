#include<bits/stdc++.h>
using namespace std;
int main(){
	int row;
	char col;
	cin>>col>>row;
	if(col=='a'|| col=='c' || col=='e' || col=='g'){
		if(row%2!=0)cout<<"black";
		else cout<<"white";
	}
	
	else if  (col=='b' || col=='d' || col=='f' || col=='h')
	{
		if(row%2==0)cout<<"black";
		else cout<<"white";
	}
}
