/**
 * @author Vijay Karanjkar
 * @date 2022-09-23
 * Jai Shree Krishna Chaitanya Prabhu Nityanand 
 * Shree Adwait Gadadhar Shrivasadi Gaur Bhaktavrunda
 */
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> arr(n);
    bool ans_zero = false;
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
        if(mp[arr[i]] == 3) {
            ans_zero = true;
        }
    }
    if (ans_zero) {
        cout << "0\n";
        return;
    }
    int max_val = 0;
    int max_rep = 0;
    for (auto a : mp) {
        if (max_rep < a.second) {
            max_rep = a.second;
            max_val = a.first;
        }
    }
    for (int i = 0; i < n ; i++) {
        arr[i] = abs(arr[i] - max_val);
    }
    sort(arr.begin(), arr.end());
    int chk = 3 - max_rep;
    int sum = 0;
    for (int i = 0; i < chk; i++) {
        sum += arr[i];
    }
    cout << sum << "\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
