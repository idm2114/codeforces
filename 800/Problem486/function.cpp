/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
        
        long long n; 
        cin >> n;
        long long sum;
        
	if (n % 2 != 0) {
            sum = -1 * (n+1) / 2;
        }
        else {
            sum = n / 2;
        }

        cout << sum;
}
