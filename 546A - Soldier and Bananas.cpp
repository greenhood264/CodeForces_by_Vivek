#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    long long tcost = 1LL * k * w * (w + 1) / 2;
    cout << max(0LL, tcost - n);

    return 0;
}
