#include <bits/stdc++.h>
using namespace std;

void _()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int temp = 1;
    int prev = INT_MIN;
    if(s.size()%2 != 0){
        cout << "YES" << "\n";
    }
    else {
        int cnt_1 = 0, cnt_0 = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '1'){
                cnt_1++;
            }
            else {
                cnt_0++;
            }
        }
        if (cnt_1 == cnt_0) {
            cout << "YES\n";
        }
        else if (cnt_1 % 2 == 0 and cnt_0 % 2 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        _();
    }

    return 0;
}