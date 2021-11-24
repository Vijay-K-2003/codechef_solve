#include <bits/stdc++.h>
using namespace std;

string getPalindrome(int n)
{
    string s = "";
    while(n > 0){
        s = to_string(n%2) + s;
    }
    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s = getPalindrome(n);
        int flag = 0;
        for(int i = 0 ; i <= n/2 ; i++) {
            if(s[i] != s[n-i-1])
            flag++;
        }
        if(flag){
            cout << ;
        }
    }

    return 0;
}