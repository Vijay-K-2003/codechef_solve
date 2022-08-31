#include <bits/stdc++.h>
using namespace std;

void _() {
    long long x, y;
    cin >> x >> y;
    if ((x == 0 and y != 0) or (x != 0 and y == 0)) {
        cout << "-1\n";
        return;
    }
    if (x == 0 and y == 0) {
        cout << "0\n";
        return;
    }
    if (x == y) {
        cout << x << "\n";
        return;
    }
    
    if (x > y) {
        long long temp = x;
        x = y;
        y = temp;
    }
    // case 1: if x < y and 2*x > y 
    if (x < y and 2*x >= y) {
        long long diff = 2*x - y;
        y = y - diff;
        cout << diff + y + 1 << "\n";
        return;
    }
    // case 2: if x < y and 2*x < y
    if (x < y and 2*x < y) {
        long long cnt_2 = (long long)ceill(log2(y / x));
        long long ans;
        
        if (x == y) {
            ans = cnt_2 + x;
        } else {
            int diff = 2*x - y;
            y = y - diff;
            ans = cnt_2 + diff + y + 1;
        }
        cout << ans << "\n";
        return;
    }
}

int main() {
    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while (t-- ) {_();}

    return 0;
}
