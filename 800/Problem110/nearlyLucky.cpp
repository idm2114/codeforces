#include <bits/stdc++.h>

using namespace std;

int main() {

        long long in;
        cin >> in;
        int temp = 0;
        int out = 0;
        string output = "NO";
        
        while(in>0) {
            temp = in % 10;
            if (temp == 4 || temp == 7) {
                out++;
            }
            in /= 10;
        }

        if (out == 4 || out == 7) {
            output = "YES";
        }
        cout << output << endl;
}
