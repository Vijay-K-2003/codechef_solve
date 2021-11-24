#include <bits/stdc++.h>
using namespace std;
double sqrtl(long n1) 
{
        double a;
        double b = n1/2;
        a = b;
        b = (a+(n1/a))/2;
        while(a != b){
            a = b;
            b = (a + (n1/a))/2;
        }
        return b;
    }
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    long N = 1000001;
    bool prime[N + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= N; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= N; i += p)
                prime[i] = false;
        }
    }
    while(n-- > 0)
    {
        long x;
        cin >> x;
        cout << "Prime " << prime[999983] << "\n";
        
        if(x!=1){

            cout << (long)sqrtl(x) << " "<< sqrtl(x) << " "<< prime[(int)sqrtl(x)] << "\n";
        if(ceil(sqrtl(x)) == sqrtl(x))
        {
            if(prime[(int)sqrtl(x)])
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
        }
        else
        cout << "NO\n";
    }
    return 0;
}