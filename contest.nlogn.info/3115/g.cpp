#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b) {
    while (b > 1) {
        if (a > b) swap(a, b);
        b %= a;
    }
    return a;
}


int main() {
    int a, b;
    cin >> a >> b;

    int d = gcd(a, b);
    cout << 1ll * a * b / d - d << endl;

    return 0;
}
