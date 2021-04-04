#include <iostream>
#include <cstring>
using namespace std;

int main() {
    short int n, m, i, j;
    int min = 100001, t, sum;
    string name = "", tname;

    cin >> n >> m;

    for (i = 0; i < n; i++) {
        cin >> tname >> sum;

        for (j = 1; j < m; j++) {
            cin >> t;
            sum += t;
        }

        if (sum < min) {
            min = sum;
            name = tname;
        }

    }

    cout << name << endl;

    return 0;
}