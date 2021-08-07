#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t-- > 0)
    {
        int a,b;
        cin >> a >> b;
        // int min = (a<b)? a : b;
        // int max = (a>b)? a : b;
        int ans;
        int opt = 0;
        if(a == b)
        ans = 0;
        else 
        {
            if(a < b)
            opt = a+1;
            else
            opt = b-1;
            
            ans = ceil((double)(b - opt)/2) + ceil((double)(opt - a)/2);
        }
        
        // while(min <= max)
        // {
        //     int temp = ceil((double)(b - min)/2) + ceil((double)(min - a)/2);
        //     if(temp > ans)
        //     ans = temp;
        //     min++;
        // }
        cout << ans << "\n";
    }
    return 0;
}