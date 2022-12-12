#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
	int x,guess;
	cin>>x;
	guess=x/2;
    while((guess * guess - x) >= pow(10,-12)){
    	 guess=guess-(pow(guess,2)- x)/(2*guess);
    }cout<<guess;        
}
