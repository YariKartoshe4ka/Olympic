#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    if (x + y < z)
        cout << "Impossible" << endl;
    else
        cout << x + y - z << endl;

    return 0;
}
