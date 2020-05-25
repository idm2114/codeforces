#include <bits/stdc++.h>

using namespace std;

int main() {
	int len;
	cin >> len;
	int time;
	cin >> time;
	string start;
	cin >> start;
	while(time > 0) {
		for(int i=0;i<len-1;i++) {
			if (start[i] == 'B' && start[i+1] == 'G') {
				start[i] = 'G';
				start[i+1] = 'B';
				i++;
			}
		}
		time--;
	}
	cout << start << endl;
}
