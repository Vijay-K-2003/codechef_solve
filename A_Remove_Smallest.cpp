#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n ;
        cin >> n;
        vector<int> a(n, 0);
        for(int i = 0 ; i < a.size() ; i++){
            cin >> a[i];
        }
        if(n == 0){
            cout << "NO\n";
        } else if(n == 1){
            cout << "YES\n";
        }
        else{            
            int flag = 0;
            sort(a.begin(), a.end());
            for (int i = 0 ; i < a.size() - 1 ; i++){
                if (abs(a[i] - a[i + 1]) <= 1)
                flag++; // increment flag counter if difference is greater than 1
            }           
            if (n - flag == 1) {
                cout << "YES\n";
            }   else    {
                cout << "NO\n";            
            }
        }
    }

    return 0;
}