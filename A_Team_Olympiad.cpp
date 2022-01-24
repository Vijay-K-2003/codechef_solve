#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    vector<int> a1, a2, a3;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 1)
        {
            cnt1++;
            a1.push_back(i+1);
        }
        else if(arr[i] == 2)
        {
            cnt2++;
            a2.push_back(i+1);
        }
        else
        {
            cnt3++;
            a3.push_back(i+1);
        } 
    }
    int ans = min(cnt1, min(cnt2, cnt3));
    cout << ans << endl;
    for(int i = 0; i < ans; i++)
    {
        cout << a1[i] << " " << a2[i] << " " << a3[i] << "\n";
    }
    return 0;
}