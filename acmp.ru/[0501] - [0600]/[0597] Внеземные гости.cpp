#include <iostream>
using namespace std;

int main() {
    int r1, r2, r3;
    cin >> r1 >> r2 >> r3;

    if (r1 * 2 >= (r2 + r3) * 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}