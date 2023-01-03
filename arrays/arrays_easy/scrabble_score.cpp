#include<bits/stdc++.h>
using namespace std;

int wordScore(string s){
	int values[26]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
	int score=0;
	for(int i=0;i<s.length();i++){
		score=score+values[s[i]-'A'];
	}
	return score;
}

int main(){
	string s;
	cin>>s;
	cout<<wordScore(s);
}
