#include <bits/stdc++.h>
using namespace std;
bool prime[1000000 + 1];

void SieveOfEratosthenes()
{
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= 1000001; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= 1000001; i += p)
                prime[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    SieveOfEratosthenes();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n == 1)
        {
            cout << 7 << "\n";
        }
        else
        {
            int j = 2;
            for(int i = 0; i < n;)
            {
                if(prime[j])
                {
                    cout << j << " ";
                    i++;
                }
                j++;
            }
            cout << "\n";
        }
    }

    return 0;
}