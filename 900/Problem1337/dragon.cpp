/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() { 

	int lines, health, voids, lightning;
	cin >> lines;
	for (int i =0; i < lines; i++) {
		cin >> health >> voids >> lightning;
		while (health > 0) {	
			if (voids > 0 && health > 10) {
				health = (health / 2) + 10;
				voids--;
			}
			else if (lightning > 0) {
				health -= 10;
				lightning--;
			}
			else {
				if (health > 0) {
					cout << "NO" << endl;
					break;
				}
			}
		}
		if (health <= 0) {
			cout << "YES" << endl;
		}
	}
}

