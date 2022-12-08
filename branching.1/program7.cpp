#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
	string month;
	int day;
	cin>>month>>day;
	if(month=="january" || month=="february")cout<<"spring";
	else if(month=="december"){
		if(day>=22)cout<<"spring";
		else cout<<"winter";
	}
	if(month=="april" || month=="may")cout<<"summer";
	else if(month=="march"){
		if(day>=21)cout<<"summer";
		else cout<<"spring";
	}
	if(month=="july" || month=="august")cout<<"fall";
	else if(month=="june"){
		if(day>=22)cout<<"fall";
		else cout<<"summer";
	}
	if(month=="october" || month=="november")cout<<"winter";
	else if(month=="september"){
		if(day>=23)cout<<"winter";
		else cout<<"fall";
	}
	
	
	
}
