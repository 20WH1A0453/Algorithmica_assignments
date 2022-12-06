#include <bits/stdc++.h>
using namespace std;

int main() {
    int d,hh,mm,ss,s;
    cin>>s;
    ss=s%60;
    d=((ss/60)/60)/24; 
	hh=(ss/60)/60%24;
	mm=(ss/60)%60;
    cout<<d<<":"<<hh<<":"<<mm<<":"<<ss;
    
}
