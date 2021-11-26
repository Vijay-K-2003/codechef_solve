#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--) {
        long long int a, b;
        cin >> a >> b ;
        // 1 3
        // 2 2
        // 3 1
        long ans = min(min(a, b), (a+b)/4);
        // if(a+b < 4 || a == 0 || b == 0) cout << 0 << "\n";
        // else if(a < 4 && b > 4) cout << a << "\n";
        // else if(b < 4 && a > 4) cout << b << "\n";
        // else if(a == b && a > 4 && b > 4) cout <<(a+b)/4 << "\n";
        // else if(a < 4 && b < 4) cout << 1 << "\n";
        cout << ans << "\n";
    }

    return 0;
}