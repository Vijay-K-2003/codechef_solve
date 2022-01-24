#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    string ans = "";
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(i == a) {
            ans = ans + s[b];
        } else if (i == b) {
            ans = ans + s[a];
        } else {
            ans = ans + s[i];
        }
    }
    cout << ans << "\n";
    return 0;
}