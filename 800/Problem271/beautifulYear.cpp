/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

bool isUnique(int y) {
	bool unique = true;
	vector<int> list;
	for(int i = 0; i<4; i++) {
		list.push_back(y % 10);
		y /= 10;
	}
	sort(list.begin(), list.end());
	for (int j = 0; j<list.size()-1; j++) {
		if (list[j] == list[j+1]) {
			unique = false;
		}
	}
	return unique;
}

int main() { 

	int yearin;
	cin >> yearin;
	yearin++;
	while(!isUnique(yearin)) {
		yearin++;
	}	
	cout << yearin << endl;
}

