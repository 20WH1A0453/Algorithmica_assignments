#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
	int x;
	float guess;
	cin>>x;
	guess=x/2;
	double threshold = pow(10, -7);
    while(abs(guess*guess-x)>= threshold){
    	guess=(guess+(int)x/guess)/2;
    }cout<<guess;        
}
