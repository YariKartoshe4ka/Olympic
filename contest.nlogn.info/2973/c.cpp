#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    while (n >= 10) {
        int d = 0;
        while (n > 0) {
            d += n % 10;
            n /= 10;
        }
        n = d;
    }

    cout << n << endl;
    return 0;
}
