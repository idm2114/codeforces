/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() { 

	int friends, height;
	cin >> friends >> height;
	int out = 0;
	for (int i = 0; i<friends; i++) { 
		int temp;
		cin >> temp;
		if (temp > height) {
			out += 2;
		}
		else {
			out++;
		}
	}
	cout << out << endl;
}

