#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t-- > 0)
    {
        int e, k;
        cin >> e >> k;
        int ans = 1;
        while((int)floor((double)e/k) >= 1)
        {
            e = floor((double)e/k);
            ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}