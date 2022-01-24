#include <iostream>
#include <cstring>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long s = 0;
        int a[n], x = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            s += a[i];
            x ^= a[i];
        }

        printf("2\n%d %lld\n", x, x + s);
    }

    return 0;
}