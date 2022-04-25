#include <iostream>
using namespace std;

int main() {
    short int l = 1, r = 31, flag, n, nl, nr;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> nl >> nr;

        flag = 0;

        if (l <= nl and nl <= r)
            l = nl;
        else
            flag++;

        if (l <= nr and nr <= r)
            r = nr;
        else
            flag++;

        if (flag == 2) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}
