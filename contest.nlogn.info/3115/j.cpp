#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;

    --n;
    --m;

    if (m > n) swap(n, m);
    int d = gcd(n, m);

    n /= d;
    m /= d;

    cout << (n + m - 1) * d << endl;

    return 0;
}
