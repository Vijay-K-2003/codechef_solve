#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;   cin >> n >> m;

    long long steps = 0;
    int pos = 1;
    for (int i = 0 ; i < m ; i++)
    {
        int t;
        cin >> t;
        if (pos <= t)
            steps += t - pos;
        else
            steps += n - (pos - t);
        pos = t;
    }
    cout << steps << endl;

    return 0;
}