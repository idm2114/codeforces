/*
*
* author: ian macleod
*
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

        int len, temp, sum;
        cin >> len;
        vector<int> list (len);
        for (int i = 0; i < len; i++) {
                cin >> temp;
                sum += temp;
                list.push_back(temp);
        }
        
        sort(list.begin(), list.end());

        int greaterhalf = 0;
        int count = 0;
        while () {
                int toAdd = list.back();
                list.pop_back();
                greaterhalf += toAdd;
                count++;
        }
        cout << count << endl;
}

