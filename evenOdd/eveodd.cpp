#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, k;
    cin >> n >> k;

    long long int ans = 0;

    if(n%2 == 0)
    {
        if(k <= n/2)
        ans = 2*k - 1;
        else if(k > n/2)
        ans = 2*k - n;
    }
    else
    {
        if(k <= (n+1)/2)
        ans = 2*k - 1;
        else if(k > (n+1)/2)
        ans = 2*k - n - 1;
    }
    cout << ans ;

    return 0;
}