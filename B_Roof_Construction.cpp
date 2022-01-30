#include <bits/stdc++.h>
using namespace std;
void _()
{
    int n;
    cin >> n;
    int arr[n];
    if(n%2 == 0)
    {
        int val = 0;
        int val1 = n/2;
        for(int i = 0; i < n; i++)
        {
            if(i%2 == 0)
            {
                arr[i] = val;
                val = val + 1;
            }
            else
            {
                arr[i] = val1;
                val1 = val1 + 1;
            }
        }
    }
    else
    {
        int val = 0;
        int val1 = ceil(n/2);
        // cout << "check " << val << " " << val1 << endl;
        for(int i = 0; i < n; i++)
        {
            if(i%2 == 0)
            {
                arr[i] = val1;
                val1 = val1 + 1;
            }
            else
            {
                arr[i] = val;
                val = val + 1;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        _();
    }
    

    return 0;
}