#include<bits/stdc++.h>
#include<string>
using namespace std;

string encrpytWithCaesar(string s, int shift){
	string res="",temp="";
	int pos=0;
	for(int i=0;i<=s.length();i++){
	    if(s[i]>='a' && s[i]<='z'){
	    	pos=s[i]-'a';
	    	pos=(pos+shift)%26;
		    temp='a'+pos;
		    res+=temp;
		    cout<<temp;
		}
	    else if(s[i]>='A' && s[i]<='Z'){
	    		pos=s[i]-'A';
	    		pos=(pos+shift)%26;
		    	temp='A'+pos;
		    	res+=temp;
		    	cout<<temp;
		}
		else cout<<s[i];
	}
}

int main(){
	string s;
	int shift;
	cin>>s>>shift;
	cout<<encrpytWithCaesar(s,shift);	
	return 0;
}

