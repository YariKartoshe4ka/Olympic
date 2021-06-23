// Реализация, используя рекурсию: O(n), где n - степень числа

/*
#include <iostream>
using namespace std;

int pow(int base, int exp) {
    if (exp == 0)
        return 1;

    base %= 10;
    return pow(base, exp - 1) * base % 10;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << pow(a, b) << endl;
}
*/

// Реализация, используя множество допустимых значений: O(1)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int base, exp;
    vector<vector<int> > r;

    cin >> base >> exp;

    r.push_back(vector<int> (1) = {0});
    r.push_back(vector<int> (1) = {1});
    r.push_back(vector<int> (4) = {2, 4, 6, 8});
    r.push_back(vector<int> (4) = {3, 9, 7, 1});
    r.push_back(vector<int> (2) = {4, 6});
    r.push_back(vector<int> (1) = {5});
    r.push_back(vector<int> (1) = {6});
    r.push_back(vector<int> (4) = {7, 9, 3, 1});
    r.push_back(vector<int> (4) = {8, 4, 2, 6});
    r.push_back(vector<int> (2) = {9, 1});

    cout << r[base % 10][(exp - 1) % r[base % 10].size()] << endl;

    return 0;
}