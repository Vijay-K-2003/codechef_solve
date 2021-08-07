#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main()  {
    fastio;
    int t;
    cin >> t;
    while(t-- > 0) 
    {
        int n, d, h;
        cin >> n >> d >> h;
        int level = 0;
        vector<int> a(n);
        int i, check = 0;
        for(i = 0 ; i < n ; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
            if(temp == 0)
            {
                level = level - d;
                if(level < 0)
                level = 0;
            }
            else 
            {
                level = level + temp;
                if(level > h)
                {
                    check = 1;
                }
            }
        }
        if(check == 0)
        cout << "NO\n";
        else 
        cout << "YES\n";
    }
    return 0;
}