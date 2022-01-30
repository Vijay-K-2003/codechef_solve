#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
void getAnswer(int a, int b)
{
    if (a == 1 && b == 1)
    {
        ans = {1};
    }
    else if (a == 1 && b != 1)
    {
        ans = {-1};
    }
    else if (a >= 2 && b < 2)
    {
        ans = {-1};
    }
    else if (b > a)
    {
        ans = {-1};
    }
    else
    {
        int x = b - 1;
        vector<int> res(a);
        for (int i = 0; i < x; i++)
        {
            res[i] = i + 1;
        }
        for (int j = a - 1; j >= x; j--)
        {
            res[j] = b;
            b++;
        }
        ans = res;
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
        int a, b;
        cin >> a >> b;
        getAnswer(a, b);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
        ans.clear();
    }

    return 0;
}