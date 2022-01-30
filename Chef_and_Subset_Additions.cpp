#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n, 0);
    vector<int> b(n, 0);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        // cout << a[i] << "\n";
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for(int i = 0; i < n; i++)
    {
        b[i] = b[i] - a[i];
        // cout << b[i] << "\n";
    }
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        if(b[i] != x and b[i] != y)
        {
            // cout << "flagged 1 " << i << endl;
            flag = 1; // No
        }
    }
    if(flag == 0)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}