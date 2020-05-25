#include <bits/stdc++.h>

using namespace std;

int main() {
	int lines;
	cin >> lines;
	int on;
	int off;
	int current = 0;
	int max = 0;

	for (int i = 0; i < lines; i++) {
		cin >> off;
		cin >> on;
		current = current + on - off;
		if (current > max) {
			max = current;
		}
	}
	cout << max << endl;
}
