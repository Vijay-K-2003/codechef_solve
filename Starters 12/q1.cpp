#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    vector<int> arr(7, 0);
    int sum = 0;
    for(int i = 0 ; i < 7 ; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum > 7-sum)
    cout << "YES\n";
    else
    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t-- > 0)
    testcase();

    return 0;
}