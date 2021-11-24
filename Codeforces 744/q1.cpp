#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    string s;
    cin >> s;
    int cntA = 0, cntB = 0, cntC = 0;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == 'A')         cntA++;
        else if(s[i] == 'B')    cntB++;
        else if(s[i] == 'C')    cntC++;
    }
    if(cntA + cntC == cntB)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t-- > 0)
    testcase();

    return 0;
}