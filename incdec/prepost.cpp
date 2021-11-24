#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 10;
    cout << a-- << "\n"; // 10
    cout << a << "\n"; // 9
    cout << --a << "\n"; // 8
    cout << ++a << "\n"; // 9
    cout << a++ << "\n"; // 9
    cout << a << "\n"; // 10
    while(--a > 0)
    {
        cout << "Out " << a << "\n";
    }
    return 0;
}