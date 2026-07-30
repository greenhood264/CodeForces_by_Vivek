#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total = n;
    long long sum = 0;

    while (n--) {
        int x;
        cin >> x;
        sum += x;
    }

    double ans = (double)sum / total;

    cout << ans;

    return 0;
}