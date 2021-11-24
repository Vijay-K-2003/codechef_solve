#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0 ; i < n ; i++)
    {
        if (i % 2 == 0)
        {
            for(int j = 0 ; j < m ; j++)
                cout << "#";
        }
        else
        {
            if (((i-1)/2) % 2 == 0)
            {
                for (int j = 1 ; j < m ; j++)
                    cout << ".";
                cout << "#";
            }
            else
            {
                cout << "#";
                for (int j = 1 ; j < m ; j++)
                    cout << ".";
            }
        }
        cout << "\n";
    }

    return 0;
}