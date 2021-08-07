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
        int d, x, y, z;
        cin >> d >> x >> y >> z;
        cout << max(7*x, y*d + z*(7-d)) << "\n";
    }
    return 0;
}