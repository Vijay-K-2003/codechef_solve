#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a, b;
    cin >> a >> b;
    string ans = "";
    for(int i = 0 ; i < a.size() ; i++)
    {
        if((a[i]-'0')^(b[i]-'0') == 0)
        ans = ans + "0";
        else
        ans = ans + "1";
    }

    cout << ans;

    return 0;
}