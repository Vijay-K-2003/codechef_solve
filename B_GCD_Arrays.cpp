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
    int right = r - l + 1, left = (r / 2) - ((l - 1) / 2);
    int odd = 1;
    if (l == r)
    {
        if (l != 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else
    {
        for (int i = left; i <= right; i++)
        {
            if (i % 2 != 0)
                odd++;
        }
        if (odd <= k)
            cout << "YES\n";
        else
            cout << "NO\n";
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