#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
	string month;
	cin>>month;
	int day;
	cin>>day;
	if(month=="december" ){
		if(day>=22)cout<<"capricorn";
		else cout<<"sagittorius";
	}
	else if(month=="january"){
		if(day<=19)cout<<"capricorn";
		else cout<<"aquarius";	
	}
	if(month=="february"){
		if(day>=19)cout<<"pisces";
		else cout<<"aquarius";
	}
	else if(month=="march"){
		if(day<=20)cout<<"pisces";
		else cout<<"aries";
	}
	if(month=="april"){
		if(day>=20)cout<<"taurus";
		else cout<<"aries";
	}
	else if(month=="may"){
		if(day<=20)cout<<"tarus";
		else cout<<"gemini";
	}
	if(month=="june"){
		if(day>=21)cout<<"cancer";
		else cout<<"gemini";
	}
	else if(month=="july"){
		if(day<=22)cout<<"cancer";
		else cout<<"leo";
	}
	if(month=="august"){
		if(day>=23)cout<<"virgo";
		else cout<<"leo";
	}
	else if(month=="september"){
		if(day<=22)cout<<"vigro";
		else cout<<"libra";
	}
	if(month=="october"){
		if(day>=23)cout<<"scorpio";
		else cout<<"libra";
	}
	else if(month=="november"){
		if(day<=21)cout<<"scorpio";
		else cout<<"sagittarius";
	}
		
}
