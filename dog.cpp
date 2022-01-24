#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t-- ){ 
        int n, k;
        cin >> n >> k;
        int max_val = INT_MIN;
        for(int i = 1 ; i <= k ; i++) {
            // cout << n%i << "\n";
            max_val = max(max_val, n%i);
        }
        cout << max_val << "\n";
    }

    return 0;
}