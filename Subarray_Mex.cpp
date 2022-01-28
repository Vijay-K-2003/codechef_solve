#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, k;
    cin >> n >> k >> x;
    if (n == k and k == x)
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    else if (k < x)
    {
        cout << -1 << "\n";
    }
    else
    {
        // vector<int> karr(k, 0);
        // for (int i = 0; i < k; i++)
        // {
        //     karr[i] = i;
        // }
        // fill array and then remove value from the arr
        // karr.erase(karr.begin() + x);

        // vector<int> ans(n, 0);
        // int j = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     if (j == karr.size())
        //     {
        //         j = 0;
        //     }
        //     ans[i] = karr[j];
        //     j++;
        // }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << ans[i] << " ";
        // }
        // cout << "\n";
        // 4 2 2 > 0 1 0 1
        int karr = 0;
        for(int i = 0; i < n; i++, karr++)
        {
            if(karr == x)
            {
                karr = 0;
            }
            cout << karr << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    // cout << "Here\n";
    while (t--)
    {
        // cout << "Here\n";
        solve();
    }

    return 0;
}