#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    long long int a[n];
    for (int i = 0; i < n ; i++) {
        cin >> a[i];
    }
    for (int i = 0 ; i < q ; i++) {
        long long int x;
        cin >> x;
        long long int ans = 0;
        for (int j = 0 ; j < n ; j++) {
            ans += abs(a[j] - x);
        }
        cout << ans << "\n";
    }

    return 0;
}
