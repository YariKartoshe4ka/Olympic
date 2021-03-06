#include <iostream>
using namespace std;

int main() {
    int n, m, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m;
            ans += m;
        }
    }
    cout << ans / 2;
    return 0;
}
