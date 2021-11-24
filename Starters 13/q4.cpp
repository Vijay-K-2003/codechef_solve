#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b)
{
    if(a == 0)
        return b;
    
    return gcd(b%a, a);
}

void testcase()
{
    long long int a, b;
    cin >> a >> b;

    while(true)
    {
        long long int g = gcd(a, b);

        if(g == 1)
        {
            break;
        }
        a = a / g;
    }   
    if(a == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t-- > 0)
    {
        testcase();
    }

    return 0;
}