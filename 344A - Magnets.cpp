#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 1;

    string prev;
    cin >> prev;

    while (--n) {
        string curr;
        cin >> curr;

        if (curr != prev)
            ans++;

        prev = curr;
    }

    cout << ans;

    return 0;
}