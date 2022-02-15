#include <bits/stdc++.h>
using namespace std;

void _()
{
    int x;
    cin >> x;
    string s;
    cin >> s;
    int cnt_C = 0, cnt_D = 0, cnt_N = 0;
    for (int i = 0; i < 14 ; i++)
    {
        if (s[i] == 'C') cnt_C++;
        else if (s[i] == 'D') cnt_D++;
        else cnt_N++;
    }
    // Carlsen 
    int Cpoints = cnt_C*2 + cnt_D;
    int Npoints = cnt_N*2 + cnt_D;
    if (Cpoints > Npoints)
    {
        // cout << "Carlsen" << endl;
        cout << 60*x << "\n";
    }
    else if (Cpoints < Npoints)
    {
        // cout << "Next" << endl;
        cout << 40*x << "\n";
    }
    else
    {
        // cout << "Draw" << endl;
        cout << 55*x << "\n";
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