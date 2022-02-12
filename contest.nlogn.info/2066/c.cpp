#include <iostream>
#include <cmath>
 
using namespace std;
using ld = long double;
 
 
ld length(ld x1, ld y1, ld x2, ld y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
 
 
struct Segment {
    ld a, b, c, x1, y1, x2, y2, l;
 
    Segment(int x1, int y1, int x2, int y2) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
 
        a = y2 - y1;
        b = x1 - x2;
        c = -a * x1 - b * y1;
 
        // cout << a << ' ' << b << ' ' << c << endl;
 
        l = length(x1, y1, x2, y2);
    }
 
    bool has(ld x, ld y) {
        return length(x, y, x1, y1) + length(x, y, x2, y2) == l;
    }
};
 
 
int main() {
    int x1, y1, x2, y2;
 
    cin >> x1 >> y1 >> x2 >> y2;
    Segment s1 = {x1, y1, x2, y2};
 
    cin >> x1 >> y1 >> x2 >> y2;
    Segment s2 = {x1, y1, x2, y2};
 
 
    ld x, y;
 
    if (s1.a == s2.a && s1.b == s2.b && s1.c == s2.c) {
        if (s1.has(s2.x1, s2.y1) || s1.has(s2.x2, s2.y2) || s2.has(s1.x1, s1.y1) || s2.has(s1.x2, s1.y2))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        return 0;
    }
 
    bool fx = 0, fy = 0;
 
    if (s1.a == 0) {
        y = -s1.c / s1.b;
        fy = 1;
    }
    else if (s1.b == 0) {
        x = -s1.c / s1.a;
        fx = 1;
    }
 
    if (s2.a == 0) {
        y = -s2.c / s2.b;
        fy = 1;
    }
    else if (s2.b == 0) {
        x = -s2.c / s2.a;
        fx = 1;
    }
 
 
    if (fx && !fy)
        y = ld(s2.a * s1.c - s2.c * s1.a) / ld(s2.b * s1.a - s2.a * s1.b);
    else if (!fx && fy)
        x = -ld(s1.b * y + s1.c) / s1.a;
    else if (!fx && !fy) {
        y = ld(s2.a * s1.c - s2.c * s1.a) / ld(s2.b * s1.a - s2.a * s1.b);
        x = -ld(s1.b * y + s1.c) / s1.a;
    }
 
    if (s1.has(x, y) && s2.has(x, y))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
 
    return 0;
}