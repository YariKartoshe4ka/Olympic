#include <iostream>
using namespace std;


int main() {
    int form, cpp, cobol, team, loops;
    cin >> form >> cpp >> team;

    cobol = form - cpp;
    loops = 1;

    if ((float)cobol / team >= (float)cpp / team)
        cout << -1 << endl;
    else {
        cpp += team - cpp % team;
        cobol -= cobol % team;

        while (cobol > 0) {
            loops++;

            if (float(cpp) / 2 < cobol) {
                cpp += team;
                cobol -= team;
            }
            else {
                cpp = form;
                cobol = 0;
            }
        }

        cout << loops << endl;
    }
    return 0;
}