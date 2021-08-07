#include <bits/stdc++.h>
using namespace std;
int multiply(int x, int y)
{
    if(y)
        return (x + multiply(x, y - 1));
    else
        return 0;
}
int power(int a, int b)
{
    if(b)
        return multiply(a, pow(a, b - 1));
    else
        return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t-- > 0)
    {
        int n;
        long long int k;
        cin >> n >> k;
        long long int l = power(2,n);
        int arr[l];
        long long int ans = 0 ;
        for(int i = 0 ; i < l ; i++)
        {
            if(i < l/2)
            {
                arr[i] = i;
                arr[l-1-i] = l-1-i;
            }
            if((i>=n) and (i<k+1))
            {
                long long int temp = arr[i];
                arr[i] = arr[l-1-i];
                arr[l-1-i] = temp;
            }
            ans += arr[i]^i;
        }
        cout << ans << "\n";
    }
    return 0;
}