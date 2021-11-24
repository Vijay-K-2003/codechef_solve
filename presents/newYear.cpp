#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, p;
    cin >> n;
    int ans[n];
    for(int i = 1 ; i < n + 1 ; i++)
    {
        cin >> p;
        ans[p-1] = i;
    }
    for(int i = 0 ; i < n ;i++){
        if(i != n-1)
        cout << ans[i] << " ";
        else 
        cout << ans[i];
    }
    return 0;
}