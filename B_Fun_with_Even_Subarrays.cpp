#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[0] == a[i])
        {
            check++;
        }
    }
    if (check == n)
    {
        cout << 0 << "\n";
    }
    else if (n == 1)
    {
        cout << 0 << "\n";
    }
    else
    {
        int val = a[n - 1]; // last value
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] != val)
            {
                cnt++;
            }
        }
        
        int prev = 1;
        int ans = 1;
        int power = 1;
        while(prev != 0)
        {
            ans += cnt / pow(2, power);
            power++;
            prev = cnt / pow(2, power);
        }

        prev = 1;
        cnt = 0;
        while(prev > 0)
        {
            prev = n - pow(2, cnt);
            cnt++;
        }
        cout << min(ans, cnt-1) << endl;
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
        solve();
    }

    return 0;
}