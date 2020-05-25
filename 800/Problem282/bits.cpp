#include <iostream>
#include <string>

int main() {
	using namespace std;

	int len;
	cin >> len;
	int start = 0;

	for (int i =0;i<len;i++) {
		string in;
		cin >> in;
		if ((in == "--X") || (in == "X--")) {
			start--;
		}
		else {
			start++;
		}
	}
	cout << start << endl;
}
