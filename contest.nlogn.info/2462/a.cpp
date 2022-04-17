#include <iostream>
#include <vector>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a, b;

        for (int i = 0; i < n; ++i) {
            int temp;
            cin >> temp;

            if (temp % 2)
                a.push_back(temp);
            else
                b.push_back(temp);
        }

        for (int i : a)
            cout << i << ' ';

        for (int i : b)
            cout << i << ' ';

        cout << '\n';
    }

    return 0;
}