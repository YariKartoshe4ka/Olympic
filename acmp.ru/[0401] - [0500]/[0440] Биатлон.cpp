#include <iostream>
#include <cmath>
using namespace std;

int main() {
    bool f1 = false,
         f2 = false,
         f3 = false,
         f4 = false,
         f5 = false;

    short cnt = 0, x, y;

    for (short i = 0; i < 5; i++) {
        cin >> x >> y;

        if (!f1 && x*x + y*y <= 100) {
            f1 = true;
            cnt++;
        } else if (!f2 && pow(x - 25, 2) + y*y <= 100) {
            f2 = true;
            cnt++;
        } else if (!f3 && pow(x - 50, 2) + y*y <= 100) {
            f3 = true;
            cnt++;
        } else if (!f4 && pow(x - 75, 2) + y*y <= 100) {
            f4 = true;
            cnt++;
        } else if(!f5 && pow(x - 100, 2) + y*y <= 100) {
            f5 = true;
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
