#include<bits/stdc++.h>
#include<cstdlib>
#include<ctime>
using namespace std;

string getUserMove(){
	string move;
	cin>>move;
	return move;
}
string getComputerMove(){
    srand(time(0));
    int num;
    num=1+rand()%3;
    if(num==1) return "Rock";
    else if(num==2) return "Paper";
    else return "Scissors";
}
 
int getResult(){ 
    string user=getUserMove();
	string computer=getComputerMove();
	if((user=="Rock" && computer=="Rock" )|| (user=="Paper" && computer=="Paper" )|| (user=="Scissors" && computer=="Scissors")) return -1; //draw
	else if((user=="Rock" && computer=="Scissors") || (user=="Paper" && computer=="Rock" )|| (user=="Scissors"  && computer=="Paper" )) return 1; //win
	else return 0; //fail
}

int main(){
	cout<<getResult()<<endl;
	cout<<getComputerMove();
	getUserMove();

    //int win=0,loss=0,draw=0;
    //int res=getResult();
    //for(int i=1;i<=10;i++){
    	//cout<<getResult();
		//cout<<getComputerMove();
    	//getUserMove();
    	//if(res==-1)draw++;
    	//else if(res==1)win++;
    	//else loss++;
	//}
	//if(draw==-1)cout<<draw++;
	//else if(win==1)cout<<win++;
	//else cout<<loss++;
		
}







