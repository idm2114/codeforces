/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

        int in;
        cin >> in;
        string i = to_string(in);
        string s1 = i.substr(0, i.length()-1);
        string s2 = i.substr(0,i.length()-2) + i.substr(i.length()-1, i.length());
        int temp1 = stoi(s1);
        int temp2 = stoi(s2);
        if (temp1 >= temp2 && temp1 > in) {
                cout << temp1 << endl;
        }
        else if (temp2 >= temp1 && temp2 > in) {
                cout << temp2 << endl;
        }
        else {
                cout << in << endl;
        }
}
