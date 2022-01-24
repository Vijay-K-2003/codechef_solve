#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int len = 4*n - 1;
    int count[n];
    for(int i = 0; i < n; i++)  count[i] = 0;
    for(int i = 0 ; i < len ; i++)
    {
        int temp;
        cin >> temp;
        count[temp-1]++;
    }
    int val = -1;
    for(int i = 0; i < n; i++)
    {
        if(count[i] < 4)
        {
            val = i+1;
            break;
        }
    }
    cout << val << "\n";
    return 0;
}