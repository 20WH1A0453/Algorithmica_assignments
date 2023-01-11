#include <iostream>
#include <string>

using namespace std;

int LenOfLongPal(string s) {
	int freq[52]={0};
	for(int i=0;i<s.length();i++) {
		if (s[i]>='a' && s[i]<='z')
			++freq[s[i]-'a'+6];
		else
			++freq[s[i]-'A'];
	}
	int count=0;
	for (int i=0;i<52;++i) {
		if (freq[i]%2==0)
			count+=freq[i];
		else {
			count+=freq[i]-1;
		}
	}++count;
	return count;
}
int main() {
	string s;
	cin>>s;
	cout<<LenOfLongPal(s);
}
