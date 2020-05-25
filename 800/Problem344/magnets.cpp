/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() { 

	int in, temp, last, groups;
	cin >> in;
	groups = 1;
	cin >> last;
	for(int i = 1; i < in; i++) {
		cin >> temp;
		if (temp != last) {
			last = temp;
			groups++;
		}
	}
	cout << groups << endl;
}

