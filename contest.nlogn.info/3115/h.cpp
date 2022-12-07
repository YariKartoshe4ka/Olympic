#include <bits/stdc++.h>
using namespace std;


int main() {
    long long n, m;
    cin >> n >> m;

    cout << n * m / gcd(n, m) / m << endl;

    return 0;
}
