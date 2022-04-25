#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a + n);

    int pref[n + 1];
    pref[0] = 0;

    for (int i = 1; i <= n; ++i)
        pref[i] = pref[i - 1] + a[i - 1];


    for (int l = 1; l <= n; ++l) {
        for (int i = 0; i <= n - l; ++i) {
            if ((pref[i + l] - pref[i]) % n == 0) {
                cout << l << '\n';

                for (int j = i; j < i + l; ++j)
                    cout << a[j] << '\n';

                return 0;
            }
        }
    }

    cout << 0;

    return 0;
}
