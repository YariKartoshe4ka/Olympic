#include <iostream>
using namespace std;

int main() {
    int n, m, i, j, c;
    cin >> n >> m >> i >> j >> c;

    if (n * m % 2 == 0)
        cout << "equal" << endl;
    else {
        if ((i + j) % 2 == 0)
            cout << (c ? "white" : "black") << endl;
        else
            cout << (c ? "black" : "white") << endl;
    }

    return 0;
}
