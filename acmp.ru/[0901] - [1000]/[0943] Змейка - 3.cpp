#include <iostream>
using namespace std;

int main() {
    short int n, m, y, x;
    cin >> n >> m >> y >> x;

    if (y % 2 == 0)
        x = m - x + 1;

    cout << m * (y - 1) + (x - 1) << endl;

    return 0;
}
