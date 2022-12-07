#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    bool f = 1;
    for (long long i = 2; i * i <= n; ++i)
        if (n % i == 0) f = 0;

    cout << f << endl;

    return 0;
}
