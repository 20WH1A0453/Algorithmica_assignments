#include<bits/stdc++.h>
#include <cstdlib>
#include <ctime>

using namespace std;
string randomPassword(){
	int length;
	char chr;
	srand(time(0));
	length=7+rand()%(10-7);
	for(int i=0;i<=length;i++){
		chr=33+rand()%(126-33);cout<<chr;
	}	
}

int main(){
	cout<<randomPassword();
}
