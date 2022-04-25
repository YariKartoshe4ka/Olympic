#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


int main() {
    string t, m[3];

    getline(cin, t);
    getline(cin, m[0]);
    getline(cin, m[1]);
    getline(cin, m[2]);

    sort(m, m + 3);

    cout << t << ": " << m[0] << ", " << m[1] << ", " << m[2] << endl;

    return 0;
}
