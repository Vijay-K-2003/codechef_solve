#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int k;
    cin >> k;
    map<int, int> mp;
    int cnt = 0;
    for (int i = n-1; i >= 0; i--) {
        auto itr = mp.find(k - arr[i]);
        if(mp.empty()) {
            mp[arr[i]]++;
        } else if (itr != mp.end()) {
            // mp[k - arr[i]]--;
            (*itr).second--;
            // if(mp[k-arr[i]] == 0) {
            //     mp.erase(k - arr[i]);
            // }
            cnt++;
            cnt++;
        }
    }
    for (auto m : mp) {
        cout << m.first << " " << m.second << "\n";
    }
    cout << n - cnt << endl;
    return 0;
}
