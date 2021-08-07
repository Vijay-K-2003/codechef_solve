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
        int a, b;
        cin >> a >> b;
        int ans;
        if(a+b < 3)
        ans = 1;
        else if((a+b >= 3) && (a+b <= 10))
        ans = 2;
        else if((a+b >= 11)&&(a+b <= 60))
        ans = 3;
        else
        ans = 4;

        cout << ans << "\n";
    }
    return 0;
}