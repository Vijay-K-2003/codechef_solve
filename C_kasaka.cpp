#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    return S == P;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    if (s.size() == 1)
    {
        cout << "Yes";
    }
    else if (s[s.size() - 1] == 'a')
    {
        int last = s.size();
        int first = 0;
        while (s[last - 1] == 'a')
        {
            last--;
        }
        while (s[first] == 'a')
        {
            first++;
        }
        // cout << first << " " << last << "\n";
        if (checkPalindrome(s.substr(first, last - first)))
        {
            // cout << s.substr(first, last - first) << "\n";

            cout << "Yes";
        }
        else
        {
            // cout << s.substr(first, last - first) << "\n";

            cout << "No";
        }
    }
    else
    {
        if (checkPalindrome(s))
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
    return 0;
}