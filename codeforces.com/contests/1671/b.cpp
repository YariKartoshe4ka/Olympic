#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int x0, x1;
        cin >> x0;

        int cnt_0 = 0, cnt_1 = 0, cnt_2 = 0;

        for (int i = 1; i < n; ++i) {
            cin >> x1;

            if (x1 - x0 - 1 == 0)
                ++cnt_0;
            else if (x1 - x0 - 1 == 1)
                ++cnt_1;
            else if (x1 - x0 - 1 == 2)
                ++cnt_2;

            x0 = x1;
        }

        if (cnt_2 == 1) {
            if (cnt_0 == n - 2)
                cout << "YES";
            else
                cout << "NO";
        }
        else if (cnt_2 == 0) {
            if (cnt_1 < 3 && cnt_0 == n - cnt_1 - 1)
                cout << "YES";
            else
                cout << "NO";
        }
        else
            cout << "NO";

        cout << '\n';

        // cout << cnt_0 << ' ' << cnt_1 << ' ' << cnt_2 << '\n';
    }

    return 0;
}
