#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    short n;
    cin >> n;

    vector<vector<int> > a(n, vector<int> (3));
    for (short i = 0; i < n; i++)
        cin >> a[i][0] >> a[i][1] >> a[i][2];

    sort(begin(a), end(a));

    for (short i = 0; i < n; i++)
        printf("%d %d %d\n", a[i][0], a[i][1], a[i][2]);

    return 0;
}