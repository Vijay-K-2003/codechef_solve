#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a, b;
        cin >> a;
        cin >> b;

        int flag = 1;
        for (int i = n-1 ; i > 0 ; i--){
            if(a.substr(i) < b.substr(i))
                flag++;
            else break;
        }    
        cout << flag << "\n";
    }

    return 0;
}