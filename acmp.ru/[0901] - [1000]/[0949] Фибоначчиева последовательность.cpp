#include <iostream>
using namespace std;

int main() {
    int n, a, b, tmp;
    cin >> n >> a >> b;

    for (int i = 1; i < n; i++) {
        tmp = a;
        a = b - a;
        b = tmp;
    }

    cout << a << ' ' << b << endl;

    return 0;
}
