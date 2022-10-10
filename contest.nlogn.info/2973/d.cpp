#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        int t = (i - 1) * n + 1;
        for (int j = 0; j < n; ++j) {
            cout << (!t ? n * n : t) << ' ';
            t += n + 1;
            t %= n * n;
        }
        cout << endl;
    }

    return 0;
}
