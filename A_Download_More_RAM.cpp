#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int b[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; i++) {
        cin >> b[i];
    }
    vector<pair<int, int> > v;
    for(int i = 0 ; i < n ; i++) {
        v.push_back(make_pair(a[i], b[i]));
    }
    sort(v.begin(), v.end());
    int val = k;
    int cnt = 0;
    // for(int i = 0 ; i < n ; i++) {
    //     cout << "v[" << i << "] = (" << v[i].first << "," << v[i].second << ")\n";
    // }
    for(int i = 0 ; i < n ; i++) {
        if(val >= v[i].first)
        {   
            cnt++;
            val += v[i].second;
        }
        else 
        {
            break;
        }
    }
    //cout << "cnt " << cnt << "\n";
    int m = k;
    for(int i = 0 ; i < cnt ; i++) {
        m += v[i].second;
    }
    cout << m << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}