#include <bits/stdc++.h>
using namespace std;

void solve(int n) 
{
    int e = 0, o = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 != i % 2) {
            if (i % 2 == 0) {
                e++;
            } else {
                o++;
            }
        }
    }
    if (e != o) {
        cout << -1 << endl;
    } else {
        cout << e << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}