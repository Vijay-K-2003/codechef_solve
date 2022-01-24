#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int y[n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
        if(y[i] + k <=  5)
        cnt++;
    }
    cout << cnt/3 << endl;


    return 0;
}