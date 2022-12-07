#include <bits/stdc++.h>
using namespace std;
int main(){
    char n;
    cin>>n;
    if(n=='a' || n=='e' || n=='i'|| n=='o'|| n=='u')cout<<"Vowel";
    else if(n=='y')cout<<"vowel and sometimes it is consonant";
    else cout<<"consonant";
}
