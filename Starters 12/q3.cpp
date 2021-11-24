#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    auto start = chrono::steady_clock::now();
    int a, b ,c;
    cin >> a >> b >> c;
    int x, y, z;
    cin >> x >> y >> z;

    if((a+b+c) * 20 <= 240)
    cout << (x+y+z) * 20 << "\n";
    else
    {
        int ans = INT_MIN;
        int t = 240;
        for(int i = 0 ; i <= 20 ; i++)
        {
            for(int j = 0 ; j <= 20 ; j++)
            {
                for(int k = 0 ; k <= 20 ; k++)
                {
                    if((t - a*i - b*j - c*k) >= 0 )
                    ans = max(ans, i*x + j*y + k*z);
                }
            }
        }
        cout << ans << "\n";
    }
    auto end = chrono::steady_clock::now();
    cout << "Elapsed time in microseconds: "
        << chrono::duration_cast<chrono::microseconds>(end - start).count()
        << " µs" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t-- > 0)
    testcase();
    return 0;
}