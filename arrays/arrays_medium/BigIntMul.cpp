#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string BigIntMul(string num1, string num2) {
	int num1len = num1.length();
	int num2len = num2.length();
	int res[num1len + num2len] = { 0 };

	for (int i=num2len-1;i>=0;--i) {
		for (int j=num1len-1;j>=0;--j) {
			int product=(num2[i] -'0') * (num1[j] -'0');
			int TotalSum = product+res[i+j+1];
			res[i+j+1] = TotalSum % 10;
			res[i + j]+=TotalSum/10;
		}
	}
	string final="";
	for (auto e:res) {
		final += to_string(e);
	}
	return final;
}

int main() {
	string s1,s2;
	cin>>s1>>s2;
	cout<<BigIntMul(s1,s2);
}
