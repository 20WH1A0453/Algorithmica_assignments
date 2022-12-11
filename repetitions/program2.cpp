#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	string s;
	cin>>s;
	char ch;
	int vowel=0,consonant=0;
	for(int i=0;i<=s.length();i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
		vowel++;
		else if((s[i]>='a'&& s[i]<='z') || (s[i]>='A'&& s[i]<='Z'))
		consonant++;
	}
	cout<<vowel<<"\n"<<consonant;
}
