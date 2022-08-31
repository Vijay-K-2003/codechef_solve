#include <bits/stdc++.h>
using namespace std;

void _() {
    int n, x;
    cin >> n >> x;
    if (n % 6 == 0) {
        cout << x * (n/6) << endl;
    } else {
        cout << x * (n/6 + 1) << endl;
    }
    return;
}

int main()
{
    // fastio
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) _();
    return 0;
}
