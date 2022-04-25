#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, l, r;
    short int k;
    long long int c;
    c = 0;

    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> l >> r >> k;

        if (k == 1)
            c += r - l + 1;
        else
            for (int j = l; j <= r; j++) {
                if (j % 2 == 0)
                    c += 1;
            }
    }

    cout << c / n << endl;

    return 0;
}
