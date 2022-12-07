#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string  m;
    cin>>m;
    if(m=="january"||m=="march"||m=="may"||m=="july"||m=="august"||m=="october"||m=="december")cout<<"31";
    else if(m=="april"||m=="june"||m=="september" ||m=="november")cout<<"30";
    else if(m=="february")cout<<"28 or 29";
}
