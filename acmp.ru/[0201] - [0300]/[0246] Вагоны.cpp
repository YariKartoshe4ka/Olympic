#include <iostream>
using namespace std;

int main() {
    int n, last, wagon, cnt = 0;
    cin >> n >> last;

    for (int i = 0; i < n - 1; i++) {
        cin >> wagon;

        if (wagon != last + 1)
            cnt++;

        last = wagon;
    }

    cout << cnt << endl;

    return 0;
}
