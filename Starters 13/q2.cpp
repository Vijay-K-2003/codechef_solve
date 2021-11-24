#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    int p, a, b, c, x, y;
    cin >> p >> a >> b >> c >> x >> y;
    int t = a * x + b;
    int u = a * y + c;
    // p = t*A + u*C
    if (t > u)
    {
        int n = floor(p / u);
        cout << n << "\n";
    }
    else
    {
        int m = floor(p / t);
        cout << m << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t-- > 0)
        testcase();
    return 0;
}