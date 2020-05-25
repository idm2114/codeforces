/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

    int height;
    cin >> height;

    int months [100];

    for (int i = 0; i < 12; i++) {
        cin >> months[i];
    }

    int out = 0;
    int sum = 0;
    int k = 0;

    sort(months, months+12, greater<int>());
    while (sum < height) {
        sum += months[k];
        out++;
        k++;
        if (k > 12) {
            out = -1;
            break;
        }
    }
    cout << out << endl;
}
