#include <bits/stdc++.h>
using namespace std;

void _()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a*b <= x*y)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        _();
    }

    return 0;
}