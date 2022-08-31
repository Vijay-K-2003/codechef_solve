#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        if (x > y) {
            cout << x-y << "\n";
        } else if (x <= y) {
            cout << 0 << "\n";
        }
    }
    return 0;
}
