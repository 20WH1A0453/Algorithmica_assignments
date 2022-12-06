#include <bits/stdc++.h>

using namespace std;

int main() {
    float m,t1,t2,t;
    cin>>m;
    t1=0.18*m;
    t2=0.05*m;
    t=m+t1+t2;
    cout<<fixed<<setprecision(2)<<t;
}
