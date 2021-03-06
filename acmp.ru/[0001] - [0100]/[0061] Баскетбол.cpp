#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    for (int i = 0; i < 4; i++) {
        int ap, bp;
        cin >> ap >> bp;
        a += ap;
        b += bp;
    }

    if (a > b) {
        cout << '1' << endl;
    }
    else if (b > a) {
        cout << '2' << endl;
    }
    else {
        cout << "DRAW" << endl;
    }

    return 0;
}