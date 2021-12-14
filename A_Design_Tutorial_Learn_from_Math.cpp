#include <bits/stdc++.h>
using namespace std;

bool prime[1000000 + 1];
void getMath()
{
    
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= 1000000; p++)
    {

        if (prime[p] == true)
        {
            for (int i = p * p; i <= 1000000; i += p)
                prime[i] = false;
        }
    }
    // Print all prime numbers
    // for (int p = 2; p <= n; p++)
    //     if (prime[p])
    //         cout << p << " ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getMath();
    int n;
    cin >> n;
    int flag = 0;
    for (int i = 0 ; i < n ; i++) {
        if (!prime[n-i] && !prime[i]) {
            cout << n-i << " " << i;
            flag++;
            break;
        }
    }
    if (flag < 1) {
        cout << -1 << "\n";
    }

    return 0;
}

/*
1 -> 2, 4 -> 3
2 -> 1, 3 -> 4
3 -> 2, 4 -> 1
4 -> 1, 3 -> 2




*/