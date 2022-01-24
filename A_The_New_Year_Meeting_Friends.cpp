#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, z;
    cin >> x >> y >> z;
    int ans = max(x,max(y,z)) - min(z,min(x,y));
    cout << ans << endl;
    return 0;
}