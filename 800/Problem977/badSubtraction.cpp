#include <bits/stdc++.h>

using namespace std;

int main() {
	int in;
	int times;
	cin >> in;
	cin >> times;
	for (int i = 0; i<times; i++) {
		if (in % 10 != 0) {
			in--;
		}
		else if (in % 10 == 0) {
			in /= 10;
		}
	}
	cout << in << endl;
}

