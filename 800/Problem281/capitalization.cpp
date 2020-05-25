#include <bits/stdc++.h>

using namespace std;

int main() {

        string in;
        cin >> in;
        string out;
        char ch = (toupper(in[0]));
        out = in.substr(1,in.length());
        out = out.insert(0,1,ch);
        cout << out << endl;
}
