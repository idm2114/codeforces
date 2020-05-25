#include <bits/stdc++.h>

using namespace std;

int main() {

	int dist;
	cin >> dist;
	int steps = 1;
	while (dist > 5) {
		dist -= 5;
		steps++;
	}
	cout << steps << endl;
}
