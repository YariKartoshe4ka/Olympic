#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int F[n] = {0};
    F[0] = 2;

    for (int i = 1; i < n; i++)
        F[i] = F[i - 1] + i + 1;

    cout << F[n - 1] << endl;

    return 0;
}
