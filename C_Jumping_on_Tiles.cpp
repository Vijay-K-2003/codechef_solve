#include<bits/stdc++.h>
using namespace std;
int index(char c) {
    return c - 'a' + 1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cost = 0, tiles = 0;
        map<int, vector<int>> mp;
        for (int i = 0; i < s.size() ;i++) {
            mp[s[i]].push_back(i + 1);
        }
        auto f = mp.find(s[0]);
        auto l = mp.find(s[s.size() - 1]);
        int sign = (distance(f, l) < 0) ? -1 : 1;
        // while()
    // }

    return 0;
}
