#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, l, r, k;
        cin >> n >> l >> r >> k;

        vector<int> a(n, 0);
        for(int i =  0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        int cnt = 0;
        for(int i = 0 ; i < n; i++) {
            if(a[i] >= l && a[i] <= r && a[i] <= k) {
                k = k - a[i];
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}