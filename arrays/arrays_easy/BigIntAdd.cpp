#include <iostream>
#include <string>

using namespace std;

string BigIntAdd(string num1, string num2) {
	int num1len = num1.length();
	int num2len = num2.length();
	string res = "";
	int carry = 0;
	for (int i = num1len - 1, j = num2len - 1; i >= 0 || j >= 0; --i, --j) {
		int digit1 = i < 0 ? 0 : num1[i] - '0';
		int digit2 = j < 0 ? 0 : num2[j] - '0';
		res = (char) ((digit1 + digit2 + carry) % 10 + '0') + res;
		carry = (digit1 + digit2 + carry) / 10;
	}
	if (carry > 0)
		res = (char) (carry + '0') + res;
	return res;
}

int main() {
	string s1,s2;
	cin>>s1>>s2;
	cout<<BigIntAdd(s1, s2);
}
