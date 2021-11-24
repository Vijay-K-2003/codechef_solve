#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int i = 0;
    int flag = 0;
    while(i < s.length())
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            flag++;
            break;
        }
        i++;
    }
    if(flag == 1)
    cout << "YES";
    else 
    cout << "NO";
    return 0;
}