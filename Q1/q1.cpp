#include <bits/stdc++.h>
#define vi vector<int>
#define vl vector<long>
#define lli long long int
using namespace std;

lli getProduct(vi A, int n)
{
    lli sum = 0;
    for (int i = 0; i < n; i++)
        sum += A[i];
 
    lli sqSum = sum * sum;

    lli sum1 = 0;
    for (int i = 0; i < n; i++)
        sum1 += A[i]*A[i];
    return (sqSum - sum1)/2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t-- > 0)
    {
        string num;
        cin >> num;
        vi n(num.size(),0);
        for(lli i = 0 ; i < num.size() ; i++)
        {
            n[i] = num.at(i) - '0';
            n[i] = (int)(n[i] << n[i])%10;
        }
        lli ans = getProduct(n, n.size());
        cout << ans << "\n";
    }
    return 0;
}