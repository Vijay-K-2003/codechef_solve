#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
        {
            return false;
        }
    }
    return true;
}
void _()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i <= n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            cnt++;
        }
    }
    if ((cnt <= k and n % 2 != 0) || ((k - cnt) % 2 == 0 and n % 2 == 0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        _();
    }
    return 0;
}