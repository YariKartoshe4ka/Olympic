#include <iostream>
using namespace std;

int main() {
    int n, i = 0, j, sub;
    long long int first = 0, second = 0;
    bool flag = true;

    cin >> n;

    int m[n];
    j = n - 1;

    for (int k = 0; k < n; k++)
        cin >> m[k];

    while (i <= j) {
        if (m[i] >= m[j])
            sub = m[i++];
        else
            sub = m[j--];

        if (flag)
            first += sub;
        else
            second += sub;

        flag = !flag;
    }

    cout << first << ':' << second << endl;

    return 0;
}
