#include <iostream>
#include <string>

using namespace std;

int LenOfLongPal(string s) {
	int freq[s.length()]={0};
	for(int i=0;i<s.length();++i) ++freq[s[i]];
	int count=0;
	for (int i=0;i<s.length();++i) {
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
