/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() { 

	string input, output;
	cin >> input;
	output = "NO";

	for (int i = 0; i < input.length(); i++) {
		if (input[i] == 'H' || input[i] == 'Q' || input[i] == '9') {
			output = "YES";
		}
	}
	cout << output << endl;
}

