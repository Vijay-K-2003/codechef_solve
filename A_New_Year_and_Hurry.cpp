#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr(10, 0);
    int sum = 0;
    for(int i = 0 ; i < 10 ; i++)
    {
        arr[i] = sum + 5*(i+1);
        sum = arr[i];
        // cout << arr[i] << endl;
    }
    int n, k;
    cin >> n >> k;
    int i;
    if(arr[n-1] <= 240-k)
        cout << n << endl;
    else if (arr[0] > 240-k)
        cout << 0 << endl;
    else
    {
        int i;
        for(i = n ; i > 0 ; i--)
        {   
            if(arr[i] <= 240 - k)
                break;
        }
        cout << i+1 << endl;
    }

    return 0;
}