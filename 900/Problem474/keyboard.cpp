/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
        
        char keys[100] = "qwertyuiopasdfghjkl;zxcvbnm,./";
        string shift, word;
        cin >> shift >> word;
        string out;
        for (int i = 0; i < word.length(); i++) {
                char temp = word[i];
                for (int j = 0; j < 100; j++) { 
                        if (keys[j] == temp && shift[0] == 'R') {
                                out.push_back(keys[j-1]);
                        }
                        else if (keys[j] == temp && shift[0] == 'L') {
                                out.push_back(keys[j+1]);
                        }
                }
        }
        cout << out << endl;
}
