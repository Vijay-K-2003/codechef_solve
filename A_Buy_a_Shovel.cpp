#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, r ;
    cin >> k >> r;
    if (k%10 == 0){
        cout << 1 ;
    } else {
        // n*k = 10x + r
        int last = k%10;
        int n = 0;
        for(int i = 1 ; i < 10 ; i++){
            if((i*last)%10 == r || (i*last)%10 == 0){
                n = i;
                break;
            }
        } 
        cout << n;
    }

    return 0;
}