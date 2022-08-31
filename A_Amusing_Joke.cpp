# include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    string s3;
    cin >> s3;
    if(s1.size()+s2.size() < s3.size() || s1.size()+s2.size() > s3.size())
        cout << "NO";
    else
    {
        vector<int> ch(26, 0);
        vector<int> output(26, 0);
        for(int i = 0 ; i < s3.size() ; i++)
        {
            output[(int)s3[i] - 65]++;
        }
        for(int j = 0 ; j < s2.size() ; j++)
        {
            ch[(int)s2[j] - 65]++;
        }
        for(int k = 0 ; k < s1.size() ; k++)
        {
            ch[(int)s1[k] - 65]++;
        }
        if(ch == output)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}
