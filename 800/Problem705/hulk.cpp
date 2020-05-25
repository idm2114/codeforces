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
        string out = "I hate ";
        while (in > 1) {
            string temp = out.substr(out.length()-5, 4);
            if (temp.compare("hate") == 0) {
                out.append("that I love ");
            }
            else {
                out.append("that I hate ");
            }
            in--;
        }
        out.append("it");
        cout << out << endl;
}
