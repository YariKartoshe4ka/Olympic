#include <iostream>
using namespace std;

int main() {
    short int n, i, v, s, maxv = 0, imaxv = 0, flag = 1;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> v >> s;

        if (s && v > maxv) {
            maxv = v;
            imaxv = i + 1;
            flag = 0;
        }
    }

    cout << (flag ? -1 : imaxv) << endl;

    return 0;
}