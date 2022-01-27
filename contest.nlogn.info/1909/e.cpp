#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <set>

using namespace std;
using ll = long long;


const int base = 31, mod = 1000000007;


int rmod(long long x) {
    return (x % mod + mod) % mod;
}


int main() {
    int n;
    string a, b;
    cin >> n >> a >> b;


    vector<pair<ll, int>> pows(n);
    pows[0] = {1, 1};

    for (int i = 1; i < n; ++i) {
        pows[i] = {
            pows[i - 1].first * base,
            rmod((ll)pows[i - 1].second * base)
        };
    }


    vector<pair<ll, int>> h1(n + 1), h2(n + 1);
    h1[0] = {0, 0};
    h2[0] = {0, 0};

    for (int i = 1; i <= n; ++i) {
        h1[i] = {
            h1[i - 1].first + (a[i - 1] - 'A' + 1) * pows[i - 1].first,
            rmod(h1[i - 1].second + (a[i - 1] - 'A' + 1) * (ll)pows[i - 1].second)
        };
        h2[i] = {
            h2[i - 1].first + (b[i - 1] - 'A' + 1) * pows[i - 1].first,
            rmod(h2[i - 1].second + (b[i - 1] - 'A' + 1) * (ll)pows[i - 1].second)
        };
    }


    int l = 0, r = n + 1, mid;

    while (r - l > 1) {
        mid = (l + r) / 2;

        // printf("%d %d %d\n", l, mid, r);

        set<pair<ll, int>> ha, hb;
        for (int i = 0; i <= n - mid; ++i) {
            ha.insert({
                (h1[i + mid].first - h1[i].first) * pows[n - mid - i].first,
                rmod((h1[i + mid].second - h1[i].second) * (ll)pows[n - mid - i].second)
            });
            hb.insert({
                (h2[i + mid].first - h2[i].first) * pows[n - mid - i].first,
                rmod((h2[i + mid].second - h2[i].second) * (ll)pows[n - mid - i].second),
            });
        }

        bool flag = false;

        for (auto i : ha) {
            if (hb.count(i)) {
                flag = true;
                break;
            }
        }

        if (flag)
            l = mid;
        else
            r = mid;
    }

    // printf("%d %d %d\n", l, mid, r);

    set<pair<ll, int>> ha;
    for (int i = 0; i <= n - l; ++i) {
        ha.insert({
            (h1[i + l].first - h1[i].first) * pows[n - l - i].first,
            rmod((h1[i + l].second - h1[i].second) * (ll)pows[n - l - i].second)
        });
    }

    for (int i = 0; i <= n - l; ++i) {
        pair<ll, int> hash = {
            (h2[i + l].first - h2[i].first) * pows[n - l - i].first,
            rmod((h2[i + l].second - h2[i].second) * (ll)pows[n - l - i].second),
        };

        if (ha.count(hash)) {
            for (int j = i; j < i + l; ++j)
                cout << b[j];
            return 0;
        }
    }

    return 0;
}