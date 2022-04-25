#include <iostream>
using namespace std;

int main() {
    int m = 0, t, f = 0;

    for (int i = 0; i < 3; i++) {
        cin >> t;

        if (t >= 94 && t <= 727) {
            if (t > m) {
                m = t;
            }
        }
        else
            f = 1;
    }

    if (f)
        cout << "Error" << endl;
    else
        cout << m << endl;

    return 0;
}
