#include <bits/stdc++.h>
using namespace std;

void _()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int temp = 1;
    int cnt = 0;
    for (int  i = 0; i < n; i++)
    {
        if (a[i] == temp)
        {
            cnt++;
            temp += 2;
        }
        else
        {
            temp++;
        }
    }
    cout << cnt << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        _();
    }

    return 0;
}