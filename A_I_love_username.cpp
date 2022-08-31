#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    int arr[t];
    int max = INT_MIN, min = INT_MAX;
    int cnt = 0;
    for(int i = 0 ; i < t ; i++)
    {
        cin >> arr[i];
        if (arr[i] > max){
            max = arr[i];
            if (i!=0)
            cnt++;
        }
        else if (arr[i] < min) {
            min = arr[i];
            if (i!=0)
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0; 
}
