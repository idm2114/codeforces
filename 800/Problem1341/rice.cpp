/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() { 

	int lines, n, a, b, c, d;
	cin >> lines;
	for (int i = 0; i < lines; i++) {
		cin >> n >> a >> b >> c >> d;
			int weight1 = n * (a - b);
			int weight2 = n * (a + b);
			if (weight2 < c - d || c + d < weight1) {
				cout << "No" << endl;
			}
			else {
				cout << "Yes" << endl;
			}
		}
}

