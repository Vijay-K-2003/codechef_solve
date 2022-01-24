#include <bits/stdc++.h>
using namespace std;

int x, y, n;

void solve()
{
    cin >> x >> y >> n ;
    int val = n - n%x + y;
    if(val <= n) 
        cout << val << "\n";
    else
        cout << val - x << "\n";
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