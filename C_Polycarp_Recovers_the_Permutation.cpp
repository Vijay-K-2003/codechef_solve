#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;  cin >> n;
        vector<int> a(n, 0);
        vector<int> p(n);
        for(int i = 0 ; i < n ; i++)
            cin >> a[i];
        for(int i = 0 ; i < n ; i++)
        {
            if(a[0] < a[n-1])
            {
                p.insert(p.begin(), a[0]);
                a.erase(a.begin());
            }
            else if(a[0] > a[n-1])
            {
                p.insert(p.end(), a[n-1]);
                a.erase(a.end()-1);
            }
        }
        for(int i = 0 ; i < n ; i++){
            cout << p[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}