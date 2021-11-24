#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int i;
    for(i = 0 ; i < n ; i++)
    {
        int temp;
        cin >> temp;
        if(temp == 1)
        break;
    }
    if(i != n)
    cout << "HARD";
    else 
    cout << "EASY";
    return 0;
}