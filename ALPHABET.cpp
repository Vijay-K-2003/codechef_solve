#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    char arr[256];
    
    for(int i = 0; i < s.size() ; i++)
    {
        arr[s[i]] = 1;
    }

    int n;
    cin >> n;

    while(n--) {
        string str;
        cin >> str;
        int i;
        for(i = 0; i < str.size() ; i++) {
            if(arr[str[i]] == 0)
            {
                break;
            } 
        }
        if(i == str.size()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}