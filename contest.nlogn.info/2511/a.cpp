#include <iostream>
using namespace std;


const int N = 67;

long long t[N + 1][N + 1] = {0};


int main() {
    int n;
    cin >> n;

    t[0][1] = 1;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            t[i][j] = t[i - 1][j] + t[i][j - 1];
        }
    }

    for (int k = 1; k <= n; ++k) {
        int i = k, j = 1;
        while (j <= k) {
            cout << t[i][j] << ' ';
            --i;
            ++j;
        }
        cout << '\n';
    }

    return 0;
}