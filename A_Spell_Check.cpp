#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string checker = "Timur";
    sort(checker.begin(), checker.end());

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n != 5){
            cout << "NO\n";
            continue;
        }
        sort(s.begin(), s.end());
        if (s != checker)
            cout << "NO\n";
        else 
            cout << "YES\n";
    }
    return 0;
}
