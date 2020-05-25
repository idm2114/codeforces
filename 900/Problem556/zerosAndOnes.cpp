/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() { 

	int n, one, zero; 
	string in;
	cin >> n >> in;
	one = zero = 0;
	for (int i = 0; i < n; i++) {
		if (in[i] == '1') {
			one++;
		}
		else zero++;
	}
	cout << n - 2 * min(one, zero) << endl;
}

