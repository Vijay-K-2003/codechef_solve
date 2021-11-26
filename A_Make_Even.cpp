#include <bits/stdc++.h>
using namespace std;

int counteven(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        int temp = n % 10;
        if (temp % 2 == 0)
            cnt++;
        n = n / 10;
    }
    return cnt;
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

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << 0 << "\n";
    }
    else
    {
        int len = 0;
        if ((to_string(n)[0] - '0') % 2 == 0)
        {
            cout << 1 << "\n";
        }
        else if (counteven(n) > 0)
        {
            cout << 2 << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
}