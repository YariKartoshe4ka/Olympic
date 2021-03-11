#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    k %= 3;

    if (k == 0)
        cout << "GCV" << endl;
    else if (k == 1)
        cout << "VGC" << endl;
    else
        cout << "CVG" << endl;

    return 0;
}