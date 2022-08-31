#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1;
    char arr[100];
    while (i <= 100) {
        cout << i++ << " ";
        arr[i-1] = 'C';
    }
    cout << "\n";
    for(int t = 0 ; t < 100 ; t++)
    cout << arr[t] << " ";

    cout << "\n";
    for (int j = 1 ; j <= 100 ; j++) {
        for(int k = 1 ; k <= 100 ; k++) {
            if(k % j == 0) {
                if (arr[k-1] == 'C') {
                    arr[k-1] = 'O';
                    cout << "O ";
                } else {
                    arr[k-1] = 'C';
                    cout << "C ";
                }
            } else {
                cout << "  ";
            }
        }
        cout << "\n";
        
    }
    return 0;
}
