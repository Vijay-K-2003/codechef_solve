#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int in;
        cin >> in;
        int ans = (int)sqrt(in) + (int)cbrt(in) - (int)(cbrt(sqrt(in)));
        cout << ans << "\n";
    }

    return 0;
}