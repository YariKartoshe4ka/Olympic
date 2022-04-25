#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2, xa, ya;
    cin >> x1 >> y1 >> x2 >> y2 >> xa >> ya;

    if (x1 == x2)
        cout << (x1 - xa) * 2 + xa << ' ' << ya;
    else
        cout << xa << ' ' << (y1 - ya) * 2 + ya;

    return 0;
}
