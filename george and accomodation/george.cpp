#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0 ; i < n ; i++)
    {
        int p, q;
        cin >> p >> q;
        if(p < q-1)
        cnt++;
    }
    cout << cnt ;

    return 0;
}