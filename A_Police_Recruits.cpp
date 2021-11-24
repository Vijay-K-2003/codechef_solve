#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int police = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if (temp == -1 && police == 0) cnt++;
        else if (temp == -1 && police > 0) police -= 1;
        else {
            police += temp;
        }
    }
    cout << cnt << "\n";
    return 0;
}