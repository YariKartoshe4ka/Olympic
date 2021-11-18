#include <iostream>
using namespace std;

int main() {
    float n, v, l, t, x;

    cin >> n >> v >> l;
    x = (float)l / v * 60;

    for (short i = 0; i < n; i++) {
        cin >> t >> t;
        x += t;
    }

    printf("%.2f", x);

    return 0;
}