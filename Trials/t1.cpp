#include<bits/stdc++.h>
using namespace std;
bool fun(int A, int B, int C, int D, int E);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t-- > 0){
        int A,B,C,D,E;
        cin >> A >> B >> C >> D >> E;
        if(fun(A,B,C,D,E)){
            cout << "YES" << "\n";
        }
        else
            cout << "NO" << "\n";
    }
}
bool fun(int A, int B, int C, int D, int E){
    if(A+B+C <= D+E)
    {
        if((A+B <= D && C <= E)||
        (B+C <= D && A <= E)||
        (A+C <= D && B <= E))
        return true;
    }
    return false;
}