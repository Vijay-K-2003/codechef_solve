#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<string, int> mp;
    for (int i = 0 ; i < n ; i++)
    {
        string s;
        cin >> s;
        if (mp.empty())
        {
            mp.insert({s, 1});
            cout << "OK\n";
        }
        else if (!(mp.find(s) != mp.end()))
        {
            mp.insert({s, 1});
            cout << "OK\n";
        }
        else
        {
            cout << s << mp[s] << "\n";
            mp[s]++;
        }
    }
    return 0;
}