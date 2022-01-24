#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void solve(int l, int r, int k)
{
    vector<int> v;
    for (int i = l; i <= r; i++)
        v.push_back(i);
    if (l == r and r == 1)
        cout << "NO\n";
    else if (l == r and l != 1)
        cout << "YES\n";
    else if (r - l == k)
        cout << "YES\n";
    else if (k == 0)
    {
        int ans = l;
        for (int i = l + 1; i <= r; i++)
        {
            ans = gcd(ans, i);
        }
        if (ans == 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    else
    {

        if(l == 1 || l == 0) 
        {
            solve(2, r, k);
        }
        else
        {
            int odds = 0;
            if((l%2 == 0 and r%2 == 0))
            {
                odds = (r-l)/2;
            } 
            // else if((l%2 != 0 and r%2 != 0))
            // {
            //     odds = (r-l) - (r-l)/2;
            // }
            else
            {
                odds = (r-l+1)/2;
            }
            if(odds <= k)
            cout << "NO\n";
            else
            cout << "YES\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        // cout << "t : " << t << "\n";
        int l, r, k;
        cin >> l >> r >> k;
        solve(l, r, k);
    }

    return 0;
}