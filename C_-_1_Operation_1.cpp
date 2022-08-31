#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int x, a, d, n, last_term;
    cin >> x >> a >> d >> n;
    if (d < 0) {
        // reverse the ap
        a = a + (n-1)*d;
        d = -d;
    }
    last_term = a + (n-1)*d;
    if (x <= a) {
        // before the first term
        cout << a - x << endl;
    } else if (x >= last_term) {
        // after the last term
        cout << x - last_term << endl;
    } else {
        long long int ans = (x - a) % d;
        cout << min(ans, d-ans) << endl;
    }
    
    return 0;
}
