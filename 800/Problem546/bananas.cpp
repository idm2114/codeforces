#include <bits/stdc++.h>

using namespace std;

int main() { 
	int startcost;
	cin >> startcost;
	int start;
	cin >> start;
	int number;
	cin >> number;

	for (int i = 1; i <= number; i++) {
		start -= i * startcost;
	}
	if (start >= 0) {
		start = 0;
	}
	cout << start << endl;
}		
