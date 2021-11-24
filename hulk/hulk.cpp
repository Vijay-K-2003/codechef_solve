#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string ans = "";
    if(n%2 == 0)
    ans = "I love it" + ans;
    else
    ans = "I hate it" + ans;
    n--;
    while(n-- > 0)
    {
        if(n%2 != 0)
        ans = "I love that " + ans;
        else 
        ans = "I hate that " + ans;
    }

    cout << ans;
    return 0;
}