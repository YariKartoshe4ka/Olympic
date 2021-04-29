#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int F[n + 1];
    F[0] = 1;

    for (int i = 1; i <= n; i++)
        F[i] = F[i - 1] + i;

    cout << F[n] << endl;

    return 0;
}