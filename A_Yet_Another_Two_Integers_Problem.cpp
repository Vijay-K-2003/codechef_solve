#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)  {
        lli a, b;   cin >> a >> b ;
        if (a > b) {
            if (a-b > 0 and a-b <= 10)
            {
                cout << 1 << "\n";
            }
            else
            {
                int ans = INT_MAX;
                for(int i = 1 ; i <= 10 ; i++) {
                    ans = (a-b) / i;
                }

            }
        }
    }

    return 0;
}