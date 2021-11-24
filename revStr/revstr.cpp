#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    string t;
    cin >> t;
    string ss = "";
    for(int i = 0 ; i < s.length() ; i++)
    {
        ss = s[i] + ss;
    }
    if(ss == t)     cout << "YES";
    else            cout << "NO";
    return 0;
}