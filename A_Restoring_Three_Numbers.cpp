#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int ab, ac, bc, abc;
    // cin >> ab >> ac >> bc >> abc;
    // int b = ((ab-ac+bc)/2);
    // int a = ((ab+ac-bc)/2);
    // int c = (abc - a - b);
    // cout << a << " " << b << " " << c ;

    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    int abc = max(x1, max(x2, max(x3, x4)));
    if(abc == x4)
    cout << abc - x1 << " " << abc - x2 << " " << abc - x3;
    else if(abc == x3)
    cout << abc - x1 << " " << abc - x2 << " " << abc - x4;
    else if(abc == x2)
    cout << abc - x1 << " " << abc - x4 << " " << abc - x3;
    else if(abc == x1)
    cout << abc - x4 << " " << abc - x2 << " " << abc - x3;
    return 0;
}