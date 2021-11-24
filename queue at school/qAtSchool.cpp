#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    string s1 = "";
    for(int i = 0 ; i < t ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(j != n-1 && s[j] == 'B' && s[j+1] == 'G')
            {
                s1 = s1 + s[j+1] + s[j];
                j++;
                continue;
            }
            else
            s1 = s1 + s[j];
        }
        s = s1;
        s1 = "";
    }
    cout << s;
    return 0;
}