#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> vp;
int n;
int solu(int i , int mask, vector<vector<int>> memo) {
    if(mask == ((1 << i) | 3))
        return vp[1][i];
    if(memo[i][mask]!=0)
        return memo[i][mask];
    int res = INT_MAX;
    for (int j = 1; j <= n; j++)
        if ((mask & (1 << j)) && j != i && j != 1)
            res = min(res, solu(j, mask & (~(1 << i)), memo) + vp[j][i]);
    return memo[i][mask] = res;
}
void _() {
    cin >> n;
    int ans = INT_MAX; 
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        vp.push_back(v);
    cout << ans << "\n";
    }
    vector<vector<int>> memo(n + 1, vector<int> (1 << (n + 1), 0));
    for (int i = 1; i <= n; i++) {
        ans = min(ans, solu(i, (1 << (n + 1)) - 1, memo) + vp[i][1]);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        _();
    }

    return 0;
}
