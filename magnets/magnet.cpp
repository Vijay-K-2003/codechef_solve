#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int prev;
    cin >> prev;
    int cnt = 1;

    for(int i = 1 ; i < n ; i++)
    {
        int now;
        cin >> now;
        if(prev == now)
        continue;
        else
        cnt++;

        prev = now;
    }
    cout << cnt ;
    return 0;
}