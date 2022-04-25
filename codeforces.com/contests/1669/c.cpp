#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int e1 = 0, e2 = 0;

        for (int i = 0; i < n; ++i) {
            int tmp;
            cin >> tmp;

            if (i % 2)
                e2 += tmp % 2;
            else
                e1 += tmp % 2;
        }

        if ((e1 == 0 || e1 == n / 2 + n % 2) && (e2 == 0 || e2 == n / 2))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}
