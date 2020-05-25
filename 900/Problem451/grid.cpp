/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() { 

	int x, y, z;
	cin >> x >> y;
	if (x > y) {
		z = y;
	}
	else {
		z = x;
	}		
	if (z % 2 == 0) {
		cout << "Malvika" << endl;
	}
	else {
		cout << "Akshat" << endl;
	}	
}

