#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        double x = pow((0.143 * n), n);
        if (x - floor(x) < 0.5)
            cout << (int)floor(x) << "\n";
        else
            cout << (int)ceil(x) << "\n";
    }
    return 0;
}