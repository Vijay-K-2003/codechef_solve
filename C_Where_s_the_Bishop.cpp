#include <bits/stdc++.h>
using namespace std;

char board[8][8];

bool checkIsBishop(int i, int j)  {
    if (board[i][j] == '#' and board[i+1][j+1] == '#' and board[i+1][j-1] == '#' and board[i-1][j-1] == '#') 
        return true;
    return false;
}

void _() {
    vector<pair<int, int>> bishops;
    for (int i = 0 ; i < 8 ; i++) {
        for (int j = 0 ; j < 8 ; j++) {
            cin >> board[i][j];
            if (board[i][j] == '#') {
                bishops.push_back(make_pair(i, j));
            }
        }
    }
    // print bishop positions
    for (auto b : bishops) {
        cout << b.first+1 << " " << b.second+1 << endl;
    }
    // given bishop between 2 and 7 cols and rows
    for (int i = 1 ; i < 7 ; ) {
        for (int j = 1 ; j < 7 ; ) {
            if (board[i][j] == '#' ) {
                // move down right
                
                if (!checkIsBishop(i, j) and i == 7 and j == 7) {
                    i -= 1;
                    j -= 1;
                } else if (!checkIsBishop(i, j)) {
                    i = i - 1;
                    j = j + 1;
                } else {
                    cout << i+1 << " " << j+1 << "\n";
                }
                
                // cout << i+1 << " " << j+1 << "\n";
            }
        }
    }
}

int main()
{
    //fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while (t-- ) _();
    return 0;
}
