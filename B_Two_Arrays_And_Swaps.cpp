#include <bits/stdc++.h>
using namespace std;

int n, k;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void solve()
{
    cin >> n >> k;
    int a[n], b[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+n);
    reverse(b, b+n);

    
    for (int i = 0; i < k; i++)
    {
        if(a[i] < b[i])
            swap(a[i], b[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    
    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}