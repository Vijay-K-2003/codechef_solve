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
    if(isLucky(s))
    cout << "YES";
    else 
    {
        stringstream ss(s);
        int x = 0;
        ss >> x;
        int flag = 0;
        for(int i = 0 ; i < x ; i++)
        {
            if(isLucky(to_string(i+1)) && (x % (i+1) == 0))
            {
                cout << "YES";
                flag++;
                break;
            }
        }
        if(flag == 0)
        cout << "NO";
    }
    return 0;
}