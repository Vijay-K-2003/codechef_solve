#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int welfare[n];
    int maxwell = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> welfare[i];
        maxwell = max(maxwell, welfare[i]);                
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += maxwell - welfare[i];
    }
    cout << cnt << endl;
    return 0;
}