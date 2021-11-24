#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int ant = 0, dan = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(s[i] == 'A') ant++;
        if(s[i] == 'D') dan++;
    }
    if(ant > dan)       cout << "Anton";
    else if(dan > ant)  cout << "Danik";
    else                cout << "Friendship";
    return 0;
}