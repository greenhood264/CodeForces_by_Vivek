#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, h;
    cin >> n >> h;
 
    int space = 0;
    vector<int> temp(n);
 
    for (int i = 0; i < n; i++) {
        cin >> temp[i];
 
        if (temp[i] <= h)
            space += 1;
        else
            space += 2;
    }
 
    cout << space;
    return 0;
}