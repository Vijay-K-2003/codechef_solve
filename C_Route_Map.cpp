#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    string S[n];
    string T[m];
    for(int i = 0; i < n; i++)
    {
        cin >> S[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> T[i];
    }
    int i = 0, j = 0;
    while(i < n)
    {
        if(S[i] == T[j])
        {
            cout << "Yes\n";
            i++;
            j++;
        } else {
            cout << "No\n";
            i++;
        }
    }
    return 0;
}