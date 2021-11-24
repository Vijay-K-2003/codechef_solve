#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    char prev;
    string req = "hello";
    int idx = 0;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(req[idx] == s[i])
        {
            idx++;
        }        
    }
    if(idx == 5)
    cout << "YES";
    else
    cout << "NO";
    return 0;
}