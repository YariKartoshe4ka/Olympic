#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int d[n], min = 1000000001, max = -1;
    for (int i = 0; i < n; ++i) {
        cin >> d[i];

        if (d[i] > max)
            max = d[i];
        if (d[i] < min)
            min = d[i];
    }

    vector<vector<int>> h(max - min + 1);
    cout << max << ' ' << min << endl;

    for (int i = 0; i < n; ++i) {
        h[d[i] - min].push_back(i);
    }

    for (auto v : h) {
        for (auto i : v) {
            cout << i << ' ';
        }
        cout << endl;
    }

    return 0;
}