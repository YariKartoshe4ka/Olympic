#include <iostream>
#include <cstring>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        bool f = true, last = false;
        int cnt = 0;

        for (char c : s) {
            if (c == 'A') {
                ++cnt;
                last = false;
            }
            else if (c == 'B') {
                last = true;
                if (cnt)
                    --cnt;
                else {
                    f = false;
                    break;
                }
            }
        }

        if (cnt)
            f = f && last;

        if (f)
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
    }

    return 0;
}
