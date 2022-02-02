#include <bits/stdc++.h>
using namespace std;
void _()
{
    int n;
    cin >> n;
    int k = 0;
    while((1 << (k + 1) ) <= n-1)
    {
        ++k;
    }
    for(int i = (1 << k) - 1 ; i >= 0 ; --i)
    {
        cout << (i) << " ";
    }
    for(int i = (1 << k) ; i < n ; ++i)
    {
        cout << (i) << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        _();
    }
    

    return 0;
}