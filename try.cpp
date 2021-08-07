#include <bits/stdc++.h>
using namespace std;
int ans = 0;
void ones(int n)
{
    if(n==0)
    ans++;
    else
    for(int i = 1 ; i < pow(2,n) ; i++)
    {
        ones(n-1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    ones(n);
    cout << ans << endl;
    return 0;
}