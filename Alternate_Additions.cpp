#include <bits/stdc++.h>
using namespace std;

void _() {
    int a, b; cin >> a >> b;
    // int diff = b - a - 1;
    // if (diff == 2 or diff == 1 or (diff+1)%3 == 0) {
    //     cout << "YES\n";
    //     return;
    // }
    // double steps = (double) diff * 2.0 / 3.0;
    // if ((int)steps == steps) {
    //     cout << "YES\n";
    // } else {
    //     cout << "NO\n";
    // }
    int diff = b - a;
    double val = (double)diff / 3.0;
    double val1 = ((double)diff - 1.0) / 3.0;
    if (val == (int)val or val1 == (int)val1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main()
{
    // fastio
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) _();
    return 0; 
}
