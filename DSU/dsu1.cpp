//? You are given a graph with N vertices and M edges. The vertices are numbered from 1 to N. The edges are numbered from 1 to M. Each vertex also has a weight associated with it - A1, A2, ..., AN.


//? You are asked to perform Q updates. Each update is one of two types:

//? 1 i - This means that edge numbered i should be deleted from the graph.
//? 2 i x - This means that Ai should be updated to x.

//? Let the weight of a connected component of the graph be the sum of the weights associated with all the vertices in the connected component. After each of the Q updates, you should should output the maximum weight among all the connected components.
#include <bits/stdc++.h>
using namespace std;
#define vmvi vector<map<int, vector<int>>>

class Graph {
    private:
        vector<int> vertexWeight;
        vector<pair<int, int>> edges;
        vector<int> comp;
    public:
        Graph(vector<int> weight, vector<pair<int, int>> edge)
        {
            vertexWeight = weight;
            edges = edge;
            int n = vertexWeight.size();
            for(int i = 0 ; i < n ; i++)
            {
                comp.push_back(i+1);
            }
            // comp = [1,2,3,4,5,6,7,8]
            for(int i = 0 ; i < n ; i++)
            {
                if(edges[i].first < edges[i].second)
                {
                    comp[edges[i].second - 1] = edges[i].first;
                }
                else
                {
                    comp[edges[i].first - 1] = edges[i].second;
                }
            }
        }
        void updateWeight(int i, int x)
        {
            vertexWeight[i-1] = x;
        }
        void deleteEdge(int i)
        {
            // erase(position)
            auto rem = edges.begin() + i - 1;
            pair<int, int> req = *rem;
            if(req.first < req.second)
            {
                comp[req.second - 1] = req.second;
            }
            else
            {
                comp[req.first - 1] = req.first;
            }
            edges.erase(edges.begin() + i - 1);
        }

        int connectedSumMax()
        {
            vector<int> sums;
            set<int> s;
            int sum = 0;
            for(int i = 0 ; i < comp.size() ; i++)
            {
                s.insert(comp[i]);
            }
            int t = s.size();
            auto it = s.begin();
            for(int i = 0 ; i < t ; i++)
            {
                sum = 0;
                int req = *(it++);
                for(int j = 0 ; j < comp.size() ; j++)
                {
                    if(req == comp[i] && req == comp[j])
                    {
                        sum += vertexWeight[j];
                    }
                }
                sums.push_back(sum);
            }
            return *max_element(sums.begin(), sums.end());
        }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m ,q;
    cin >> n >> m >> q;
    // initial weights
    vector<int> wts;
    for(int i = 0 ; i < n ; i++)
    {
        int temp;
        cin >> temp;
        wts.push_back(temp);
    }
    vector<pair<int, int>> edge(m);
    for(int i =  0 ; i < m ; i++)
    {
        int u, v;
        cin >> u >> v;
        auto a = make_pair(u, v);
        edge[i] = a;
    }
    Graph g(wts, edge);
    for(int i = 0 ; i < q ; i++)
    {
        int temp;
        cin >> temp;
        if(temp == 1)
        {
            // delete oeperation
            int p;
            cin >> p;
            // delete edge at p from 
            g.deleteEdge(p);
            // print max of sum of connected components
            cout << g.connectedSumMax() << "\n";
        }
        else
        {
            // update operation
            int p, q;
            cin >> p >> q;
            // update weight at p to q
            g.updateWeight(p, q);
            cout << g.connectedSumMax() << "\n";
        }
    }

    return 0;
}
/*
1 2 3
3 2 3
3 2 3

*/