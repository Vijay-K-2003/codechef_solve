#include <bits/stdc++.h>
using namespace std;

int n;
int a[20][20];
vector<pair<int, int>> vec;
bool used[20];
int ans()
{
    if (vec.size() == n)
    {
        int ret = 0;
        for (auto p : vec)
            ret ^= (a[p.first][p.second]);
        return ret;
    }

    int l;
    for (int i = 1; i <= 2 * n; i++)
    {
        if (!used[i])
        {
            l = i;
            break;
        }
    }
    used[l] = true;
    int ret = 0;
    for (int i = 1; i <= 2 * n; i++)
    {
        if (!used[i])
        {
            vec.push_back({l, i}), used[i] = true;
            ret = max(ret, ans());
            vec.pop_back(), used[i] = false;
        }
    }

    used[l] = false;
    return ret;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = i + 1; j <= 2 * n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << ans() << endl;
    return 0;
}