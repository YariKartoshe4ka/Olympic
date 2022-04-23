#include <iostream>

using namespace std;
using ll = long long;


const int base = 'k' - 'a' + 1, N = base * base;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        ll a[N] = {0}, b[N] = {0};

        for (int i = 0; i < n; ++i) {
            char x, y;
            cin >> x >> y;

            ++a[(x - 'a') * base + (y - 'a')];
            ++b[(y - 'a') * base + (x - 'a')];
        }

        ll cnt = 0;
        for (int i = 0; i < N; i += base) {
            for (int j = 0; j < base; ++j) {
                for (int k = j + 1; k < base; ++k) {
                    cnt += a[i + j] * a[i + k];
                    cnt += b[i + j] * b[i + k];
                }
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}