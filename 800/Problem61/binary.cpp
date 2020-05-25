/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() { 

	string str1, str2, out;
	cin >> str1 >> str2;
	
	for (int i = 0; i<str1.length(); i++) {
		if (str1[i] != str2[i]) {
			out.append("1");
		}
		else {
			out.append("0");
		}
	}
	cout << out << endl;
}

