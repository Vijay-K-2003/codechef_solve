#include <bits/stdc++.h>
using namespace std;

bool isLucky(string n)
{
    int cnt = 0;
    int c = n.length();
    for(int i = 0 ; i < c ; i++)
    {
        if(n[i] == '4' || n[i] == '7')
        cnt++;
    }
    if(c == cnt) return true;
    else return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == '4' || s[i] == '7')
        cnt++;
    }
    if(isLucky(to_string(cnt))) cout << "YES";
    else                        cout << "NO";
    return 0;
}