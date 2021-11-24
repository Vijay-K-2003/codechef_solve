#include <bits/stdc++.h>

using namespace std;

int check(int arr[], int p, int h, int length)
{
    int len = length;
    int cnt = 0;
    int men[(int)pow(2, h) - 1];
    men[1] = p;
    for(int i = 1 ; i < len + pow(2, h -1) ; i++)
    {
        if(i == 1 && arr[i] == 1)
        {
            if(arr[i] == 1)
            {
                men[2*i] = 1;
                men[2*i + 1] = 1;
            }
            else if(arr[i] == 0)
            {
                men[2*i] = 1;
                men[2*i + 1] = 0;
            }
        }
        else
        {
            if(arr[i/2] == 1 && men[i/2] == 1)
            {
                men[2*i] = 1;
                men[2*i + 1] = 1;
            }
            else if(arr[i/2] == 0 && men[i/2] == 1)
            {
                men[2*i] = 1;
                men[2*i + 1] = 0;
            }
            else if(arr[i/2] == 1 && men[i/2] == 0)
            {
                men[2*i] = 0;
                men[2*i + 1] = 1;
            }
            else
            {
                men[2*i] = 0;
                men[2*i + 1] = 0;
            }
        }
    }
    for(int i = pow(2, h) + 1; i <= pow(2,h+1) ; i++ )
    {
        if(men[i] == 1)
        cnt++;
    }
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    while(t-- > 0)
    {
        int n;
        cin >> n;
        int mem = pow(2, n-1);
        int arr[mem + 1];

        string s;
        cin >> s;
        for(int i = 0 ; i < mem+1 ; i++)
        {
            char a = s.at(i);
            if(a == 'Y')
            arr[i + 1] = 1;
            else
            arr[i + 1] = 0;
        }
        int p = 1;

        int ans = check(arr, p, n, mem+1);

        cout << ans << "\n";
    }
    return 0;
}