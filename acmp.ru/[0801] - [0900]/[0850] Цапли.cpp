#include <iostream>
using namespace std;

int main() {
    int a, b, m;
    cin >> a >> b;

    m = max(a, b);

    cout << m / 2 + m % 2 << ' ' << min(a, b) << endl;

    return 0;
}
