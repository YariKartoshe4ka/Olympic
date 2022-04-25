#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    n /= 24;

    printf("%d %d %d\n", n * 13, n * 4, n * 7);

    return 0;
}
