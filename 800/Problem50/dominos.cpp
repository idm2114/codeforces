#include <iostream>
#include <string>

using namespace std;

int main(){ 
	int len;
	cin >> len;
	int width;
	cin >> width;

	int area = len * width;
	area /= 2;
	cout << area << endl;
}
