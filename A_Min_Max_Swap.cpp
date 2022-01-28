#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n, 0);
    vector<int> b(n, 0);
    int max_a = INT_MIN, max_b = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] > max_a)
        {
            max_a = a[i];
        }
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
        if(b[i] > max_b)
        {
            max_b = b[i];
        }
    }

    if(max_a > max_b)
    {
        // shift all large values to a array
        for(int i = 0; i < n; i++)
        {
            if(b[i] > a[i])
            {
                swap(a[i], b[i]);
            }
        }
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            if(a[i] > b[i])
            {
                swap(a[i], b[i]);
            }
        }
    }

    int max_a_1 = INT_MIN, max_b_1 = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max_a_1)
        {
            max_a_1 = a[i];
        }
        if(b[i] > max_b_1)
        {
            max_b_1 = b[i];
        }
    }
    cout << max_b_1 * max_a_1 << "\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}