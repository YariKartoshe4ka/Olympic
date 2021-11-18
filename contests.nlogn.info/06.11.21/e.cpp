#include <iostream>
#include <vector>
#include <map>
#include <numeric>
#include <algorithm>
#include <iterator>
using namespace std;


template< class ForwardIt, class T >
int bisect_left(ForwardIt first, ForwardIt last, T x) {
    return distance(first, lower_bound(first, last, x));
}

template< class ForwardIt, class T >
int bisect_right(ForwardIt first, ForwardIt last, T x) {
    return distance(first, upper_bound(first, last, x));
}


struct Tree {
    int n = 1;
    vector <int> tree;
    map <int, vector<int>> cnt;

    Tree(int N) {
        int tmp;

        while (n < N) n *= 2;
        tree.assign(n * 2, 0);

        for (int i = 1; i <= N; i++) {
            cin >> tmp;
            set(i, tmp);

            if (!cnt.count(tmp))
                cnt[tmp] = vector<int> (1, i);
            else
                cnt[tmp].push_back(i);
        }
    }

    void set(int i, int x) {
        i = n + i - 1;
        tree[i] = x;

        while (i > 1) {
            i /= 2;
            tree[i] = gcd(tree[i * 2], tree[i * 2 + 1]);
        }
    }

    int get(int l, int r) {
        int lc = l, rc = r, ans = 0;

        l += n - 1;
        r += n - 1;

        while (r >= l) {
            if (l % 2 != 0) ans = gcd(ans, tree[l]);
            if (r % 2 == 0) ans = gcd(ans, tree[r]);
            l = (l + 1) / 2;
            r = (r - 1) / 2;
        }


        // cout << rc - lc + 1 << ' ' << bisect_right(cnt[ans].begin(), cnt[ans].end(), rc) << ' ' << bisect_left(cnt[ans].begin(), cnt[ans].end(), lc) << endl;

        if (cnt.count(ans))
            return rc - lc - bisect_right(cnt[ans].begin(), cnt[ans].end(), rc) + bisect_left(cnt[ans].begin(), cnt[ans].end(), lc) + 1;
        return rc - lc + 1;
    }
};


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, m, li, ri;
    cin >> n;

    Tree t(n);

    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> li >> ri;
        cout << t.get(li, ri) << endl;
    }

    return 0;
}
