#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vi a;
    int sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
        sum += temp;
    }
    sort(a.begin(), a.end());
    int sumMe = 0;
    int sumHe = sum;
    int num = 0;
    for(int i = n - 1 ; i >= 0 ; i--)
    {
        sumMe += a[i];
        sumHe -= a[i];
        num++;
        if(sumMe > sumHe)
        break;
    }
    cout << num;

    return 0;
}