#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    vector<int> v(n, 0);
    vector<vector<int>> a(n, v);

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> a[i][j];
        }
    }
    int m;
    cin >> m;
    for(int i = 0 ; i < m ; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        
    }



    return 0;
}