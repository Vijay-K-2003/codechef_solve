#include <bits/stdc++.h>
using namespace std;

bool isDivisibleBy7(int n)
{
    /*
    The divisibility rule of 7 states that, if a number is divisible by 7, then “the difference between twice the unit digit of the given number and the remaining part of the given number should be a multiple of 7 or it should be equal to 0”. For example, 798 is divisible by 7.
    */
    return n % 7 == 0;
}

void _(int n)
{
    if (isDivisibleBy7(n))
    {
        cout << n << "\n";
        return;
    }
    else
    {
        int ans = -1;
        for(int i = 0; i < n; i++)
        {
            if(isDivisibleBy7(n - n%10 + i))
            {
                ans = n - n%10 + i;
                break;
            }
        }
        cout << ans << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        _(n);
    }

    return 0;
}