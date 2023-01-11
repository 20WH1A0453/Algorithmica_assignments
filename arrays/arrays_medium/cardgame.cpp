#include<bits/stdc++.h>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

string* createDeck(){
    string* deck=new string[52];
	string values="23456789TJQKA";
	string suits="shdc";
	int i=0;
	for(auto v:values){
		for(auto s:suits){
		    string temp="";
			temp=temp+v+s;
			cout<<temp<<" ";
			deck[i++]=temp;
		}
	}
	return deck;
}
void swap(string deck[52],int i,int j){
    string temp=deck[i];
    deck[i]=deck[j];
    deck[j]=temp;
}

void shuffle(string deck[52]){
    srand(time(0));
    for(int i=0;i<52;i++){
        int rindex=rand()%52;
        swap(deck,i,rindex);
    }
}

void display(string deck[52]){
    for(int i=0;i<52;i++){
        cout<<deck[i]<<" "<<endl;
    }
}


int main(){
	string *deck=createDeck();
	for(int i=0;i<52;i++){
		cout<<deck[i]<<" ";
		delete deck;
	}
}
