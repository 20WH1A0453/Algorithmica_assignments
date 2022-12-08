#include <bits/stdc++.h>
using namespace std;
int main(){
	int wl;
	cin>>wl;
	if(wl>=380 && wl<=449)cout<<"Violet";
	else if(wl>=450 && wl<=494)cout<<"Blue";
	else if(wl>=495 && wl<=569)cout<<"Green";
	else if(wl>=570 && wl<=589)cout<<"Yellow";
	else if(wl>=590 && wl<=619)cout<<"Orange";
	else if(wl>=620 && wl<=750)cout<<"Red";
	else if(wl<380)cout<<"wavelength if out of visible spectrum1";
	else cout<<"wavelength if out of visible spectrum1";


}
