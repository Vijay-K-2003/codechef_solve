#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

class UnionFind {
    private:
        vi p, rank, setSize;
        int numSets;
    public:
        UnionFind(int N){
            p.assign(N, 0);
            for(int i = 0; i < N; i++)
                p[i] = i;
            rank.assign(N, 0);
            setSize.assign(N, 1);
            numSets = N;
        }
        int findSet(int i){
            if(p[i] == i)
                return i;
            else
                return p[i] = findSet(p[i]);
        }
        bool isSameSet(int i, int j){
            return findSet(i) == findSet(j); 
        }
        int sizeOfSet(int i){
            return setSize[findSet(i)];
        }
        int numDisjointSets(){
            return numSets; 
        }

        void unionSet(int i, int j){
            if(isSameSet(i,j)) 
                return; 
            
            int x = findSet(i);
            int y = findSet(j);

            if(rank[x] > rank[y])
                swap(x,y);
            
            p[x] = y; 

            if (rank[x] == rank[y])
                rank[y]++;
            
            setSize[y] += setSize[x];
            numSets--;

        }


};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q; 
    UnionFind UF(n);
    while(q-- > 0)
    {
        int t, u, v;
        cin >> t >> u >> v;
        if(t == 0)
        {
            UF.unionSet(u, v);
        }
        else
        {
            if(UF.isSameSet(u, v))
            cout << "1\n";
            else
            cout << "0\n";
        }
    }

    return 0;
}