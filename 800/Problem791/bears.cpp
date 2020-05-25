#include <bits/stdc++.h>

using namespace std;

int main() {

	int w1, w2;
	cin >> w1;
	cin >> w2;
	int count = 0;
	while (w1 <= w2) {
		w1 *= 3;
		w2 *= 2;
		count++;
	}
	cout << count << endl;
}
