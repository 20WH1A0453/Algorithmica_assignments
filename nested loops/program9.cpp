#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,col;
	for(col=row+1;col<=10;col++) cout<<"\t"<<col<<" ";
		cout<<"\n";
	for(row=1;row<=10;row++){
		cout<<row;
		for(col=1;col<=10;col++) cout<<"\t"<<row*col;
		cout<<"\n";
	}
}
