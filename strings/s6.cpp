#include<bits/stdc++.h>
using namespace std;
bool isInteger(string s){
	int c=0;
	for(int i=0;i<=s.length();i++){
		if(s[i]>=0 || s[i]<=9)
		c++;
	}
	for(int i=0;i<=s.length();i++){
		if(s[i]=='+' || s[i]=='-' && c>=1)
		return 1;
		else return 0;
	}
}
int main(){
	string s;
	cin>>s;
	cout<<isInteger(s);
}
