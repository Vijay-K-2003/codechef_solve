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
        int x;
        cin >> x;

        int a1, a2, a3, b, c1, c2, c3, d;
        cin >> a1 >> a2 >> a3 >> b >> c1 >> c2 >> c3 >> d;
        double req = (double)min((double)a1, min((double)a2, (double)a3)) + (double)b + min((double)c1, min((double)c2, (double)c3))*2 + (double)d/2 ;
        // cout << x << " " << req << "\n";
        if (x > req)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}