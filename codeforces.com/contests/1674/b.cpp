#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        char a, b;
        cin >> a >> b;

        cout << (a - 'a') * 25 + b - 'a' + bool(b < a) << '\n';
    }

    return 0;
}
