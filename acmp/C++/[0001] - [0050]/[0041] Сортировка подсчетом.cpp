#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, t;

    cin >> n;

    int b[201] = {0};

    for (int i = 0; i < n; i++) {
        cin >> t;
        b[t + 100] += 1;
    }

    for (int i = 0; i < 201; i++) {
        for (int j = 0; j < b[i]; j++) {
            cout << i - 100 << ' ';
        }
    }

    return 0;
}