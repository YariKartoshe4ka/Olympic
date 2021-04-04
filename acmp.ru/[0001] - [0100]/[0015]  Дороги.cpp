#include <iostream>
using namespace std;

int main() {
    int n, t, ans = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> t;
            ans += t;
        }
    }

    cout << ans / 2 << endl;

    return 0;
}
