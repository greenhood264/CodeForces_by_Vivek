#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int count = 0;
 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '4' || s[i] == '7')
            count++;
    }
 
    if (count == 0) {
        cout << "NO";
        return 0;
    }
 
    while (count != 0) {
        int digi = count % 10;
 
        if (digi != 4 && digi != 7) {
            cout << "NO";
            return 0;
        }
 
        count /= 10;
    }
 
    cout << "YES";
 
    return 0;
}