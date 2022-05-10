#include <iostream>
#include <cstring>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.size(), a[n];

        for (int i = 0; i < n; ++i)
            a[i] = s[i] - 'a' + 1;

        long long lcnt = 0, rcnt;

        for (int i = 0; i < n - n % 2; ++i)
            lcnt += a[i];

        rcnt = lcnt + a[n - 1] - a[0];

        long long ans;

        if (n % 2) {
            if (rcnt > lcnt)
                ans = rcnt - a[0];
            else
                ans =  lcnt - a[n - 1];
        }
        else
            ans = lcnt;

        if (ans < 0)
            cout << "Bob ";
        else
            cout << "Alice ";

        cout << abs(ans) << '\n';
    }

    return 0;
}
