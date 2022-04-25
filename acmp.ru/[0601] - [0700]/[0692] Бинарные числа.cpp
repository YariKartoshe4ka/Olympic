#include <iostream>
#include <cstring>
using namespace std;


string log2(int n) {
    if (n == 1)
        return "YES";
    if (n < 1)
        return "NO";
    if (n % 2 == 0)
        return log2(n / 2);
    return "NO";
}

int main() {
    int n;
    cin >> n;

    cout << log2(n) << endl;

    return 0;
}
