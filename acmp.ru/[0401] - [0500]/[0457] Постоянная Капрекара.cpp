#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    string left, right;
    while (n != 6174) {
        left = to_string(n);
        left += string(4 - left.length(), '0');
        sort(left.begin(), left.end());

        right = left;
        reverse(left.begin(), left.end());

        n = stoi(left) - stoi(right);
        cnt++;
    }

    cout << n << endl << cnt << endl;

    return 0;
}