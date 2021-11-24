#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    string s;
    cin >> s;
    int ans = 0;
    if (s[0] == 0)
        ans++;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 0 && s[i + 1] == 1)
            ans++;
        else if (s[i] == 1 && s[i + 1] == 0)
            ans++;
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t-- > 0)
        testcase();
    return 0;
}