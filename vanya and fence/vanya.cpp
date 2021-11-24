#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, h;
    cin >> n >> h;
    int w = n;
    for(int i = 0 ; i < n ; i++)
    {
        int temp;
        cin >> temp;
        if(temp > h)
        w++;
    }
    cout << w ;
    return 0;
}