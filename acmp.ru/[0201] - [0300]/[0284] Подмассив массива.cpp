#include <iostream>
using namespace std;


int main() {
    int n, m, l, r, i, j;
    cin >> n;

    int a[n];

    for (i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;

    for (i = 0; i < m; i++) {
        cin >> l >> r;

        for (j = l - 1; j < r; j++)
            cout << a[j] << ' ';
        cout << endl;
    }

    return 0;
}
