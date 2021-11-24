#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int s, n;
    cin >> s >> n;
    bool flag = true;
    vector<pair<int, int> > a(n, make_pair(0, 0));
    for(int i = 0 ; i < n ; i++)
        cin >> a[i].first >> a[i].second;
    sort(a.begin(), a.end());
    for(int i = 0 ; i < n ; i++)
    {
        int x = a[i].first;
        int y = a[i].second;
        if (x < s)
        {
            s = s + y;
        }
        else 
        {
            flag = false;
            break;
        }
    }
    if (flag)   cout << "YES" << endl;
    else        cout << "NO" << endl;

    return 0;
}