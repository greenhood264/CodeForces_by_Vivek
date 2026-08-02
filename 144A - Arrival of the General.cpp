#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    int mx = -1, mn = 101;
    int maxIndex = 0, minIndex = 0;

    for (int i = 0; i < n; i++) {
        cin >> x;

        // Leftmost maximum
        if (x > mx) {
            mx = x;
            maxIndex = i;
        }

        // Rightmost minimum
        if (x <= mn) {
            mn = x;
            minIndex = i;
        }
    }

    int ans = maxIndex + (n - 1 - minIndex);

    if (maxIndex > minIndex)
        ans--;

    cout << ans << endl;

    return 0;
}