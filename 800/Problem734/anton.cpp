/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() { 

	int len;
	string in;
	cin >> len >> in;
	int acount = 0;
	int dcount = 0;
	string output;
	for (int i = 0; i < len; i++) {
		if (in[i] == 'A') {
			acount++;
		}
		else {
			dcount++;
		}
	}
	if (acount > dcount) {
		output = "Anton";
	}
	else if(acount < dcount) {
		output = "Danik";
	}
	else {
		output = "Friendship";
	}
	cout << output << endl; 
}

