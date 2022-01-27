#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;


const int base = 31;


int main() {
    int m, n;
    string a;

    cin >> a >> m;
    n = a.length();

    vector<ll> pows(n);
    pows[0] = 1;
    for (int i = 1; i < n; ++i)
        pows[i] = pows[i - 1] * base;


    vector<ll> h(n + 1);
    h[0] = 0;
    for (int i = 1; i <= n; ++i)
        h[i] = h[i - 1] + (a[i - 1] - 'a' + 1) * pows[i - 1];


    while (m--) {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        bool flag = (l1 > l2);
        if (flag) {
            swap(l1, l2);
            swap(r1, r2);
        }

        int x = l2 - l1, l = l1, r = r1, mid;

        ll hash1, hash2;

        while (l < r) {
            mid = (l + r) / 2;

            hash1 = (h[mid + 1] - h[l]) * pows[l + x];
            hash2 = (h[mid + 1 + x] - h[l + x]) * pows[l];

            // cout << hash1 << ' ' << hash2 << endl;
            // cout << l << ' ' << mid << ' ' << r << endl;

            if (hash1 == hash2)
                l = mid + 1;
            else
                r = mid;
        }

        // cout << l << ' ' << mid << ' ' << r << endl;

        if (a[l + x * flag] > a[l + x * !flag])
            cout << '>';
        else if (a[l + x * flag] < a[l + x * !flag])
            cout << '<';
        else {
            if (r1 - l1 == r2 - l2)
                cout << '=';
            else if (r1 - l1 > r2 - l2)
                cout << (flag ? '<' : '>');
            else
                cout << (flag ? '>' : '<');
        }


        cout << endl;
    }

    return 0;
}
