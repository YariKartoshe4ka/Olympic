#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int i = -1, j = n;
        int best_i = i, best_j = j;
        int ei = 0, ej = 0;

        while (i + 1 < j) {
            if (ei <= ej) {
                ++i;
                ei += a[i];
            } else {
                --j;
                ej += a[j];
            }

            if (ei == ej) {
                best_i = i;
                best_j = j;
            }
        }

        cout << best_i + 1 + n - best_j << '\n';
    }

    return 0;
}
