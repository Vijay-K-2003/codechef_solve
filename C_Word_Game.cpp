#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<string> a;
    vector<string> b;
    vector<string> c;
    map<string, int> words;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            string s;
            cin >> s;
            if(i == 0) {
                a.push_back(s);
            } else if(i == 1) {
                b.push_back(s);
            } else {
                c.push_back(s);
            }
            words[s]++;
        }
    }
    int arr[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            if(i == 0) {
                // cout << words[a[j]] << "\n";
                if (words[a[j]] == 3){
                    arr[i] += 0;
                } else if(words[a[j]] == 2) {
                    arr[i] += 1;
                } else {
                    arr[i] += 3;
                }
                // cout << sa << "\n";
            } else if(i == 1) {
                if (words[b[j]] == 3){
                    arr[i] += 0;
                } else if(words[b[j]] == 2) {
                    arr[i] += 1;
                } else {
                    arr[i] += 3;
                }
            } else {
                if (words[c[j]] == 3){
                    arr[i] += 0;
                } else if(words[c[j]] == 2) {
                    arr[i] += 1;
                } else {
                    arr[i] += 3;
                }
            }
        }
    }
    cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
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
