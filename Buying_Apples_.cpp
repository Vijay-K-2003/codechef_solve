#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t-- > 0)
    {
        int n, k;
        cin >> n >> k ;
        // cout << "n = " << n << " k = " << k << "\n";
        vector<int> a(n, 0);
        for(int i = 0 ; i < k ; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int i;
        for(i = 0; i < k ; i++)
        {
            if(a[i] % k == 0)
            {
                // cout << k << " value of k\n";
                cout << a[i]/k << "\n\n";
                
                break;
            }
        }
        if (i == n)
            cout << -1 << "\n";
    }

    return 0;
}