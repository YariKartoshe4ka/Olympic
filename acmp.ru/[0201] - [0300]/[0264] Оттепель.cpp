#include <iostream>
using namespace std;

int main() {
    short n, i, t, m = 0, k = 0;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> t;

        k = (t > 0 ? k + 1 : 0);

        if (k > m)
            m = k;
    }

    cout << m << endl;

    return 0;
}
