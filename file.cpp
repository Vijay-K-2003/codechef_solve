#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S = "dcdbeada";
    int cnt_char[26] = {0};
        for(int i=0;i<S.size() ; i++) {
            cnt_char[S[i] - 'a']++;
        }
        string newStr;
        while (true) {
            newStr = "";
            int idx = -1; // to get index of first repeating character
            for (int i = 0 ; i < S.size() ; i++) {
                if(cnt_char[S[i]-'a'] > 1) {
                    idx = i;
                    cnt_char[S[i]-'a']--;
                    break;
                }
            }
            if (idx == -1) {
                newStr = S;
                break;
            }
            //get reverse string
            for (int i = S.size() - 1 ; i >= 0 ; i--) {
                if (i == idx) continue;
                
                newStr = newStr + S[i];
            }
            
            S = newStr;
            
            bool flag = true;
            for(int i = 0 ; i < 26 ; i++) {
                if (cnt_char[i] > 1) flag = false;
            }
            if(flag) break;
            
        }
        cout << newStr << endl;
    return 0;
}
