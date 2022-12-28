#include<bits/stdc++.h>
#include <cstdlib>
#include <ctime>

using namespace std;
void rollDieFor6(){
	int face,count=0;
	srand(time(0));
	for(int i=1;i<=10;i++){
		face=1+rand()%6;cout<<face; //total outcomes when we roll a die for 10 times
		if(face==6)++count;
	}
	if(count==6)count++;
	cout<<" "<<count++;  //number of times 6 appear in the outcome
}
int main(){
	rollDieFor6();
}
