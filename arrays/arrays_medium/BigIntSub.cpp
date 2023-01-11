#include <iostream>
#include <string>
using namespace std;

string BigIntSub(string num1, string num2 ) {
	int num1len = num1.length();
	int num2len = num2.length();
	string res = "";
	int borrow = 0;
	for (int i = num1len - 1, j = num2len - 1; i >= 0 || j >= 0; --i, --j) {
		int digit1 = i < 0 ? 0 : num1[i] - '0';
		int digit2 = j < 0 ? 0 : num2[j] - '0';
		if (digit1 + borrow < digit2) {
			int tmp = digit1 + borrow + 10 - digit2;
			borrow = -1;
			res = (char) (tmp + '0') + res;
		} else {
			int tmp = digit1 + borrow - digit2;
			borrow = 0;
			res = (char) (tmp + '0') + res;
		}
	}
	return res;
}

int main() {
	string s1,s2;
	cin>>s1>>s2;
	cout<<BigIntSub(s1,s2);
}
