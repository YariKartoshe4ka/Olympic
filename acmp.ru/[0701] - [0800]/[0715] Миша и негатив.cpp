#include <iostream>
using namespace std;

int main() {
    short int n, m, i, j;
    int r = 0;
    cin >> n >> m;

    char a[n][m], b[n][m];

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> a[i][j];

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> b[i][j];

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (a[i][j] == b[i][j])
                r++;

    cout << r << endl;

    return 0;
}
