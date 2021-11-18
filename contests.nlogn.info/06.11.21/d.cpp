#include <iostream>
#include <vector>
using namespace std;


struct Tree {
    int n = 1;
    vector <long long> tree;

    Tree(int N) {
        while (n < N) n *= 2;
        tree.assign(n * 2, 0);

        for (int i = 1; i <= n; i++)
            set(i, i);
    }

    void set(int i, int x) {
        i = n + i - 1;
        tree[i] = x;

        while (i > 1) {
            i /= 2;
            tree[i] = tree[i * 2] + tree[i * 2 + 1];
        }
    }

    long long get(int l, int r) {
        l += n - 1;
        r += n - 1;
        long long s = 0;

        while (r >= l) {
            if (l % 2 != 0) s += tree[l];
            if (r % 2 == 0) s += tree[r];
            l = (l + 1) / 2;
            r = (r - 1) / 2;
        }

        return s;
    }
};


int main() {
    long long s;
    int n, k, ki, kv;
    cin >> n >> k;

    Tree t(n);

    for (int i = 0; i < k; i++) {
        s = 0;
        cin >> ki;
        kv = t.get(ki, ki);

        if (ki + 1 <= n)
            s += t.get(ki + 1, min(ki + kv, n));

        if (ki + kv > n)
            s += t.get(1, ki + kv - n);

        t.set(ki, s / kv);
    }

    cout << t.get(1, n) << endl;

    return 0;
}