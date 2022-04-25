#include <iostream>
using namespace std;

int max(int* a) {
    int m = 0;
    for (int i = 1; i < 3; i++)
        if (a[m] < a[i])
            m = i;

    return m;
}


int main() {
    int a[3], b[3], r = 0, m1, m2;

    for (int i = 0; i < 3; i++)
        cin >> a[i];
    for (int i = 0; i < 3; i++)
        cin >> b[i];

    for (int i = 0; i < 3; i++) {
        m1 = max(a);
        m2 = max(b);

        r += a[m1] * b[m2];
        a[m1] = 0;
        b[m2] = 0;
    }

    cout << r << endl;

    return 0;
}
