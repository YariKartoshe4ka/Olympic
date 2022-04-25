#include <iostream>
using namespace std;

int main() {
    int n, i, m = 0, s;
    cin >> n;

    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++) {
        s = a[i % n] + a[(i + 1) % n] + a[(i + 2) % n];

        if (s > m)
            m = s;
    }

    cout << m << endl;

    return 0;
}
