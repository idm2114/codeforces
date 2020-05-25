/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() { 

	string str;
	cin >> str;
	string out = "NO";
	int count = 1;
	char last = str[0];
	for (int i =0; i<str.length(); i++) {
		 
		if (last != str[i]) {
			count = 1;
			last = str[i];
		}
		else {
			count++;
			if (count >= 7) {
				out = "YES";		
			}
		}
	}
	cout << out << endl;
}
