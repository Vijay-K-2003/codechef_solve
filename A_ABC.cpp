#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n == 1)
    {
        cout << "YES\n";
    }
    else if(n == 2)
    {
        if((s[0] == '1' and s[1] == '0') or (s[0] == '0' and s[1] == '1'))
        cout << "YES\n";
        else
        cout << "NO\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}