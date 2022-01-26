#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char prev = s[0];
    unordered_set<char> S;
    S.insert(prev);
    int flag = 0;
    for (int i = 1; i < n; i++)
    {
        if(s[i] == prev)
        {
            prev = s[i];
        }
        else
        {
            if(S.find(s[i]) != S.end())
            {
                // Repeated but not equal to prev so
                flag = 1;
                break;
            }
            S.insert(s[i]);
            prev = s[i];
        }
    }   
    if(flag)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}