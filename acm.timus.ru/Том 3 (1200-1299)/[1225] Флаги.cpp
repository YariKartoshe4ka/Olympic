#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;

    long long F[n];
    F[0] = F[1] = 2;

    for (int i = 2; i < n; ++i)
        F[i] = F[i - 1] + F[i - 2];

    cout << F[n - 1] << endl;

    return 0;
}
