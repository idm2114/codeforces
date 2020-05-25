/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() { 

	int num, avail, f[1000];
	cin >> num >> avail;
	for (int i = 0; i < avail; i++) {
		cin >> f[i];
	}
	sort(f, f + avail);
	int least = f[num-1] - f[0];
	for (int i = 1; i <= avail - num; i++) {
		if (f[i+num-1] - f[i] < least) {
			least = f[i + num - 1] - f[i];
		}
	}
	cout << least << endl;
}

