#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int imax = 0, V[n], p[n];

    for (int i = 0; i < n; i++)
        cin >> V[i];

    for (int i = 0; i < n; i++)
        cin >> p[i];


    for (int i = 0; i < n; i++)
        if (V[i] * p[i] > V[imax] * p[imax])
            imax = i;

    cout << imax + 1 << endl;

    return 0;
}
