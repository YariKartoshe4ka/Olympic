#include <iostream>
using namespace std;


short int color_to_bin(char color) {
    switch (color) {
        case 'R':
            return 4;
        case 'G':
            return 2;
        case 'B':
            return 1;
        case '.':
            return 0;
    }

    return 0;
}


int main() {
    short int n, m;
    cin >> n >> m;

    short int table[n][m] = {{0}};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char t;
            cin >> t;

            table[i][j] = color_to_bin(t);
        }
    }

    short int t;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> t;

            if ((table[i][j] & t) == table[i][j])
                continue;

            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
