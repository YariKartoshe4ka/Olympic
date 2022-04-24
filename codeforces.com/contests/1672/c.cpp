#include <iostream>
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        bool dbl = false;
        int ans = 0, prev, cnt_prev = 1, cnt_dbl = 0;
        cin >> prev;
 
        for (int i = 1; i < n; ++i) {
            int a;
            cin >> a;
            
            if (a == prev)
                ++cnt_prev;
            else {
                if (cnt_prev > 1) {
                    if (dbl) {
                        ans += cnt_prev - 1 + cnt_dbl;
                        cnt_dbl = 1;
                    }
                    else {
                        ans += cnt_prev - 2 - (cnt_prev > 3);
                        cnt_dbl += (cnt_prev > 3);
                        dbl = true;
                    }
                } else if (dbl) ++cnt_dbl;
 
                cnt_prev = 1;
            }
            prev = a;
        }
                 
        if (cnt_prev > 1) {
            if (dbl)
                ans += cnt_prev - 1 + cnt_dbl;
            else
                ans += cnt_prev - 2 - (cnt_prev > 3);
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}