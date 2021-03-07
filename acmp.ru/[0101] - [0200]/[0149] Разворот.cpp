#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> t;
        a[i] = t;
    }

    for (n -= 1; n >= 0; n--) {
        cout << a[n] << ' ';
    }

    return 0;
}