#include <iostream>

using namespace std;
using ll = long long;


const int N = 2 * 1e5;
const int K = 448;


ll a[N];
ll push[K] = {0};
ll sum[K];


void recalculate(int b, int n) {
    sum[b] = 0;
    for (int i = b * K; i < min(n, (b + 1) * K); ++i)
        sum[b] += a[i];
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int bN = n / K + bool(n % K);

    for (int i = 0; i < bN; ++i)
        recalculate(i, n);

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) { // sum
            int l, r;
            cin >> l >> r;

            --l;
            --r;

            ll ans = 0;

            while (l <= r && l % K != 0) { // left
                ans += a[l] + push[l / K];
                ++l;
            }
            while (l + K <= r) { // middle
                ans += sum[l / K] + push[l / K] * K;
                l += K;
            }
            while (l <= r) { // right
                ans += a[l] + push[l / K];
                ++l;
            }

            cout << ans << '\n';
        }
        else if (type == 2) { // increment
            int l, r, x;
            cin >> l >> r >> x;

            --l;
            --r;

            while (l <= r && l % K != 0) { // left
                a[l] += x;
                sum[l / K] += x;
                ++l;
            }

            while (l + K <= r) { // middle
                push[l / K] += x;
                l += K;
            }

            while (l <= r) { // right
                a[l] += x;
                sum[l / K] += x;
                ++l;
            }
        }
    }

    return 0;
}