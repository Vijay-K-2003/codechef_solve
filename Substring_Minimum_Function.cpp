#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t-- ) {
        solve();
    }

    return 0;
}

void solve() {
    int n, m;
    cin >> n >> m;
    if(n == m) cout << 0 << "\n";
    else if(m == 0) cout << (int)pow(2, n) - 1 << "\n";
    else {
        int p = ceil((float)(n-m) / (m+1));
        int ans = (pow(2, p)-1) * (m+1);
        cout << ans << "\n";
    }
}