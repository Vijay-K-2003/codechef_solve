#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    //brute force    
    int cnt = 0;
    // 11
    // 11 => 1
    // 
    for (int i = 1; i < sqrt(n) ; i++) {
        if(n % i == 0) {
            cnt++;
        }
    }
    if(cnt == 1)
    cout << "true" << endl;
    else
    cout << "false" << endl;

    // 36 = > 2, 3 =
    int x = 36;
    vector<int> v;
    // 
    return 0;
}