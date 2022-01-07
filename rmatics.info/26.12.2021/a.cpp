#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, t, cnt = 0;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> t;
        cnt += t;

        if (cnt) {
            cout << "+ ";
            --cnt;
        } else
            cout << "- ";

    }

    for (int i = 0; i < cnt; ++i)
        cout << "+ ";

    return 0;
}