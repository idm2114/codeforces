#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {

        string string1;
        cin >> string1;
        string string2;
        cin >> string2;

        transform(string1.begin(),string1.end(),string1.begin(), ::tolower);
        transform(string2.begin(),string2.end(),string2.begin(), ::tolower);

        int out;
        if (string1.compare(string2) < 0) {
                out = -1;
        }
        else if (string1.compare(string2) > 0) {
                out = 1;
        }
        else {
                out = 0;
        }
        cout << out << endl;
}
