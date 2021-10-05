#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100] = {0};
    short c;

    for (int i = 0; i < n; i++) {
        cin >> c;
        a[c - 1]++;
    }

    short mi = 0;
    bool flag = 0;

    for (int i = 1; i < 100; i++) {
        if (a[i] > a[mi]) {
            mi = i;
            flag = 0;
        }
        else if (a[i] == a[mi])
            flag = 1;
    }

    cout << (flag ? 0 : mi + 1) << endl;
}