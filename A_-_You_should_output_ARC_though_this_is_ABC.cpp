#include <bits/stdc++.h>
using namespace std;

int main()
{
    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r, c; cin >> r >> c;
    int arr[2][2];
    for (int i = 0 ; i < 2 ; i++)
        for (int j = 0 ; j < 2 ; j++)
            cin >> arr[i][j];
    cout << arr[r-1][c-1] << endl;
    return 0;
}
