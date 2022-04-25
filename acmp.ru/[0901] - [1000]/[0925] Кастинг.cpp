#include <iostream>
using namespace std;

int main() {
    int z, n, a, b, c;
    cin >> z >> n >> a >> b >> c;

    if (z == 2)
        cout << min(a, min(b, c)) << endl;
    else
        cout << max(0, n - (n - a + n - b + n - c)) << endl;

    return 0;
}
