#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long cnt = 0;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;

            cnt += a - 1;
        }

        if (cnt % 2)
            cout << "errorgorn";
        else
            cout << "maomao90";
        cout << '\n';
    }

    return 0;
}