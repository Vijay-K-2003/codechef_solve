#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char c[27];
    for (int i = 97; i < 97 + 26; i++) {
        c[i - 96] = (char)i;
        // cout << c[i - 96] << "\n";
    }
    int t;
    cin >> t;


    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string sol = "";
        for (int i = n - 1; i >= 0;)
        {
            // if s[i] is not zero make char
            if (s[i] != '0') {
                sol = c[s[i]-'0'] + sol;

                i--;
            } else {
                string q = s.substr(i - 2, 2);
                int val = stoi(q);
                sol = c[val]+sol;
                i = i - 3;
            }
        }
        cout << sol << "\n";
    }

    return 0;
}
