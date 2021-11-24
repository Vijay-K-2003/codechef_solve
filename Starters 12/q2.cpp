#include <bits/stdc++.h>
using namespace std;

int getDig(long long int n)
{
    int cnt = 0;
    while(n!=0)
    {
        cnt++;
        n = n/10;
    }
    return cnt;
}

void testcase()
{
    int n;
    cin >> n;
    if(n == 1)
    cout << 3 <<"\n";
    else if(n == 2)
    cout << 15 << "\n";
    else
    {
        int zeroes = n-3;
        string s = "";
        for(int i = 0 ; i < zeroes ; i++)
            s = s + "0";
        
        cout << 1 << s << 23 ;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t-- > 0)
    testcase();

    return 0;
}