#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a, s = 0, max = 1;
    for (short i = 0; i < n; i++) {
        cin >> a;

        if (a > max)
            max = a;

        s += a;
    }

    if (s - n + 1 >= m && max <= m)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
