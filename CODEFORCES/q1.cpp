#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    int n;
    cin >> n;
    // n = 3 () () ()
    // n = 4 () () () ()
    string s = "()";
    string str = "";
    for(int i = 0 ; i < n ; i++)
    {
        str += s;
    }
    // cout << str << "\n";
    // cout << str << "\n";    // this is first part

    vector<char> sarr;
    for(int i = 0 ; i < str.length() ; i++)
    {
        sarr.push_back(str[i]);
    }
    sort(sarr.begin(), sarr.end());
    // cout << sarr[0] << sarr[1] << "\n";
    for(int k = 0 ; k < n/2 ; k++)
    {
        for(int i = 0 ; i < n/2 - k + 1 ; i++)
        {
            cout << sarr[i+k] << sarr[n-i-k] ;
        }
        cout << "\n";
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t-- > 0) testcase();
    return 0;
}