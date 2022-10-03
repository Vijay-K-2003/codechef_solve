#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int p = abs(a - 1);
        int q = abs(b - c) + abs(c - 1);
        if(p == q)
            cout << "3\n";
        else if(p > q)
            cout << "2\n";
        else
            cout << "1\n";
    }

    return 0;
}
