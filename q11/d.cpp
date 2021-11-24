#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    int n;
    cin >> n;
    int arr[n][n];
    if(n == 2)
    {
        cout << "-1 -1\n-1 -1\n";
    }
    else
    {
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                if(i == j)
                cout << "-1 ";
                else
                cout << "1 ";
            }
            cout << "\n";
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t-- > 0)
    testcase();
    return 0;
}