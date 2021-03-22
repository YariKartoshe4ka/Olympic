#include <iostream>
#include <vector>
using namespace std;

int main() {
    short int n, t, i;
    vector <short int> even, uneven;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> t;

        if (t % 2 == 0)
            even.push_back(t);
        else
            uneven.push_back(t);
    }

    for (i = 0; i < uneven.size(); i++)
        cout << uneven[i] << ' ';

    cout << endl;

    for (i = 0; i < even.size(); i++)
        cout << even[i] << ' ';

    cout << endl << (even.size() >= uneven.size() ? "YES" : "NO") << endl;

    return 0;
}