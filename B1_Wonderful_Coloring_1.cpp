#include <bits/stdc++.h>
#define alpha 26
using namespace std;

int cnt[alpha];

void solve()
{
    string s;
    cin >> s;
    memset(cnt, 0, sizeof(cnt));
    int count1 = 0, count2 = 0;
    for(auto c : s)
    {
        cnt[c - 'a']++;
    }
    for(int i = 0; i < alpha; i++)
    {
        if(cnt[i] == 1)
        {
            count1++;
        }
        else if(cnt[i] > 1)
        {
            count2++;
        }
    }
    cout << count2 + floor(count1 / 2) << "\n";
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