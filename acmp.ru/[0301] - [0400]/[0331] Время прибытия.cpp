#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int h1, m1, h2, m2, h3, m3;
    char t;

    scanf("%d:%d", &h1, &m1);

    cin >> h2 >> m2;

    m3 = (m1 + m2) % 60;
    h3 = (h1 + h2 + (m1 + m2) / 60) % 24;

    printf("%02d:%02d", h3, m3);

    return 0;
}
