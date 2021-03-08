#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int l, w, h;
    cin >> l >> w >> h;

    cout << ceil((l + w) * h * 2 / (float)16);

    return 0;
}
