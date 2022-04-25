#include <iostream>
using namespace std;

int main() {
    int n, m, k, cnt = 0;
    cin >> n >> m >> k;

    if (k >= n && m > n)
        cout << "NO" << endl;
    else {
        while (m > 0) {
            cnt++;
            m -= n;

            if (m > 0)
                m += k;
        }

        cout << cnt << endl;
    }

    return 0;
}
