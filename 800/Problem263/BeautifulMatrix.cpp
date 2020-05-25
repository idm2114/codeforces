#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int matrix [5][5];
	int flagx;
	int flagy;
	for (int i = 0; i<5; i++) {
		for (int j = 0; j<5; j++) {
			int x;
			cin >> x; 
			matrix [i][j] = x; 
			if (x == 1) {
				flagx = i;
				flagy = j;
			}
		}
	}
	int moves = abs(flagx - 2) + abs(flagy - 2);
	cout << moves << endl;
}
