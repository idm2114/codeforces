#include <bits/stdc++.h>

using namespace std;

int main() {

	int length;
	cin >> length;
	
	string input;
	cin >> input;

	int remove = 0;

	for (int i =0; i<length-1; i++) {
		if (input[i] == input[i+1]) {
			remove++;
		}
	}
	cout << remove << endl;
}
