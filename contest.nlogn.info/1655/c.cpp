#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

struct Tree {
    ll n = 1;
    vector<ll> tree;

    Tree(ll N) {
        while (n < N) n *= 2;
        tree.assign(n * 2, 0);
    }

    void set(ll l, ll r, ll x) {
        l += n - 1;
        r += n - 1;

        while (r >= l) {
            if (l % 2 != 0) tree[l] += x;
            if (r % 2 == 0) tree[r] += x;
            l = (l + 1) / 2;
            r = (r - 1) / 2;
        }
    }

    ll get(ll i) {
        i = n + i - 1;
        ll s = tree[i];

        while (i > 1) {
            i /= 2;
            s += tree[i];
        }
        return s;
    }
};


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, m, t1, t2, t3, t4;
    cin >> n >> m;

    Tree t(n);

    for (ll i = 0; i < m; i++) {
        cin >> t1 >> t2;

        if (t1 == 1) {
            cin >> t3 >> t4;
            t.set(t2, t3, t4);
        } else {
            cout << t.get(t2) << endl;
        }
    }

    return 0;
}