#include <bits/stdc++.h>
using namespace std;

void _() {
    int n;  cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);

    int k_max = floor((n-1) / 2);
    vector<long long> prefix_sum, suffix_sum;
    int prev1 = arr[0], prev2 = 0;
    for(int i = 1 ; i < k_max+1 ; i++) {
        prefix_sum.push_back(arr[i] + prev1);
        prev1 = arr[i];
    }
    for(int i = n-1 ; i >= n-k_max ; i--) {
        suffix_sum.push_back(arr[i] + prev2);
        prev2 = arr[i];
    }
    bool flag = false;
    for(int i = 0 ; i < k_max ; i++) {
        if(prefix_sum[i] < suffix_sum[i]) {
            cout << "YES" << endl;
            flag = true;
            break;
        }
    }
    if(!flag) {
        cout << "NO" << endl;
    }
    

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        _();
    }

    return 0;
}
