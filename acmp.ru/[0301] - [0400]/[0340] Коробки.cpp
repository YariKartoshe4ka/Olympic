#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[3], b[3];
    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];

    sort(a, a + 3);
    sort(b, b + 3);

    if (a[0] == b[0] and a[1] == b[1] and a[2] == b[2])
        cout << "Boxes are equal" << endl;
    else if (a[0] >= b[0] and a[1] >= b[1] and a[2] >= b[2])
        cout << "The first box is larger than the second one" << endl;
    else if (a[0] <= b[0] and a[1] <= b[1] and a[2] <= b[2])
        cout << "The first box is smaller than the second one" << endl;
    else
        cout << "Boxes are incomparable" << endl;

    return 0;
}