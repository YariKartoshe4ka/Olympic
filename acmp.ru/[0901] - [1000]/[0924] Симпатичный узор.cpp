#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string a[4];
    for (int i = 0; i < 4; i++)
        cin >> a[i];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] == a[i + 1][j] && a[i + 1][j] == a[i][j + 1] && a[i][j + 1] == a[i + 1][j + 1]) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}