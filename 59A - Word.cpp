#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int lower = 0;

    for (char c : s) {
        if (islower(c))
            lower++;
    }

    int upper = s.size() - lower;

    if (lower >= upper) {
        for (char &c : s)
            c = tolower(c);
    } else {
        for (char &c : s)
            c = toupper(c);
    }

    cout << s;

    return 0;
}