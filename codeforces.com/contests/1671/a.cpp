#include <iostream>
#include <cstring>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int cnt_a = 0, cnt_b = 0;
        bool f = true;

        for (char c : s) {
            if (c == 'a') {
                if (cnt_b) {
                    f = f && cnt_b > 1;
                    cnt_b = 0;
                }
                ++cnt_a;
            }
            else {
                if (cnt_a) {
                    f = f && cnt_a > 1;
                    cnt_a = 0;
                }
                ++cnt_b;
            }
        }

        if (cnt_a || cnt_b) {
            f = f && (cnt_a > 1 || cnt_b > 1);
        }

        if (f)
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
    }

    return 0;
}