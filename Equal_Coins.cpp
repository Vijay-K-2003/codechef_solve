#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t-- > 0)
    {
        int x, y;
        cin >> x >> y;
        int totalValue = x + 2*y;
        if (totalValue %2 != 0)
        cout << "NO\n";
        else
        {
            if (x%2 == 0)
            cout << "YES\n";
            else
            cout << "NO\n";
        }
    }
    

    return 0;
}