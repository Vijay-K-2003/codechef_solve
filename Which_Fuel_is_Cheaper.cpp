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
        long double x, y, a, b, k;
        cin >> x >> y >> a >> b >> k;
        long double p, d;
        p = x + (k-1)*a;
        d = y + (k-1)*b;
        if (p == d)
        cout << "SAME PRICE\n";
        else if (p < d)
        cout << "PETROL\n";
        else
        cout << "DIESEL\n";
    }
    

    return 0;
}