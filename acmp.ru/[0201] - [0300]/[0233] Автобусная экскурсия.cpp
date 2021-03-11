#include <iostream>
using namespace std;

int main() {
    int n, k, t, r = 0;
    cin >> n;

    for (k = 1; k <= n; k++) {
        cin >> t;

        if (t <= 437) {
            r = t;
            break;
        }
    }

    if (r)
        cout << "Crash " << k << endl;
    else
        cout << "No crash" << endl;

    return 0;
}