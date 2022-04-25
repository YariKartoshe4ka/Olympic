#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if (n == 0 && m != 0)
        cout << "Impossible" << endl;
    else
        cout << n + m - min(n, m) << ' ' << n + max(0, m - 1) << endl;

    return 0;
}
