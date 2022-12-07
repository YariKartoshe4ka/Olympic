#include <iostream>
using namespace std;

int main() {
    short a, b;
    cin >> a >> b;

    cout << max(40 + 39 * 2 + (a - 40) * 2 + 1, 40 + b * 2) << endl;

    return 0;
}
