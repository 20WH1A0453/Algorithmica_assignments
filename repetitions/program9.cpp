#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
    int n,rem,sum=0,i=0;
	cin>>n;
	while(n>0){
	    rem=n%10;
	   // product=r*(pow(2,i));
	    sum=sum+rem*(pow(2,i));
	    i++;
	    n=n/10;
	}cout<<sum;
}
