/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() { 

	int x, addSocks;
	cin >> x >> addSocks;
	int days = 0;
	for (int i = 0; i < x; i++) {
		daysi++;
		if (days % addSocks == 0 && days >= 2) {
			days++;
		}
	}
	cout << days << endl;
}

