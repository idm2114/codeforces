#include <bits/stdc++.h>

using namespace std;

int main() { 

	string in, out;
	cin >> in >> out;
	string output = "NO";
	string temp;
	for (int i = 0; i < in.length(); i++) {
		temp.push_back(in[in.length()-1-i]);
	}
	if (temp.compare(out) == 0) {
 		output = "YES";
	}
	cout << output << endl;
}
