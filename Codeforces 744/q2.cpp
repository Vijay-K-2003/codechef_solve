#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int end = n;
    for (int i = 0; i < n; i++)
    {
        int maxele = INT_MIN;
        int indmax = 0;
        for (int i = 0; i < end; i++)
        {
            if (arr[i] > maxele)
            {
                maxele = arr[i];
                indmax = i;
            }
        }

        int l = indmax, r = end - 1;
        int temp = arr[r];
        arr[r] = arr[l];
        int temp1;
        for(int j = r-1 ; j > l ; j--)
        {
            temp1 = arr[j];
            arr[j] = temp;
            temp = temp1;
        }        
        end = r;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t-- > 0)
        testcase();

    return 0;
}