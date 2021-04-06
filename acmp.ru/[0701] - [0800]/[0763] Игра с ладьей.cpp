#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x == y) {
        if (x == 1)
            cout << 0 << endl;
        else
            cout << 2 << endl;
    } else
        cout << 1 << endl;

    return 0;
}