#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    int b[k];
    for(int i = 0 ; i < k ;i++)
    {
        cin >> b[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < k ; j++)
        {
            if(i+1 == b[j])
            a[i] = 0;
        }
    }
    int sum = 1;
    for(int i = 0 ; i < n ; i++)
    {
        sum += a[i];
    }
    cout << sum ;

    return 0;
}