#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	string s,res="";
	int i,pos=0,shift;
	cin>>s>>shift;
	for(int i=0;i<=s.length();i++){
	    if(s[i]>='a' && s[i]<='z'){
	    	pos=s[i]-'a';
	    	pos=(pos+shift)%26;
		    res='a'+pos;
		    cout<<res;
		}
	    else if(s[i]>='A' && s[i]<='Z'){
	    	pos=s[i]-'A';
	    	pos=(pos+shift)%26;
		    res='A'+pos;
		    cout<<res;
		}
		else cout<<s[i];
	}
}
