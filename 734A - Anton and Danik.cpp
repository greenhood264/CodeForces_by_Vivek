#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int anton = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'A')
            anton++;
    }

    if (anton > n - anton) {
        cout << "Anton";
        return 0;
    }
    else if (anton < n - anton) {
        cout << "Danik";
        return 0;
    }
    else {
        cout << "Friendship";
        return 0;
    }
}