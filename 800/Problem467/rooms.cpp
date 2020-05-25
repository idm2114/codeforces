#include <bits/stdc++.h>

using namespace std;

int main() {
	int in, space, taken;
	cin >> in;
	int out = 0;
	for (int i = 0; i < in; i++) { 
		cin >> taken;
		cin >> space;
		if (space - taken >= 2) {
			out++;
		}
	}
	cout << out << endl;
}
