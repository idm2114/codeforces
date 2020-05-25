#include <iostream>
#include <string>

using namespace std;

int main () {
	int len;
	cin >> len;    
	for(int i=0;i<len+1;i++){
		string x;
		getline(cin, x);
		if (x.length() > 10) {
			x = x.substr(0,1) + to_string(x.length()-2) + x.substr(x.length()-1, 1);
		}	
	cout << x << endl;	
	}
}
