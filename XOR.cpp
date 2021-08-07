#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t-- > 0)
    {
        int n = 8;
        int arr[n];
        int i = 0;
        while(i < n)
        {
            arr[i] = i;
            i++;
        }
        for(int i = 0 ; i < n ; i++)
        {
            int one= arr[i]^i;
            int two = arr[n-1-i]^(n-1-i);
            cout << one << " " << two << "\n";
        }
    }
    return 0;
}