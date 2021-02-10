#include <iostream>
using namespace std;


int main() {
    int a, b, k;
    long int x, y;

    cin >> a >> b >> k;

    while (k > 0) {
        x = (a - 1) * b;
        y = a * (b - 1);

        if (x > y)
            a--;
        else
            b--;
        k--;
    }

    cout << a << ' ' << b << endl;

    return 0;
}