#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    int n, p, x, y;
    cin >> n >> p >> x >> y;

    int ans = 0;
    for(int i = 0; i < n ; i++)
    {
        int a;
        cin >> a;
        if(i <= p-1 && a == 1)       ans += y;
        else if(i < p-1 && a == 0)  ans += x;       
    }

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t-- > 0)
    testcase();
    return 0;
}