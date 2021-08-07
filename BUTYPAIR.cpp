#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,a,b,c) for(int i=a;i<b;i = i + c)
#define llint long long int
using namespace std;

int main()
{
    fastio;
    llint t;
    cin >> t;
    while (t-->0)
    {
     llint n;
     cin>>n;
     llint arr[n];
     rep(i,0,n,1)
         cin>>arr[i];
     sort(arr, arr + n);
     llint count = 1;
     llint ans = n*(n-1);
     rep(i,0,n-1,1)
     {
         if (arr[i] == arr[i + 1])
            count++;
         else 
         {
            ans = ans - count*(count-1);
            count = 1;
         }
     }
     ans = ans - count*(count-1);
     cout<<ans<<endl;
    }
    return 0;
}