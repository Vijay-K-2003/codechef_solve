#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        n /= 2;
        if (n & 1) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        for (int i = 1; i <= n; ++i) {
			cout << i * 2 << " ";
            // even nos
		}
		for (int i = 1; i < n; ++i) {
			cout << i * 2 - 1 << " ";
            // odd nos 
    	}
        cout << 3*n - 1 << "\n"; // 
    }

    return 0;
}