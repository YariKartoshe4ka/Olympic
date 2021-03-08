#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n/1000 == n%10 && n/100%10 == n%100/10)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}