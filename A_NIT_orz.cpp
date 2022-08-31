#include <bits/stdc++.h>
using namespace std;

void _() {
    int n, z;   cin >> n >> z;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    // for (int i = 0; i < n; i++) cout << a[i];

    sort(a, a+n);
    for(int i = 0 ; i < n; i++) {
        a[i] = a[i] | z;
        z = a[i] & z;
        // cout << a[i] << " " << z << endl;
        // if (z == 0) break;
    }
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
    }
    cout << max << endl;
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
