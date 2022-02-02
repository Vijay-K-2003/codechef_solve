#include <bits/stdc++.h>
using namespace std;

int min(int a, int b) {
    return a < b ? a : b;
}

void __() {
    string s;
    cin >> s;
    int cnt_0 = 0, cnt_1 = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '0') cnt_0++;
        else cnt_1++;
    }
    cout << min(cnt_1, min( floor((s.size() - 1) / 2), cnt_0)) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        __();
    }

    return 0;
}