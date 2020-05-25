/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() { 

        string in;
        cin >> in;
        int upper = 0;
        int lower = 0;
        string out;
        for (int i = 0; i < in.length(); i++) {
                char c = in[i];
                if (isupper(c)) {
                        upper++;
                }
                else {
                        lower++;
                }
        }
        if (upper > lower) {
                for(int j = 0; j < in.length(); j++) {
                        out.push_back(toupper(in[j]));
                }
        }
        else {
                for(int k = 0; k < in.length(); k++) {
                        out.push_back(tolower(in[k]));
                }
        }
        cout << out << endl;

}
