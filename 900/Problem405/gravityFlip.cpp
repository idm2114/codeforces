/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() { 

	int length, f[100];
	cin >> length;
	for (int i = 0; i < length; i++) {
		cin >> f[i];
	}
	sort(f, f + length);

	for (int j = 0; j < length; j++) {
		cout << f[j] << endl;
	}
}

