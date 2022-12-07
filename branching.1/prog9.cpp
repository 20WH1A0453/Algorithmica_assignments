#include<bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cin>>n;
	if(n%400==0)cout<<"yeap year";
	else{
		if(n%100!=0)cout<<"not a leap year";
		else if(n%4==0)cout<<"leap year";
		else cout<<"not a leap year";
	}	
}
