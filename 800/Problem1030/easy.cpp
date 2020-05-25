/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() { 

	int people;
	cin >> people;
	string out = "EASY";
	for (int i = 0; i<people; i++) {
		int temp;
		cin >> temp;
		if (temp != 0) {
			out = "HARD";
		}
	}
	cout << out << endl;
}

