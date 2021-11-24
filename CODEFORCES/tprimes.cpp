#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    long N = 1000001;// 999983
    bool prime[N + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= N; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    while(n-- > 0)
    {
        long x;
        cin >> x;
        if(x!=1){
        if((int)sqrt(x) == sqrt(x))
        {
            if(prime[(int)sqrt(x)])
                cout << "YES\n";
        }
        else
            cout << "NO\n";
        }
        else
        cout << "NO\n";
    }
    return 0;
}